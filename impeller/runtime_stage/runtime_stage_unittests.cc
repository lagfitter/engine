// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <future>

#include "flutter/fml/make_copyable.h"
#include "flutter/impeller/fixtures/simple.vert.h"
#include "flutter/testing/testing.h"
#include "impeller/base/allocation.h"
#include "impeller/base/validation.h"
#include "impeller/core/runtime_types.h"
#include "impeller/core/shader_types.h"
#include "impeller/playground/playground.h"
#include "impeller/renderer/pipeline_descriptor.h"
#include "impeller/renderer/pipeline_library.h"
#include "impeller/renderer/shader_library.h"
#include "impeller/runtime_stage/runtime_stage.h"
#include "impeller/runtime_stage/runtime_stage_playground.h"

namespace impeller {
namespace testing {

using RuntimeStageTest = RuntimeStagePlayground;
INSTANTIATE_PLAYGROUND_SUITE(RuntimeStageTest);

TEST_P(RuntimeStageTest, CanReadValidBlob) {
  if (!BackendSupportsFragmentProgram()) {
    GTEST_SKIP_("This backend doesn't support runtime effects.");
  }

  const std::shared_ptr<fml::Mapping> fixture =
      flutter::testing::OpenFixtureAsMapping("ink_sparkle.frag.iplr");
  ASSERT_TRUE(fixture);
  ASSERT_GT(fixture->GetSize(), 0u);
  auto stages = RuntimeStage::DecodeRuntimeStages(fixture);
  auto stage = stages[PlaygroundBackendToRuntimeStageBackend(GetBackend())];
  ASSERT_TRUE(stage->IsValid());
  ASSERT_EQ(stage->GetShaderStage(), RuntimeShaderStage::kFragment);
}

TEST_P(RuntimeStageTest, CanRejectInvalidBlob) {
  if (!BackendSupportsFragmentProgram()) {
    GTEST_SKIP_("This backend doesn't support runtime effects.");
  }

  ScopedValidationDisable disable_validation;
  const std::shared_ptr<fml::Mapping> fixture =
      flutter::testing::OpenFixtureAsMapping("ink_sparkle.frag.iplr");
  ASSERT_TRUE(fixture);
  auto junk_allocation = std::make_shared<Allocation>();
  ASSERT_TRUE(junk_allocation->Truncate(fixture->GetSize(), false));
  // Not meant to be secure. Just reject obviously bad blobs using magic
  // numbers.
  ::memset(junk_allocation->GetBuffer(), 127, junk_allocation->GetLength());
  auto stages = RuntimeStage::DecodeRuntimeStages(
      CreateMappingFromAllocation(junk_allocation));
  ASSERT_FALSE(stages[PlaygroundBackendToRuntimeStageBackend(GetBackend())]);
}

TEST_P(RuntimeStageTest, CanReadUniforms) {
  if (!BackendSupportsFragmentProgram()) {
    GTEST_SKIP_("This backend doesn't support runtime effects.");
  }

  const std::shared_ptr<fml::Mapping> fixture =
      flutter::testing::OpenFixtureAsMapping("ink_sparkle.frag.iplr");
  ASSERT_TRUE(fixture);
  ASSERT_GT(fixture->GetSize(), 0u);
  auto stages = RuntimeStage::DecodeRuntimeStages(fixture);
  auto stage = stages[PlaygroundBackendToRuntimeStageBackend(GetBackend())];

  ASSERT_TRUE(stage->IsValid());
  ASSERT_EQ(stage->GetUniforms().size(), 17u);
  {
    auto uni = stage->GetUniform("u_color");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 4u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 0u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_alpha");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 1u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_sparkle_color");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 4u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 2u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_sparkle_alpha");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 3u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_blur");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 4u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_radius_scale");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 6u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_max_radius");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 7u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_resolution_scale");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 8u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_noise_scale");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 9u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_noise_phase");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 1u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 10u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }

  {
    auto uni = stage->GetUniform("u_circle1");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 11u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_circle2");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 12u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_circle3");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 13u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_rotation1");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 14u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_rotation2");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 15u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
  {
    auto uni = stage->GetUniform("u_rotation3");
    ASSERT_NE(uni, nullptr);
    ASSERT_EQ(uni->dimensions.rows, 2u);
    ASSERT_EQ(uni->dimensions.cols, 1u);
    ASSERT_EQ(uni->location, 16u);
    ASSERT_EQ(uni->type, RuntimeUniformType::kFloat);
  }
}

TEST_P(RuntimeStageTest, CanRegisterStage) {
  if (!BackendSupportsFragmentProgram()) {
    GTEST_SKIP_("This backend doesn't support runtime effects.");
  }

  const std::shared_ptr<fml::Mapping> fixture =
      flutter::testing::OpenFixtureAsMapping("ink_sparkle.frag.iplr");
  ASSERT_TRUE(fixture);
  ASSERT_GT(fixture->GetSize(), 0u);
  auto stages = RuntimeStage::DecodeRuntimeStages(fixture);
  auto stage = stages[PlaygroundBackendToRuntimeStageBackend(GetBackend())];
  ASSERT_TRUE(stage->IsValid());
  std::promise<bool> registration;
  auto future = registration.get_future();
  auto library = GetContext()->GetShaderLibrary();
  library->RegisterFunction(
      stage->GetEntrypoint(),                  //
      ToShaderStage(stage->GetShaderStage()),  //
      stage->GetCodeMapping(),                 //
      fml::MakeCopyable([reg = std::move(registration)](bool result) mutable {
        reg.set_value(result);
      }));
  ASSERT_TRUE(future.get());
  {
    auto function =
        library->GetFunction(stage->GetEntrypoint(), ShaderStage::kFragment);
    ASSERT_NE(function, nullptr);
  }

  // Check if unregistering works.

  library->UnregisterFunction(stage->GetEntrypoint(), ShaderStage::kFragment);
  {
    auto function =
        library->GetFunction(stage->GetEntrypoint(), ShaderStage::kFragment);
    ASSERT_EQ(function, nullptr);
  }
}

TEST_P(RuntimeStageTest, CanCreatePipelineFromRuntimeStage) {
  if (!BackendSupportsFragmentProgram()) {
    GTEST_SKIP_("This backend doesn't support runtime effects.");
  }
  auto stages = OpenAssetAsRuntimeStage("ink_sparkle.frag.iplr");
  auto stage = stages[PlaygroundBackendToRuntimeStageBackend(GetBackend())];

  ASSERT_TRUE(stage);
  ASSERT_NE(stage, nullptr);
  ASSERT_TRUE(RegisterStage(*stage));
  auto library = GetContext()->GetShaderLibrary();
  using VS = SimpleVertexShader;
  PipelineDescriptor desc;
  desc.SetLabel("Runtime Stage InkSparkle");
  desc.AddStageEntrypoint(
      library->GetFunction(VS::kEntrypointName, ShaderStage::kVertex));
  desc.AddStageEntrypoint(
      library->GetFunction(stage->GetEntrypoint(), ShaderStage::kFragment));
  auto vertex_descriptor = std::make_shared<VertexDescriptor>();
  vertex_descriptor->SetStageInputs(VS::kAllShaderStageInputs,
                                    VS::kInterleavedBufferLayout);

  desc.SetVertexDescriptor(std::move(vertex_descriptor));
  ColorAttachmentDescriptor color0;
  color0.format = GetContext()->GetCapabilities()->GetDefaultColorFormat();
  StencilAttachmentDescriptor stencil0;
  stencil0.stencil_compare = CompareFunction::kEqual;
  desc.SetColorAttachmentDescriptor(0u, color0);
  desc.SetStencilAttachmentDescriptors(stencil0);
  const auto stencil_fmt =
      GetContext()->GetCapabilities()->GetDefaultStencilFormat();
  desc.SetStencilPixelFormat(stencil_fmt);
  auto pipeline = GetContext()->GetPipelineLibrary()->GetPipeline(desc).Get();
  ASSERT_NE(pipeline, nullptr);
}

TEST_P(RuntimeStageTest, ContainsExpectedShaderTypes) {
  auto stages = OpenAssetAsRuntimeStage("ink_sparkle.frag.iplr");
  // Right now, SkSL gets implicitly bundled regardless of what the build rule
  // for this test requested. After
  // https://github.com/flutter/flutter/issues/138919, this may require a build
  // rule change or a new test.
  EXPECT_TRUE(stages[RuntimeStageBackend::kSkSL]);

  EXPECT_TRUE(stages[RuntimeStageBackend::kOpenGLES]);
  EXPECT_TRUE(stages[RuntimeStageBackend::kMetal]);
  // TODO(dnfield): Flip this when
  // https://github.com/flutter/flutter/issues/122823 is fixed.
  EXPECT_FALSE(stages[RuntimeStageBackend::kVulkan]);
}

}  // namespace testing
}  // namespace impeller

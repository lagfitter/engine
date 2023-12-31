// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_SHELL_PLATFORM_WINDOWS_WINDOW_PROC_DELEGATE_MANAGER_H_
#define FLUTTER_SHELL_PLATFORM_WINDOWS_WINDOW_PROC_DELEGATE_MANAGER_H_

#include <Windows.h>

#include <map>
#include <optional>

#include "flutter/fml/macros.h"
#include "flutter/shell/platform/windows/public/flutter_windows.h"

namespace flutter {

// Handles registration, unregistration, and dispatching for WindowProc
// delegation.
class WindowProcDelegateManager {
 public:
  explicit WindowProcDelegateManager();
  ~WindowProcDelegateManager();

  // Adds |delegate| as a delegate to be called for |OnTopLevelWindowProc|.
  //
  // Multiple calls with the same |delegate| will replace the previous
  // registration, even if |user_data| is different.
  void RegisterTopLevelWindowProcDelegate(
      FlutterDesktopWindowProcCallback delegate,
      void* user_data);

  // Unregisters |delegate| as a delate for |OnTopLevelWindowProc|.
  void UnregisterTopLevelWindowProcDelegate(
      FlutterDesktopWindowProcCallback delegate);

  // Calls any registered WindowProc delegates.
  //
  // If a result is returned, then the message was handled in such a way that
  // further handling should not be done.
  std::optional<LRESULT> OnTopLevelWindowProc(HWND hwnd,
                                              UINT message,
                                              WPARAM wparam,
                                              LPARAM lparam);

 private:
  std::map<FlutterDesktopWindowProcCallback, void*>
      top_level_window_proc_handlers_;

  FML_DISALLOW_COPY_AND_ASSIGN(WindowProcDelegateManager);
};

}  // namespace flutter

#endif  // FLUTTER_SHELL_PLATFORM_WINDOWS_WINDOW_PROC_DELEGATE_MANAGER_H_

// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_SHELL_PLATFORM_EMBEDDER_TEST_UTILS_KEY_CODES_G_H_
#define FLUTTER_SHELL_PLATFORM_EMBEDDER_TEST_UTILS_KEY_CODES_G_H_

#include <cinttypes>

// DO NOT EDIT -- DO NOT EDIT -- DO NOT EDIT
// This file is generated by
// flutter/flutter:dev/tools/gen_keycodes/bin/gen_keycodes.dart and should not
// be edited directly.
//
// Edit the template
// flutter/flutter:dev/tools/gen_keycodes/data/key_codes_cc.tmpl
// instead.
//
// See flutter/flutter:dev/tools/gen_keycodes/README.md for more information.

// This file contains keyboard constants to be used in unit tests.  They should
// not be used in production code.

namespace flutter {

namespace testing {

namespace keycodes {

constexpr uint64_t kPhysicalHyper = 0x00000010;
constexpr uint64_t kPhysicalSuperKey = 0x00000011;
constexpr uint64_t kPhysicalFn = 0x00000012;
constexpr uint64_t kPhysicalFnLock = 0x00000013;
constexpr uint64_t kPhysicalSuspend = 0x00000014;
constexpr uint64_t kPhysicalResume = 0x00000015;
constexpr uint64_t kPhysicalTurbo = 0x00000016;
constexpr uint64_t kPhysicalPrivacyScreenToggle = 0x00000017;
constexpr uint64_t kPhysicalMicrophoneMuteToggle = 0x00000018;
constexpr uint64_t kPhysicalSleep = 0x00010082;
constexpr uint64_t kPhysicalWakeUp = 0x00010083;
constexpr uint64_t kPhysicalDisplayToggleIntExt = 0x000100b5;
constexpr uint64_t kPhysicalGameButton1 = 0x0005ff01;
constexpr uint64_t kPhysicalGameButton2 = 0x0005ff02;
constexpr uint64_t kPhysicalGameButton3 = 0x0005ff03;
constexpr uint64_t kPhysicalGameButton4 = 0x0005ff04;
constexpr uint64_t kPhysicalGameButton5 = 0x0005ff05;
constexpr uint64_t kPhysicalGameButton6 = 0x0005ff06;
constexpr uint64_t kPhysicalGameButton7 = 0x0005ff07;
constexpr uint64_t kPhysicalGameButton8 = 0x0005ff08;
constexpr uint64_t kPhysicalGameButton9 = 0x0005ff09;
constexpr uint64_t kPhysicalGameButton10 = 0x0005ff0a;
constexpr uint64_t kPhysicalGameButton11 = 0x0005ff0b;
constexpr uint64_t kPhysicalGameButton12 = 0x0005ff0c;
constexpr uint64_t kPhysicalGameButton13 = 0x0005ff0d;
constexpr uint64_t kPhysicalGameButton14 = 0x0005ff0e;
constexpr uint64_t kPhysicalGameButton15 = 0x0005ff0f;
constexpr uint64_t kPhysicalGameButton16 = 0x0005ff10;
constexpr uint64_t kPhysicalGameButtonA = 0x0005ff11;
constexpr uint64_t kPhysicalGameButtonB = 0x0005ff12;
constexpr uint64_t kPhysicalGameButtonC = 0x0005ff13;
constexpr uint64_t kPhysicalGameButtonLeft1 = 0x0005ff14;
constexpr uint64_t kPhysicalGameButtonLeft2 = 0x0005ff15;
constexpr uint64_t kPhysicalGameButtonMode = 0x0005ff16;
constexpr uint64_t kPhysicalGameButtonRight1 = 0x0005ff17;
constexpr uint64_t kPhysicalGameButtonRight2 = 0x0005ff18;
constexpr uint64_t kPhysicalGameButtonSelect = 0x0005ff19;
constexpr uint64_t kPhysicalGameButtonStart = 0x0005ff1a;
constexpr uint64_t kPhysicalGameButtonThumbLeft = 0x0005ff1b;
constexpr uint64_t kPhysicalGameButtonThumbRight = 0x0005ff1c;
constexpr uint64_t kPhysicalGameButtonX = 0x0005ff1d;
constexpr uint64_t kPhysicalGameButtonY = 0x0005ff1e;
constexpr uint64_t kPhysicalGameButtonZ = 0x0005ff1f;
constexpr uint64_t kPhysicalUsbReserved = 0x00070000;
constexpr uint64_t kPhysicalUsbErrorRollOver = 0x00070001;
constexpr uint64_t kPhysicalUsbPostFail = 0x00070002;
constexpr uint64_t kPhysicalUsbErrorUndefined = 0x00070003;
constexpr uint64_t kPhysicalKeyA = 0x00070004;
constexpr uint64_t kPhysicalKeyB = 0x00070005;
constexpr uint64_t kPhysicalKeyC = 0x00070006;
constexpr uint64_t kPhysicalKeyD = 0x00070007;
constexpr uint64_t kPhysicalKeyE = 0x00070008;
constexpr uint64_t kPhysicalKeyF = 0x00070009;
constexpr uint64_t kPhysicalKeyG = 0x0007000a;
constexpr uint64_t kPhysicalKeyH = 0x0007000b;
constexpr uint64_t kPhysicalKeyI = 0x0007000c;
constexpr uint64_t kPhysicalKeyJ = 0x0007000d;
constexpr uint64_t kPhysicalKeyK = 0x0007000e;
constexpr uint64_t kPhysicalKeyL = 0x0007000f;
constexpr uint64_t kPhysicalKeyM = 0x00070010;
constexpr uint64_t kPhysicalKeyN = 0x00070011;
constexpr uint64_t kPhysicalKeyO = 0x00070012;
constexpr uint64_t kPhysicalKeyP = 0x00070013;
constexpr uint64_t kPhysicalKeyQ = 0x00070014;
constexpr uint64_t kPhysicalKeyR = 0x00070015;
constexpr uint64_t kPhysicalKeyS = 0x00070016;
constexpr uint64_t kPhysicalKeyT = 0x00070017;
constexpr uint64_t kPhysicalKeyU = 0x00070018;
constexpr uint64_t kPhysicalKeyV = 0x00070019;
constexpr uint64_t kPhysicalKeyW = 0x0007001a;
constexpr uint64_t kPhysicalKeyX = 0x0007001b;
constexpr uint64_t kPhysicalKeyY = 0x0007001c;
constexpr uint64_t kPhysicalKeyZ = 0x0007001d;
constexpr uint64_t kPhysicalDigit1 = 0x0007001e;
constexpr uint64_t kPhysicalDigit2 = 0x0007001f;
constexpr uint64_t kPhysicalDigit3 = 0x00070020;
constexpr uint64_t kPhysicalDigit4 = 0x00070021;
constexpr uint64_t kPhysicalDigit5 = 0x00070022;
constexpr uint64_t kPhysicalDigit6 = 0x00070023;
constexpr uint64_t kPhysicalDigit7 = 0x00070024;
constexpr uint64_t kPhysicalDigit8 = 0x00070025;
constexpr uint64_t kPhysicalDigit9 = 0x00070026;
constexpr uint64_t kPhysicalDigit0 = 0x00070027;
constexpr uint64_t kPhysicalEnter = 0x00070028;
constexpr uint64_t kPhysicalEscape = 0x00070029;
constexpr uint64_t kPhysicalBackspace = 0x0007002a;
constexpr uint64_t kPhysicalTab = 0x0007002b;
constexpr uint64_t kPhysicalSpace = 0x0007002c;
constexpr uint64_t kPhysicalMinus = 0x0007002d;
constexpr uint64_t kPhysicalEqual = 0x0007002e;
constexpr uint64_t kPhysicalBracketLeft = 0x0007002f;
constexpr uint64_t kPhysicalBracketRight = 0x00070030;
constexpr uint64_t kPhysicalBackslash = 0x00070031;
constexpr uint64_t kPhysicalSemicolon = 0x00070033;
constexpr uint64_t kPhysicalQuote = 0x00070034;
constexpr uint64_t kPhysicalBackquote = 0x00070035;
constexpr uint64_t kPhysicalComma = 0x00070036;
constexpr uint64_t kPhysicalPeriod = 0x00070037;
constexpr uint64_t kPhysicalSlash = 0x00070038;
constexpr uint64_t kPhysicalCapsLock = 0x00070039;
constexpr uint64_t kPhysicalF1 = 0x0007003a;
constexpr uint64_t kPhysicalF2 = 0x0007003b;
constexpr uint64_t kPhysicalF3 = 0x0007003c;
constexpr uint64_t kPhysicalF4 = 0x0007003d;
constexpr uint64_t kPhysicalF5 = 0x0007003e;
constexpr uint64_t kPhysicalF6 = 0x0007003f;
constexpr uint64_t kPhysicalF7 = 0x00070040;
constexpr uint64_t kPhysicalF8 = 0x00070041;
constexpr uint64_t kPhysicalF9 = 0x00070042;
constexpr uint64_t kPhysicalF10 = 0x00070043;
constexpr uint64_t kPhysicalF11 = 0x00070044;
constexpr uint64_t kPhysicalF12 = 0x00070045;
constexpr uint64_t kPhysicalPrintScreen = 0x00070046;
constexpr uint64_t kPhysicalScrollLock = 0x00070047;
constexpr uint64_t kPhysicalPause = 0x00070048;
constexpr uint64_t kPhysicalInsert = 0x00070049;
constexpr uint64_t kPhysicalHome = 0x0007004a;
constexpr uint64_t kPhysicalPageUp = 0x0007004b;
constexpr uint64_t kPhysicalDelete = 0x0007004c;
constexpr uint64_t kPhysicalEnd = 0x0007004d;
constexpr uint64_t kPhysicalPageDown = 0x0007004e;
constexpr uint64_t kPhysicalArrowRight = 0x0007004f;
constexpr uint64_t kPhysicalArrowLeft = 0x00070050;
constexpr uint64_t kPhysicalArrowDown = 0x00070051;
constexpr uint64_t kPhysicalArrowUp = 0x00070052;
constexpr uint64_t kPhysicalNumLock = 0x00070053;
constexpr uint64_t kPhysicalNumpadDivide = 0x00070054;
constexpr uint64_t kPhysicalNumpadMultiply = 0x00070055;
constexpr uint64_t kPhysicalNumpadSubtract = 0x00070056;
constexpr uint64_t kPhysicalNumpadAdd = 0x00070057;
constexpr uint64_t kPhysicalNumpadEnter = 0x00070058;
constexpr uint64_t kPhysicalNumpad1 = 0x00070059;
constexpr uint64_t kPhysicalNumpad2 = 0x0007005a;
constexpr uint64_t kPhysicalNumpad3 = 0x0007005b;
constexpr uint64_t kPhysicalNumpad4 = 0x0007005c;
constexpr uint64_t kPhysicalNumpad5 = 0x0007005d;
constexpr uint64_t kPhysicalNumpad6 = 0x0007005e;
constexpr uint64_t kPhysicalNumpad7 = 0x0007005f;
constexpr uint64_t kPhysicalNumpad8 = 0x00070060;
constexpr uint64_t kPhysicalNumpad9 = 0x00070061;
constexpr uint64_t kPhysicalNumpad0 = 0x00070062;
constexpr uint64_t kPhysicalNumpadDecimal = 0x00070063;
constexpr uint64_t kPhysicalIntlBackslash = 0x00070064;
constexpr uint64_t kPhysicalContextMenu = 0x00070065;
constexpr uint64_t kPhysicalPower = 0x00070066;
constexpr uint64_t kPhysicalNumpadEqual = 0x00070067;
constexpr uint64_t kPhysicalF13 = 0x00070068;
constexpr uint64_t kPhysicalF14 = 0x00070069;
constexpr uint64_t kPhysicalF15 = 0x0007006a;
constexpr uint64_t kPhysicalF16 = 0x0007006b;
constexpr uint64_t kPhysicalF17 = 0x0007006c;
constexpr uint64_t kPhysicalF18 = 0x0007006d;
constexpr uint64_t kPhysicalF19 = 0x0007006e;
constexpr uint64_t kPhysicalF20 = 0x0007006f;
constexpr uint64_t kPhysicalF21 = 0x00070070;
constexpr uint64_t kPhysicalF22 = 0x00070071;
constexpr uint64_t kPhysicalF23 = 0x00070072;
constexpr uint64_t kPhysicalF24 = 0x00070073;
constexpr uint64_t kPhysicalOpen = 0x00070074;
constexpr uint64_t kPhysicalHelp = 0x00070075;
constexpr uint64_t kPhysicalSelect = 0x00070077;
constexpr uint64_t kPhysicalAgain = 0x00070079;
constexpr uint64_t kPhysicalUndo = 0x0007007a;
constexpr uint64_t kPhysicalCut = 0x0007007b;
constexpr uint64_t kPhysicalCopy = 0x0007007c;
constexpr uint64_t kPhysicalPaste = 0x0007007d;
constexpr uint64_t kPhysicalFind = 0x0007007e;
constexpr uint64_t kPhysicalAudioVolumeMute = 0x0007007f;
constexpr uint64_t kPhysicalAudioVolumeUp = 0x00070080;
constexpr uint64_t kPhysicalAudioVolumeDown = 0x00070081;
constexpr uint64_t kPhysicalNumpadComma = 0x00070085;
constexpr uint64_t kPhysicalIntlRo = 0x00070087;
constexpr uint64_t kPhysicalKanaMode = 0x00070088;
constexpr uint64_t kPhysicalIntlYen = 0x00070089;
constexpr uint64_t kPhysicalConvert = 0x0007008a;
constexpr uint64_t kPhysicalNonConvert = 0x0007008b;
constexpr uint64_t kPhysicalLang1 = 0x00070090;
constexpr uint64_t kPhysicalLang2 = 0x00070091;
constexpr uint64_t kPhysicalLang3 = 0x00070092;
constexpr uint64_t kPhysicalLang4 = 0x00070093;
constexpr uint64_t kPhysicalLang5 = 0x00070094;
constexpr uint64_t kPhysicalAbort = 0x0007009b;
constexpr uint64_t kPhysicalProps = 0x000700a3;
constexpr uint64_t kPhysicalNumpadParenLeft = 0x000700b6;
constexpr uint64_t kPhysicalNumpadParenRight = 0x000700b7;
constexpr uint64_t kPhysicalNumpadBackspace = 0x000700bb;
constexpr uint64_t kPhysicalNumpadMemoryStore = 0x000700d0;
constexpr uint64_t kPhysicalNumpadMemoryRecall = 0x000700d1;
constexpr uint64_t kPhysicalNumpadMemoryClear = 0x000700d2;
constexpr uint64_t kPhysicalNumpadMemoryAdd = 0x000700d3;
constexpr uint64_t kPhysicalNumpadMemorySubtract = 0x000700d4;
constexpr uint64_t kPhysicalNumpadSignChange = 0x000700d7;
constexpr uint64_t kPhysicalNumpadClear = 0x000700d8;
constexpr uint64_t kPhysicalNumpadClearEntry = 0x000700d9;
constexpr uint64_t kPhysicalControlLeft = 0x000700e0;
constexpr uint64_t kPhysicalShiftLeft = 0x000700e1;
constexpr uint64_t kPhysicalAltLeft = 0x000700e2;
constexpr uint64_t kPhysicalMetaLeft = 0x000700e3;
constexpr uint64_t kPhysicalControlRight = 0x000700e4;
constexpr uint64_t kPhysicalShiftRight = 0x000700e5;
constexpr uint64_t kPhysicalAltRight = 0x000700e6;
constexpr uint64_t kPhysicalMetaRight = 0x000700e7;
constexpr uint64_t kPhysicalInfo = 0x000c0060;
constexpr uint64_t kPhysicalClosedCaptionToggle = 0x000c0061;
constexpr uint64_t kPhysicalBrightnessUp = 0x000c006f;
constexpr uint64_t kPhysicalBrightnessDown = 0x000c0070;
constexpr uint64_t kPhysicalBrightnessToggle = 0x000c0072;
constexpr uint64_t kPhysicalBrightnessMinimum = 0x000c0073;
constexpr uint64_t kPhysicalBrightnessMaximum = 0x000c0074;
constexpr uint64_t kPhysicalBrightnessAuto = 0x000c0075;
constexpr uint64_t kPhysicalKbdIllumUp = 0x000c0079;
constexpr uint64_t kPhysicalKbdIllumDown = 0x000c007a;
constexpr uint64_t kPhysicalMediaLast = 0x000c0083;
constexpr uint64_t kPhysicalLaunchPhone = 0x000c008c;
constexpr uint64_t kPhysicalProgramGuide = 0x000c008d;
constexpr uint64_t kPhysicalExit = 0x000c0094;
constexpr uint64_t kPhysicalChannelUp = 0x000c009c;
constexpr uint64_t kPhysicalChannelDown = 0x000c009d;
constexpr uint64_t kPhysicalMediaPlay = 0x000c00b0;
constexpr uint64_t kPhysicalMediaPause = 0x000c00b1;
constexpr uint64_t kPhysicalMediaRecord = 0x000c00b2;
constexpr uint64_t kPhysicalMediaFastForward = 0x000c00b3;
constexpr uint64_t kPhysicalMediaRewind = 0x000c00b4;
constexpr uint64_t kPhysicalMediaTrackNext = 0x000c00b5;
constexpr uint64_t kPhysicalMediaTrackPrevious = 0x000c00b6;
constexpr uint64_t kPhysicalMediaStop = 0x000c00b7;
constexpr uint64_t kPhysicalEject = 0x000c00b8;
constexpr uint64_t kPhysicalMediaPlayPause = 0x000c00cd;
constexpr uint64_t kPhysicalSpeechInputToggle = 0x000c00cf;
constexpr uint64_t kPhysicalBassBoost = 0x000c00e5;
constexpr uint64_t kPhysicalMediaSelect = 0x000c0183;
constexpr uint64_t kPhysicalLaunchWordProcessor = 0x000c0184;
constexpr uint64_t kPhysicalLaunchSpreadsheet = 0x000c0186;
constexpr uint64_t kPhysicalLaunchMail = 0x000c018a;
constexpr uint64_t kPhysicalLaunchContacts = 0x000c018d;
constexpr uint64_t kPhysicalLaunchCalendar = 0x000c018e;
constexpr uint64_t kPhysicalLaunchApp2 = 0x000c0192;
constexpr uint64_t kPhysicalLaunchApp1 = 0x000c0194;
constexpr uint64_t kPhysicalLaunchInternetBrowser = 0x000c0196;
constexpr uint64_t kPhysicalLogOff = 0x000c019c;
constexpr uint64_t kPhysicalLockScreen = 0x000c019e;
constexpr uint64_t kPhysicalLaunchControlPanel = 0x000c019f;
constexpr uint64_t kPhysicalSelectTask = 0x000c01a2;
constexpr uint64_t kPhysicalLaunchDocuments = 0x000c01a7;
constexpr uint64_t kPhysicalSpellCheck = 0x000c01ab;
constexpr uint64_t kPhysicalLaunchKeyboardLayout = 0x000c01ae;
constexpr uint64_t kPhysicalLaunchScreenSaver = 0x000c01b1;
constexpr uint64_t kPhysicalLaunchAudioBrowser = 0x000c01b7;
constexpr uint64_t kPhysicalLaunchAssistant = 0x000c01cb;
constexpr uint64_t kPhysicalNewKey = 0x000c0201;
constexpr uint64_t kPhysicalClose = 0x000c0203;
constexpr uint64_t kPhysicalSave = 0x000c0207;
constexpr uint64_t kPhysicalPrint = 0x000c0208;
constexpr uint64_t kPhysicalBrowserSearch = 0x000c0221;
constexpr uint64_t kPhysicalBrowserHome = 0x000c0223;
constexpr uint64_t kPhysicalBrowserBack = 0x000c0224;
constexpr uint64_t kPhysicalBrowserForward = 0x000c0225;
constexpr uint64_t kPhysicalBrowserStop = 0x000c0226;
constexpr uint64_t kPhysicalBrowserRefresh = 0x000c0227;
constexpr uint64_t kPhysicalBrowserFavorites = 0x000c022a;
constexpr uint64_t kPhysicalZoomIn = 0x000c022d;
constexpr uint64_t kPhysicalZoomOut = 0x000c022e;
constexpr uint64_t kPhysicalZoomToggle = 0x000c0232;
constexpr uint64_t kPhysicalRedo = 0x000c0279;
constexpr uint64_t kPhysicalMailReply = 0x000c0289;
constexpr uint64_t kPhysicalMailForward = 0x000c028b;
constexpr uint64_t kPhysicalMailSend = 0x000c028c;
constexpr uint64_t kPhysicalKeyboardLayoutSelect = 0x000c029d;
constexpr uint64_t kPhysicalShowAllWindows = 0x000c029f;

constexpr uint64_t kLogicalSpace = 0x00000000020;
constexpr uint64_t kLogicalExclamation = 0x00000000021;
constexpr uint64_t kLogicalQuote = 0x00000000022;
constexpr uint64_t kLogicalNumberSign = 0x00000000023;
constexpr uint64_t kLogicalDollar = 0x00000000024;
constexpr uint64_t kLogicalPercent = 0x00000000025;
constexpr uint64_t kLogicalAmpersand = 0x00000000026;
constexpr uint64_t kLogicalQuoteSingle = 0x00000000027;
constexpr uint64_t kLogicalParenthesisLeft = 0x00000000028;
constexpr uint64_t kLogicalParenthesisRight = 0x00000000029;
constexpr uint64_t kLogicalAsterisk = 0x0000000002a;
constexpr uint64_t kLogicalAdd = 0x0000000002b;
constexpr uint64_t kLogicalComma = 0x0000000002c;
constexpr uint64_t kLogicalMinus = 0x0000000002d;
constexpr uint64_t kLogicalPeriod = 0x0000000002e;
constexpr uint64_t kLogicalSlash = 0x0000000002f;
constexpr uint64_t kLogicalDigit0 = 0x00000000030;
constexpr uint64_t kLogicalDigit1 = 0x00000000031;
constexpr uint64_t kLogicalDigit2 = 0x00000000032;
constexpr uint64_t kLogicalDigit3 = 0x00000000033;
constexpr uint64_t kLogicalDigit4 = 0x00000000034;
constexpr uint64_t kLogicalDigit5 = 0x00000000035;
constexpr uint64_t kLogicalDigit6 = 0x00000000036;
constexpr uint64_t kLogicalDigit7 = 0x00000000037;
constexpr uint64_t kLogicalDigit8 = 0x00000000038;
constexpr uint64_t kLogicalDigit9 = 0x00000000039;
constexpr uint64_t kLogicalColon = 0x0000000003a;
constexpr uint64_t kLogicalSemicolon = 0x0000000003b;
constexpr uint64_t kLogicalLess = 0x0000000003c;
constexpr uint64_t kLogicalEqual = 0x0000000003d;
constexpr uint64_t kLogicalGreater = 0x0000000003e;
constexpr uint64_t kLogicalQuestion = 0x0000000003f;
constexpr uint64_t kLogicalAt = 0x00000000040;
constexpr uint64_t kLogicalBracketLeft = 0x0000000005b;
constexpr uint64_t kLogicalBackslash = 0x0000000005c;
constexpr uint64_t kLogicalBracketRight = 0x0000000005d;
constexpr uint64_t kLogicalCaret = 0x0000000005e;
constexpr uint64_t kLogicalUnderscore = 0x0000000005f;
constexpr uint64_t kLogicalBackquote = 0x00000000060;
constexpr uint64_t kLogicalKeyA = 0x00000000061;
constexpr uint64_t kLogicalKeyB = 0x00000000062;
constexpr uint64_t kLogicalKeyC = 0x00000000063;
constexpr uint64_t kLogicalKeyD = 0x00000000064;
constexpr uint64_t kLogicalKeyE = 0x00000000065;
constexpr uint64_t kLogicalKeyF = 0x00000000066;
constexpr uint64_t kLogicalKeyG = 0x00000000067;
constexpr uint64_t kLogicalKeyH = 0x00000000068;
constexpr uint64_t kLogicalKeyI = 0x00000000069;
constexpr uint64_t kLogicalKeyJ = 0x0000000006a;
constexpr uint64_t kLogicalKeyK = 0x0000000006b;
constexpr uint64_t kLogicalKeyL = 0x0000000006c;
constexpr uint64_t kLogicalKeyM = 0x0000000006d;
constexpr uint64_t kLogicalKeyN = 0x0000000006e;
constexpr uint64_t kLogicalKeyO = 0x0000000006f;
constexpr uint64_t kLogicalKeyP = 0x00000000070;
constexpr uint64_t kLogicalKeyQ = 0x00000000071;
constexpr uint64_t kLogicalKeyR = 0x00000000072;
constexpr uint64_t kLogicalKeyS = 0x00000000073;
constexpr uint64_t kLogicalKeyT = 0x00000000074;
constexpr uint64_t kLogicalKeyU = 0x00000000075;
constexpr uint64_t kLogicalKeyV = 0x00000000076;
constexpr uint64_t kLogicalKeyW = 0x00000000077;
constexpr uint64_t kLogicalKeyX = 0x00000000078;
constexpr uint64_t kLogicalKeyY = 0x00000000079;
constexpr uint64_t kLogicalKeyZ = 0x0000000007a;
constexpr uint64_t kLogicalBraceLeft = 0x0000000007b;
constexpr uint64_t kLogicalBar = 0x0000000007c;
constexpr uint64_t kLogicalBraceRight = 0x0000000007d;
constexpr uint64_t kLogicalTilde = 0x0000000007e;
constexpr uint64_t kLogicalUnidentified = 0x00100000001;
constexpr uint64_t kLogicalBackspace = 0x00100000008;
constexpr uint64_t kLogicalTab = 0x00100000009;
constexpr uint64_t kLogicalEnter = 0x0010000000d;
constexpr uint64_t kLogicalEscape = 0x0010000001b;
constexpr uint64_t kLogicalDelete = 0x0010000007f;
constexpr uint64_t kLogicalAccel = 0x00100000101;
constexpr uint64_t kLogicalAltGraph = 0x00100000103;
constexpr uint64_t kLogicalCapsLock = 0x00100000104;
constexpr uint64_t kLogicalFn = 0x00100000106;
constexpr uint64_t kLogicalFnLock = 0x00100000107;
constexpr uint64_t kLogicalHyper = 0x00100000108;
constexpr uint64_t kLogicalNumLock = 0x0010000010a;
constexpr uint64_t kLogicalScrollLock = 0x0010000010c;
constexpr uint64_t kLogicalSuperKey = 0x0010000010e;
constexpr uint64_t kLogicalSymbol = 0x0010000010f;
constexpr uint64_t kLogicalSymbolLock = 0x00100000110;
constexpr uint64_t kLogicalShiftLevel5 = 0x00100000111;
constexpr uint64_t kLogicalArrowDown = 0x00100000301;
constexpr uint64_t kLogicalArrowLeft = 0x00100000302;
constexpr uint64_t kLogicalArrowRight = 0x00100000303;
constexpr uint64_t kLogicalArrowUp = 0x00100000304;
constexpr uint64_t kLogicalEnd = 0x00100000305;
constexpr uint64_t kLogicalHome = 0x00100000306;
constexpr uint64_t kLogicalPageDown = 0x00100000307;
constexpr uint64_t kLogicalPageUp = 0x00100000308;
constexpr uint64_t kLogicalClear = 0x00100000401;
constexpr uint64_t kLogicalCopy = 0x00100000402;
constexpr uint64_t kLogicalCrSel = 0x00100000403;
constexpr uint64_t kLogicalCut = 0x00100000404;
constexpr uint64_t kLogicalEraseEof = 0x00100000405;
constexpr uint64_t kLogicalExSel = 0x00100000406;
constexpr uint64_t kLogicalInsert = 0x00100000407;
constexpr uint64_t kLogicalPaste = 0x00100000408;
constexpr uint64_t kLogicalRedo = 0x00100000409;
constexpr uint64_t kLogicalUndo = 0x0010000040a;
constexpr uint64_t kLogicalAccept = 0x00100000501;
constexpr uint64_t kLogicalAgain = 0x00100000502;
constexpr uint64_t kLogicalAttn = 0x00100000503;
constexpr uint64_t kLogicalCancel = 0x00100000504;
constexpr uint64_t kLogicalContextMenu = 0x00100000505;
constexpr uint64_t kLogicalExecute = 0x00100000506;
constexpr uint64_t kLogicalFind = 0x00100000507;
constexpr uint64_t kLogicalHelp = 0x00100000508;
constexpr uint64_t kLogicalPause = 0x00100000509;
constexpr uint64_t kLogicalPlay = 0x0010000050a;
constexpr uint64_t kLogicalProps = 0x0010000050b;
constexpr uint64_t kLogicalSelect = 0x0010000050c;
constexpr uint64_t kLogicalZoomIn = 0x0010000050d;
constexpr uint64_t kLogicalZoomOut = 0x0010000050e;
constexpr uint64_t kLogicalBrightnessDown = 0x00100000601;
constexpr uint64_t kLogicalBrightnessUp = 0x00100000602;
constexpr uint64_t kLogicalCamera = 0x00100000603;
constexpr uint64_t kLogicalEject = 0x00100000604;
constexpr uint64_t kLogicalLogOff = 0x00100000605;
constexpr uint64_t kLogicalPower = 0x00100000606;
constexpr uint64_t kLogicalPowerOff = 0x00100000607;
constexpr uint64_t kLogicalPrintScreen = 0x00100000608;
constexpr uint64_t kLogicalHibernate = 0x00100000609;
constexpr uint64_t kLogicalStandby = 0x0010000060a;
constexpr uint64_t kLogicalWakeUp = 0x0010000060b;
constexpr uint64_t kLogicalAllCandidates = 0x00100000701;
constexpr uint64_t kLogicalAlphanumeric = 0x00100000702;
constexpr uint64_t kLogicalCodeInput = 0x00100000703;
constexpr uint64_t kLogicalCompose = 0x00100000704;
constexpr uint64_t kLogicalConvert = 0x00100000705;
constexpr uint64_t kLogicalFinalMode = 0x00100000706;
constexpr uint64_t kLogicalGroupFirst = 0x00100000707;
constexpr uint64_t kLogicalGroupLast = 0x00100000708;
constexpr uint64_t kLogicalGroupNext = 0x00100000709;
constexpr uint64_t kLogicalGroupPrevious = 0x0010000070a;
constexpr uint64_t kLogicalModeChange = 0x0010000070b;
constexpr uint64_t kLogicalNextCandidate = 0x0010000070c;
constexpr uint64_t kLogicalNonConvert = 0x0010000070d;
constexpr uint64_t kLogicalPreviousCandidate = 0x0010000070e;
constexpr uint64_t kLogicalProcess = 0x0010000070f;
constexpr uint64_t kLogicalSingleCandidate = 0x00100000710;
constexpr uint64_t kLogicalHangulMode = 0x00100000711;
constexpr uint64_t kLogicalHanjaMode = 0x00100000712;
constexpr uint64_t kLogicalJunjaMode = 0x00100000713;
constexpr uint64_t kLogicalEisu = 0x00100000714;
constexpr uint64_t kLogicalHankaku = 0x00100000715;
constexpr uint64_t kLogicalHiragana = 0x00100000716;
constexpr uint64_t kLogicalHiraganaKatakana = 0x00100000717;
constexpr uint64_t kLogicalKanaMode = 0x00100000718;
constexpr uint64_t kLogicalKanjiMode = 0x00100000719;
constexpr uint64_t kLogicalKatakana = 0x0010000071a;
constexpr uint64_t kLogicalRomaji = 0x0010000071b;
constexpr uint64_t kLogicalZenkaku = 0x0010000071c;
constexpr uint64_t kLogicalZenkakuHankaku = 0x0010000071d;
constexpr uint64_t kLogicalF1 = 0x00100000801;
constexpr uint64_t kLogicalF2 = 0x00100000802;
constexpr uint64_t kLogicalF3 = 0x00100000803;
constexpr uint64_t kLogicalF4 = 0x00100000804;
constexpr uint64_t kLogicalF5 = 0x00100000805;
constexpr uint64_t kLogicalF6 = 0x00100000806;
constexpr uint64_t kLogicalF7 = 0x00100000807;
constexpr uint64_t kLogicalF8 = 0x00100000808;
constexpr uint64_t kLogicalF9 = 0x00100000809;
constexpr uint64_t kLogicalF10 = 0x0010000080a;
constexpr uint64_t kLogicalF11 = 0x0010000080b;
constexpr uint64_t kLogicalF12 = 0x0010000080c;
constexpr uint64_t kLogicalF13 = 0x0010000080d;
constexpr uint64_t kLogicalF14 = 0x0010000080e;
constexpr uint64_t kLogicalF15 = 0x0010000080f;
constexpr uint64_t kLogicalF16 = 0x00100000810;
constexpr uint64_t kLogicalF17 = 0x00100000811;
constexpr uint64_t kLogicalF18 = 0x00100000812;
constexpr uint64_t kLogicalF19 = 0x00100000813;
constexpr uint64_t kLogicalF20 = 0x00100000814;
constexpr uint64_t kLogicalF21 = 0x00100000815;
constexpr uint64_t kLogicalF22 = 0x00100000816;
constexpr uint64_t kLogicalF23 = 0x00100000817;
constexpr uint64_t kLogicalF24 = 0x00100000818;
constexpr uint64_t kLogicalSoft1 = 0x00100000901;
constexpr uint64_t kLogicalSoft2 = 0x00100000902;
constexpr uint64_t kLogicalSoft3 = 0x00100000903;
constexpr uint64_t kLogicalSoft4 = 0x00100000904;
constexpr uint64_t kLogicalSoft5 = 0x00100000905;
constexpr uint64_t kLogicalSoft6 = 0x00100000906;
constexpr uint64_t kLogicalSoft7 = 0x00100000907;
constexpr uint64_t kLogicalSoft8 = 0x00100000908;
constexpr uint64_t kLogicalClose = 0x00100000a01;
constexpr uint64_t kLogicalMailForward = 0x00100000a02;
constexpr uint64_t kLogicalMailReply = 0x00100000a03;
constexpr uint64_t kLogicalMailSend = 0x00100000a04;
constexpr uint64_t kLogicalMediaPlayPause = 0x00100000a05;
constexpr uint64_t kLogicalMediaStop = 0x00100000a07;
constexpr uint64_t kLogicalMediaTrackNext = 0x00100000a08;
constexpr uint64_t kLogicalMediaTrackPrevious = 0x00100000a09;
constexpr uint64_t kLogicalNewKey = 0x00100000a0a;
constexpr uint64_t kLogicalOpen = 0x00100000a0b;
constexpr uint64_t kLogicalPrint = 0x00100000a0c;
constexpr uint64_t kLogicalSave = 0x00100000a0d;
constexpr uint64_t kLogicalSpellCheck = 0x00100000a0e;
constexpr uint64_t kLogicalAudioVolumeDown = 0x00100000a0f;
constexpr uint64_t kLogicalAudioVolumeUp = 0x00100000a10;
constexpr uint64_t kLogicalAudioVolumeMute = 0x00100000a11;
constexpr uint64_t kLogicalLaunchApplication2 = 0x00100000b01;
constexpr uint64_t kLogicalLaunchCalendar = 0x00100000b02;
constexpr uint64_t kLogicalLaunchMail = 0x00100000b03;
constexpr uint64_t kLogicalLaunchMediaPlayer = 0x00100000b04;
constexpr uint64_t kLogicalLaunchMusicPlayer = 0x00100000b05;
constexpr uint64_t kLogicalLaunchApplication1 = 0x00100000b06;
constexpr uint64_t kLogicalLaunchScreenSaver = 0x00100000b07;
constexpr uint64_t kLogicalLaunchSpreadsheet = 0x00100000b08;
constexpr uint64_t kLogicalLaunchWebBrowser = 0x00100000b09;
constexpr uint64_t kLogicalLaunchWebCam = 0x00100000b0a;
constexpr uint64_t kLogicalLaunchWordProcessor = 0x00100000b0b;
constexpr uint64_t kLogicalLaunchContacts = 0x00100000b0c;
constexpr uint64_t kLogicalLaunchPhone = 0x00100000b0d;
constexpr uint64_t kLogicalLaunchAssistant = 0x00100000b0e;
constexpr uint64_t kLogicalLaunchControlPanel = 0x00100000b0f;
constexpr uint64_t kLogicalBrowserBack = 0x00100000c01;
constexpr uint64_t kLogicalBrowserFavorites = 0x00100000c02;
constexpr uint64_t kLogicalBrowserForward = 0x00100000c03;
constexpr uint64_t kLogicalBrowserHome = 0x00100000c04;
constexpr uint64_t kLogicalBrowserRefresh = 0x00100000c05;
constexpr uint64_t kLogicalBrowserSearch = 0x00100000c06;
constexpr uint64_t kLogicalBrowserStop = 0x00100000c07;
constexpr uint64_t kLogicalAudioBalanceLeft = 0x00100000d01;
constexpr uint64_t kLogicalAudioBalanceRight = 0x00100000d02;
constexpr uint64_t kLogicalAudioBassBoostDown = 0x00100000d03;
constexpr uint64_t kLogicalAudioBassBoostUp = 0x00100000d04;
constexpr uint64_t kLogicalAudioFaderFront = 0x00100000d05;
constexpr uint64_t kLogicalAudioFaderRear = 0x00100000d06;
constexpr uint64_t kLogicalAudioSurroundModeNext = 0x00100000d07;
constexpr uint64_t kLogicalAvrInput = 0x00100000d08;
constexpr uint64_t kLogicalAvrPower = 0x00100000d09;
constexpr uint64_t kLogicalChannelDown = 0x00100000d0a;
constexpr uint64_t kLogicalChannelUp = 0x00100000d0b;
constexpr uint64_t kLogicalColorF0Red = 0x00100000d0c;
constexpr uint64_t kLogicalColorF1Green = 0x00100000d0d;
constexpr uint64_t kLogicalColorF2Yellow = 0x00100000d0e;
constexpr uint64_t kLogicalColorF3Blue = 0x00100000d0f;
constexpr uint64_t kLogicalColorF4Grey = 0x00100000d10;
constexpr uint64_t kLogicalColorF5Brown = 0x00100000d11;
constexpr uint64_t kLogicalClosedCaptionToggle = 0x00100000d12;
constexpr uint64_t kLogicalDimmer = 0x00100000d13;
constexpr uint64_t kLogicalDisplaySwap = 0x00100000d14;
constexpr uint64_t kLogicalExit = 0x00100000d15;
constexpr uint64_t kLogicalFavoriteClear0 = 0x00100000d16;
constexpr uint64_t kLogicalFavoriteClear1 = 0x00100000d17;
constexpr uint64_t kLogicalFavoriteClear2 = 0x00100000d18;
constexpr uint64_t kLogicalFavoriteClear3 = 0x00100000d19;
constexpr uint64_t kLogicalFavoriteRecall0 = 0x00100000d1a;
constexpr uint64_t kLogicalFavoriteRecall1 = 0x00100000d1b;
constexpr uint64_t kLogicalFavoriteRecall2 = 0x00100000d1c;
constexpr uint64_t kLogicalFavoriteRecall3 = 0x00100000d1d;
constexpr uint64_t kLogicalFavoriteStore0 = 0x00100000d1e;
constexpr uint64_t kLogicalFavoriteStore1 = 0x00100000d1f;
constexpr uint64_t kLogicalFavoriteStore2 = 0x00100000d20;
constexpr uint64_t kLogicalFavoriteStore3 = 0x00100000d21;
constexpr uint64_t kLogicalGuide = 0x00100000d22;
constexpr uint64_t kLogicalGuideNextDay = 0x00100000d23;
constexpr uint64_t kLogicalGuidePreviousDay = 0x00100000d24;
constexpr uint64_t kLogicalInfo = 0x00100000d25;
constexpr uint64_t kLogicalInstantReplay = 0x00100000d26;
constexpr uint64_t kLogicalLink = 0x00100000d27;
constexpr uint64_t kLogicalListProgram = 0x00100000d28;
constexpr uint64_t kLogicalLiveContent = 0x00100000d29;
constexpr uint64_t kLogicalLock = 0x00100000d2a;
constexpr uint64_t kLogicalMediaApps = 0x00100000d2b;
constexpr uint64_t kLogicalMediaFastForward = 0x00100000d2c;
constexpr uint64_t kLogicalMediaLast = 0x00100000d2d;
constexpr uint64_t kLogicalMediaPause = 0x00100000d2e;
constexpr uint64_t kLogicalMediaPlay = 0x00100000d2f;
constexpr uint64_t kLogicalMediaRecord = 0x00100000d30;
constexpr uint64_t kLogicalMediaRewind = 0x00100000d31;
constexpr uint64_t kLogicalMediaSkip = 0x00100000d32;
constexpr uint64_t kLogicalNextFavoriteChannel = 0x00100000d33;
constexpr uint64_t kLogicalNextUserProfile = 0x00100000d34;
constexpr uint64_t kLogicalOnDemand = 0x00100000d35;
constexpr uint64_t kLogicalPInPDown = 0x00100000d36;
constexpr uint64_t kLogicalPInPMove = 0x00100000d37;
constexpr uint64_t kLogicalPInPToggle = 0x00100000d38;
constexpr uint64_t kLogicalPInPUp = 0x00100000d39;
constexpr uint64_t kLogicalPlaySpeedDown = 0x00100000d3a;
constexpr uint64_t kLogicalPlaySpeedReset = 0x00100000d3b;
constexpr uint64_t kLogicalPlaySpeedUp = 0x00100000d3c;
constexpr uint64_t kLogicalRandomToggle = 0x00100000d3d;
constexpr uint64_t kLogicalRcLowBattery = 0x00100000d3e;
constexpr uint64_t kLogicalRecordSpeedNext = 0x00100000d3f;
constexpr uint64_t kLogicalRfBypass = 0x00100000d40;
constexpr uint64_t kLogicalScanChannelsToggle = 0x00100000d41;
constexpr uint64_t kLogicalScreenModeNext = 0x00100000d42;
constexpr uint64_t kLogicalSettings = 0x00100000d43;
constexpr uint64_t kLogicalSplitScreenToggle = 0x00100000d44;
constexpr uint64_t kLogicalStbInput = 0x00100000d45;
constexpr uint64_t kLogicalStbPower = 0x00100000d46;
constexpr uint64_t kLogicalSubtitle = 0x00100000d47;
constexpr uint64_t kLogicalTeletext = 0x00100000d48;
constexpr uint64_t kLogicalTv = 0x00100000d49;
constexpr uint64_t kLogicalTvInput = 0x00100000d4a;
constexpr uint64_t kLogicalTvPower = 0x00100000d4b;
constexpr uint64_t kLogicalVideoModeNext = 0x00100000d4c;
constexpr uint64_t kLogicalWink = 0x00100000d4d;
constexpr uint64_t kLogicalZoomToggle = 0x00100000d4e;
constexpr uint64_t kLogicalDvr = 0x00100000d4f;
constexpr uint64_t kLogicalMediaAudioTrack = 0x00100000d50;
constexpr uint64_t kLogicalMediaSkipBackward = 0x00100000d51;
constexpr uint64_t kLogicalMediaSkipForward = 0x00100000d52;
constexpr uint64_t kLogicalMediaStepBackward = 0x00100000d53;
constexpr uint64_t kLogicalMediaStepForward = 0x00100000d54;
constexpr uint64_t kLogicalMediaTopMenu = 0x00100000d55;
constexpr uint64_t kLogicalNavigateIn = 0x00100000d56;
constexpr uint64_t kLogicalNavigateNext = 0x00100000d57;
constexpr uint64_t kLogicalNavigateOut = 0x00100000d58;
constexpr uint64_t kLogicalNavigatePrevious = 0x00100000d59;
constexpr uint64_t kLogicalPairing = 0x00100000d5a;
constexpr uint64_t kLogicalMediaClose = 0x00100000d5b;
constexpr uint64_t kLogicalAudioBassBoostToggle = 0x00100000e02;
constexpr uint64_t kLogicalAudioTrebleDown = 0x00100000e04;
constexpr uint64_t kLogicalAudioTrebleUp = 0x00100000e05;
constexpr uint64_t kLogicalMicrophoneToggle = 0x00100000e06;
constexpr uint64_t kLogicalMicrophoneVolumeDown = 0x00100000e07;
constexpr uint64_t kLogicalMicrophoneVolumeUp = 0x00100000e08;
constexpr uint64_t kLogicalMicrophoneVolumeMute = 0x00100000e09;
constexpr uint64_t kLogicalSpeechCorrectionList = 0x00100000f01;
constexpr uint64_t kLogicalSpeechInputToggle = 0x00100000f02;
constexpr uint64_t kLogicalAppSwitch = 0x00100001001;
constexpr uint64_t kLogicalCall = 0x00100001002;
constexpr uint64_t kLogicalCameraFocus = 0x00100001003;
constexpr uint64_t kLogicalEndCall = 0x00100001004;
constexpr uint64_t kLogicalGoBack = 0x00100001005;
constexpr uint64_t kLogicalGoHome = 0x00100001006;
constexpr uint64_t kLogicalHeadsetHook = 0x00100001007;
constexpr uint64_t kLogicalLastNumberRedial = 0x00100001008;
constexpr uint64_t kLogicalNotification = 0x00100001009;
constexpr uint64_t kLogicalMannerMode = 0x0010000100a;
constexpr uint64_t kLogicalVoiceDial = 0x0010000100b;
constexpr uint64_t kLogicalTv3DMode = 0x00100001101;
constexpr uint64_t kLogicalTvAntennaCable = 0x00100001102;
constexpr uint64_t kLogicalTvAudioDescription = 0x00100001103;
constexpr uint64_t kLogicalTvAudioDescriptionMixDown = 0x00100001104;
constexpr uint64_t kLogicalTvAudioDescriptionMixUp = 0x00100001105;
constexpr uint64_t kLogicalTvContentsMenu = 0x00100001106;
constexpr uint64_t kLogicalTvDataService = 0x00100001107;
constexpr uint64_t kLogicalTvInputComponent1 = 0x00100001108;
constexpr uint64_t kLogicalTvInputComponent2 = 0x00100001109;
constexpr uint64_t kLogicalTvInputComposite1 = 0x0010000110a;
constexpr uint64_t kLogicalTvInputComposite2 = 0x0010000110b;
constexpr uint64_t kLogicalTvInputHDMI1 = 0x0010000110c;
constexpr uint64_t kLogicalTvInputHDMI2 = 0x0010000110d;
constexpr uint64_t kLogicalTvInputHDMI3 = 0x0010000110e;
constexpr uint64_t kLogicalTvInputHDMI4 = 0x0010000110f;
constexpr uint64_t kLogicalTvInputVGA1 = 0x00100001110;
constexpr uint64_t kLogicalTvMediaContext = 0x00100001111;
constexpr uint64_t kLogicalTvNetwork = 0x00100001112;
constexpr uint64_t kLogicalTvNumberEntry = 0x00100001113;
constexpr uint64_t kLogicalTvRadioService = 0x00100001114;
constexpr uint64_t kLogicalTvSatellite = 0x00100001115;
constexpr uint64_t kLogicalTvSatelliteBS = 0x00100001116;
constexpr uint64_t kLogicalTvSatelliteCS = 0x00100001117;
constexpr uint64_t kLogicalTvSatelliteToggle = 0x00100001118;
constexpr uint64_t kLogicalTvTerrestrialAnalog = 0x00100001119;
constexpr uint64_t kLogicalTvTerrestrialDigital = 0x0010000111a;
constexpr uint64_t kLogicalTvTimer = 0x0010000111b;
constexpr uint64_t kLogicalKey11 = 0x00100001201;
constexpr uint64_t kLogicalKey12 = 0x00100001202;
constexpr uint64_t kLogicalSuspend = 0x00200000000;
constexpr uint64_t kLogicalResume = 0x00200000001;
constexpr uint64_t kLogicalSleep = 0x00200000002;
constexpr uint64_t kLogicalAbort = 0x00200000003;
constexpr uint64_t kLogicalLang1 = 0x00200000010;
constexpr uint64_t kLogicalLang2 = 0x00200000011;
constexpr uint64_t kLogicalLang3 = 0x00200000012;
constexpr uint64_t kLogicalLang4 = 0x00200000013;
constexpr uint64_t kLogicalLang5 = 0x00200000014;
constexpr uint64_t kLogicalIntlBackslash = 0x00200000020;
constexpr uint64_t kLogicalIntlRo = 0x00200000021;
constexpr uint64_t kLogicalIntlYen = 0x00200000022;
constexpr uint64_t kLogicalControlLeft = 0x00200000100;
constexpr uint64_t kLogicalControlRight = 0x00200000101;
constexpr uint64_t kLogicalShiftLeft = 0x00200000102;
constexpr uint64_t kLogicalShiftRight = 0x00200000103;
constexpr uint64_t kLogicalAltLeft = 0x00200000104;
constexpr uint64_t kLogicalAltRight = 0x00200000105;
constexpr uint64_t kLogicalMetaLeft = 0x00200000106;
constexpr uint64_t kLogicalMetaRight = 0x00200000107;
constexpr uint64_t kLogicalControl = 0x002000001f0;
constexpr uint64_t kLogicalShift = 0x002000001f2;
constexpr uint64_t kLogicalAlt = 0x002000001f4;
constexpr uint64_t kLogicalMeta = 0x002000001f6;
constexpr uint64_t kLogicalNumpadEnter = 0x0020000020d;
constexpr uint64_t kLogicalNumpadParenLeft = 0x00200000228;
constexpr uint64_t kLogicalNumpadParenRight = 0x00200000229;
constexpr uint64_t kLogicalNumpadMultiply = 0x0020000022a;
constexpr uint64_t kLogicalNumpadAdd = 0x0020000022b;
constexpr uint64_t kLogicalNumpadComma = 0x0020000022c;
constexpr uint64_t kLogicalNumpadSubtract = 0x0020000022d;
constexpr uint64_t kLogicalNumpadDecimal = 0x0020000022e;
constexpr uint64_t kLogicalNumpadDivide = 0x0020000022f;
constexpr uint64_t kLogicalNumpad0 = 0x00200000230;
constexpr uint64_t kLogicalNumpad1 = 0x00200000231;
constexpr uint64_t kLogicalNumpad2 = 0x00200000232;
constexpr uint64_t kLogicalNumpad3 = 0x00200000233;
constexpr uint64_t kLogicalNumpad4 = 0x00200000234;
constexpr uint64_t kLogicalNumpad5 = 0x00200000235;
constexpr uint64_t kLogicalNumpad6 = 0x00200000236;
constexpr uint64_t kLogicalNumpad7 = 0x00200000237;
constexpr uint64_t kLogicalNumpad8 = 0x00200000238;
constexpr uint64_t kLogicalNumpad9 = 0x00200000239;
constexpr uint64_t kLogicalNumpadEqual = 0x0020000023d;
constexpr uint64_t kLogicalGameButton1 = 0x00200000301;
constexpr uint64_t kLogicalGameButton2 = 0x00200000302;
constexpr uint64_t kLogicalGameButton3 = 0x00200000303;
constexpr uint64_t kLogicalGameButton4 = 0x00200000304;
constexpr uint64_t kLogicalGameButton5 = 0x00200000305;
constexpr uint64_t kLogicalGameButton6 = 0x00200000306;
constexpr uint64_t kLogicalGameButton7 = 0x00200000307;
constexpr uint64_t kLogicalGameButton8 = 0x00200000308;
constexpr uint64_t kLogicalGameButton9 = 0x00200000309;
constexpr uint64_t kLogicalGameButton10 = 0x0020000030a;
constexpr uint64_t kLogicalGameButton11 = 0x0020000030b;
constexpr uint64_t kLogicalGameButton12 = 0x0020000030c;
constexpr uint64_t kLogicalGameButton13 = 0x0020000030d;
constexpr uint64_t kLogicalGameButton14 = 0x0020000030e;
constexpr uint64_t kLogicalGameButton15 = 0x0020000030f;
constexpr uint64_t kLogicalGameButton16 = 0x00200000310;
constexpr uint64_t kLogicalGameButtonA = 0x00200000311;
constexpr uint64_t kLogicalGameButtonB = 0x00200000312;
constexpr uint64_t kLogicalGameButtonC = 0x00200000313;
constexpr uint64_t kLogicalGameButtonLeft1 = 0x00200000314;
constexpr uint64_t kLogicalGameButtonLeft2 = 0x00200000315;
constexpr uint64_t kLogicalGameButtonMode = 0x00200000316;
constexpr uint64_t kLogicalGameButtonRight1 = 0x00200000317;
constexpr uint64_t kLogicalGameButtonRight2 = 0x00200000318;
constexpr uint64_t kLogicalGameButtonSelect = 0x00200000319;
constexpr uint64_t kLogicalGameButtonStart = 0x0020000031a;
constexpr uint64_t kLogicalGameButtonThumbLeft = 0x0020000031b;
constexpr uint64_t kLogicalGameButtonThumbRight = 0x0020000031c;
constexpr uint64_t kLogicalGameButtonX = 0x0020000031d;
constexpr uint64_t kLogicalGameButtonY = 0x0020000031e;
constexpr uint64_t kLogicalGameButtonZ = 0x0020000031f;

}  // namespace keycodes

}  // namespace testing

}  // namespace flutter

#endif  // FLUTTER_SHELL_PLATFORM_EMBEDDER_TEST_UTILS_KEY_CODES_G_H_

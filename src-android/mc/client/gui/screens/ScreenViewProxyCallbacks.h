#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FocusManagerProxy;
class VisualTreeProxy;
struct ScreenEvent;
// clang-format on

struct ScreenViewProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetVisualTree;
    ::ll::UntypedStorage<8, 48> mGetFocusManager;
    ::ll::UntypedStorage<8, 48> mIsInitialized;
    ::ll::UntypedStorage<8, 48> mTestAutomationHandleRawInputEvent;
    ::ll::UntypedStorage<8, 48> mIsAnyFocusControlHovered;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewProxyCallbacks& operator=(ScreenViewProxyCallbacks const&);
    ScreenViewProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScreenViewProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

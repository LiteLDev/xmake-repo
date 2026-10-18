#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 64, ::std::function<::VisualTreeProxy*()>>   mGetVisualTree;
    ::ll::TypedStorage<8, 64, ::std::function<::FocusManagerProxy*()>> mGetFocusManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                 mIsInitialized;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, ::ScreenEvent&)>>
                                                       mTestAutomationHandleRawInputEvent;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsAnyFocusControlHovered;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenViewProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

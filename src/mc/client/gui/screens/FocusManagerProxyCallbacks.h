#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct FocusManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetFocusControl;
    ::ll::UntypedStorage<8, 48> mGetFocusedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    FocusManagerProxyCallbacks& operator=(FocusManagerProxyCallbacks const&);
    FocusManagerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FocusManagerProxyCallbacks();
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
class UIControl;
// clang-format on

struct FocusManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>>       mSetFocusControl;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::UIControl>()>> mGetFocusedControl;
    // NOLINTEND
};
#else // @header-generator platform
struct FocusManagerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ToggleComponent;
class UIControl;
// clang-format on

struct VisualTreeProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetVisibleControlsWith;
    ::ll::UntypedStorage<8, 48> mVisibleControlExistsWithName;
    ::ll::UntypedStorage<8, 48> mGetFirstVisibleControl;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTreeProxyCallbacks& operator=(VisualTreeProxyCallbacks const&);
    VisualTreeProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VisualTreeProxyCallbacks();
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
class ToggleComponent;
class UIControl;
// clang-format on

struct VisualTreeProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::vector<::std::shared_ptr<::UIControl>>(::std::function<bool(::ToggleComponent const&)>)>>
                                                                           mGetVisibleControlsWith;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>> mVisibleControlExistsWithName;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::shared_ptr<::UIControl>(::std::function<bool(::UIControl const&)> const&)>>
        mGetFirstVisibleControl;
    // NOLINTEND
};
#else // @header-generator platform
struct VisualTreeProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

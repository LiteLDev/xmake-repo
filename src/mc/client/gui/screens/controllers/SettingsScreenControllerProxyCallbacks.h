#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class GeneralSettingsScreenControllerProxy;
class WorldSettingsScreenControllerProxy;
// clang-format on

struct SettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectTab;
    ::ll::UntypedStorage<8, 48> mGetAdditionalScreenInfo;
    ::ll::UntypedStorage<8, 48> mGetGeneralSettingsScreenController;
    ::ll::UntypedStorage<8, 48> mGetCurrentTabTitle;
    ::ll::UntypedStorage<8, 48> mGetWorldSettingsScreenController;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsScreenControllerProxyCallbacks& operator=(SettingsScreenControllerProxyCallbacks const&);
    SettingsScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SettingsScreenControllerProxyCallbacks();
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
class GeneralSettingsScreenControllerProxy;
class WorldSettingsScreenControllerProxy;
// clang-format on

struct SettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>       mSelectTab;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetAdditionalScreenInfo;
    ::ll::TypedStorage<8, 64, ::std::function<::GeneralSettingsScreenControllerProxy*()>>
                                                                mGetGeneralSettingsScreenController;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>> mGetCurrentTabTitle;
    ::ll::TypedStorage<8, 64, ::std::function<::WorldSettingsScreenControllerProxy*()>>
        mGetWorldSettingsScreenController;
    // NOLINTEND
};
#else // @header-generator platform
struct SettingsScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

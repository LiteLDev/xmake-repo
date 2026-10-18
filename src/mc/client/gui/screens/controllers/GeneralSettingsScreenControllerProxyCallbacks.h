#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class StorageManagementScreenControllerProxy;
// clang-format on

struct GeneralSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetCurrentLanguageIndex;
    ::ll::UntypedStorage<8, 48> mGetNumLanguages;
    ::ll::UntypedStorage<8, 48> mGetLanguages;
    ::ll::UntypedStorage<8, 48> mGetStorageManagementScreenController;
    ::ll::UntypedStorage<8, 48> mPushSafeZoneScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneralSettingsScreenControllerProxyCallbacks& operator=(GeneralSettingsScreenControllerProxyCallbacks const&);
    GeneralSettingsScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GeneralSettingsScreenControllerProxyCallbacks();
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
class StorageManagementScreenControllerProxy;
// clang-format on

struct GeneralSettingsScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetCurrentLanguageIndex;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetNumLanguages;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::std::pair<::std::string, ::std::string>>()>>
        mGetLanguages;
    ::ll::TypedStorage<8, 64, ::std::function<::StorageManagementScreenControllerProxy*()>>
                                                       mGetStorageManagementScreenController;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mPushSafeZoneScreen;
    // NOLINTEND
};
#else // @header-generator platform
struct GeneralSettingsScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform

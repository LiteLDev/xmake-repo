#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

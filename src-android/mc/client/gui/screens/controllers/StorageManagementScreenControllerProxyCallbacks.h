#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

struct StorageManagementScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectItemByIndex;
    ::ll::UntypedStorage<8, 48> mSelectItemByName;
    ::ll::UntypedStorage<8, 48> mDeleteSelectedResources;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenControllerProxyCallbacks& operator=(StorageManagementScreenControllerProxyCallbacks const&);
    StorageManagementScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StorageManagementScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

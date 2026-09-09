#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/StorageManagementScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
struct ToggleChangeEventData;
// clang-format on

class StorageManagementScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagementScreenControllerProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

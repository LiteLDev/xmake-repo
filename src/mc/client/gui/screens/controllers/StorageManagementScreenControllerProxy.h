#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/StorageManagementScreenControllerProxyCallbacks.h"

class StorageManagementScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::StorageManagementScreenControllerProxyCallbacks const> mCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageManagementScreenControllerProxy() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class StorageManagementScreenControllerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform

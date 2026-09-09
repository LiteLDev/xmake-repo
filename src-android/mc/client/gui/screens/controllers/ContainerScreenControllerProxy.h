#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"
#include "mc/client/gui/screens/ScreenControllerProxy.h"
#include "mc/client/gui/screens/controllers/ContainerScreenControllerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class ContainerScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenControllerProxy();
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

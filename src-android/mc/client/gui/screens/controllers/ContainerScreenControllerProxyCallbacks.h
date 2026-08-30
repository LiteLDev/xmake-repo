#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ContainerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetItemInstance;
    ::ll::UntypedStorage<8, 48> mAutoPlace;
    ::ll::UntypedStorage<8, 48> mReceiveEvent;
    ::ll::UntypedStorage<8, 48> mLeave;
    ::ll::UntypedStorage<8, 48> mCanBeClosedByServer;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenControllerProxyCallbacks& operator=(ContainerScreenControllerProxyCallbacks const&);
    ContainerScreenControllerProxyCallbacks(ContainerScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

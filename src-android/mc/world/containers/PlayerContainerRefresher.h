#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class DynamicContainerManager;
class ItemStack;
class Packet;
// clang-format on

struct PlayerContainerRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSendNetworkPacket;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerContainerRefresher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerContainerRefresher(std::function<void(Packet&)>&&);

    MCNAPI void refreshContainer(::DynamicContainerManager const&) const;

    MCNAPI void slotChanged(::DynamicContainerManager&, ::Container&, int, ::ItemStack const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(Packet&)>&&);
    // NOLINTEND
};

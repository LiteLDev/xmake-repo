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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mSendNetworkPacket;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void(::Packet&)>> mSendNetworkPacket;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerContainerRefresher();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerContainerRefresher(std::function<void(Packet&)>&&);

    MCNAPI void refreshContainer(::DynamicContainerManager const&) const;

    MCNAPI void slotChanged(::DynamicContainerManager&, ::Container&, int, ::ItemStack const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(Packet&)>&&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void refreshContainer(::DynamicContainerManager const& menu) const;

    MCAPI void
    slotChanged(::DynamicContainerManager& menu, ::Container& container, int slot, ::ItemStack const& newItem) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/IPlayerContainerSetter.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class PlayerContainerSetter : public ::IPlayerContainerSetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerContainerSetter& operator=(PlayerContainerSetter const&);
    PlayerContainerSetter(PlayerContainerSetter const&);
    PlayerContainerSetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerContainerSetter();

    virtual void setArmor(int, ::ItemStack const&);

    virtual void setOffhandSlot(::ItemStack const&);

    virtual void setPlayerUIItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerContainerSetter(::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setArmor(int, ::ItemStack const&);

    MCNAPI void $setOffhandSlot(::ItemStack const&);

    MCNAPI void $setPlayerUIItem(int, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

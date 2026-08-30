#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Player;
namespace mce { class UUID; }
// clang-format on

class BoostableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mIsBoosting;
    ::ll::TypedStorage<4, 4, int>   mBoostTime;
    ::ll::TypedStorage<4, 4, int>   mBoostTimeTotal;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canUseItem(::Actor const&, ::ItemStack const&);

    MCNAPI void _useItem(::Actor&, ::ItemStack&, ::Player&);

    MCNAPI void boost(::Actor&);

    MCNAPI int getBoostTime() const;

    MCNAPI int getBoostTimeTotal() const;

    MCNAPI bool getIsBoosting() const;

    MCNAPI bool itemUseText(::Actor const&, ::ItemStack const&, std::string&);

    MCNAPI bool onItemInteract(::Actor&, ::ItemStack&, ::Player&);

    MCNAPI void setBoostTime(int);

    MCNAPI void setIsBoosting(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID getSpeedModifierUUID();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
    // NOLINTEND
};

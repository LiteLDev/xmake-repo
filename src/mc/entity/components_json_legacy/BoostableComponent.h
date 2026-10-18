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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canUseItem(::Actor const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI bool _canUseItem(::Actor const& actor, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _useItem(::Actor&, ::ItemStack&, ::Player&);
#else // @header-generator platform
    MCAPI void _useItem(::Actor& actor, ::ItemStack& item, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void boost(::Actor&);
#else // @header-generator platform
    MCAPI void boost(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool onItemInteract(::Actor& actor, ::ItemStack& item, ::Player& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& SPEED_MODIFIER_BOOSTING_UUID();
#endif // @header-generator platform
    // NOLINTEND
};

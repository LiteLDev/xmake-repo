#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStack;
class Level;
class Player;
struct ItemOnUseResult;
// clang-format on

class IFoodItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IFoodItemComponent() = default;

    virtual int getNutrition() const = 0;

    virtual float getSaturationModifier() const = 0;

    virtual bool canAlwaysEat() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&) = 0;
#else // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&) = 0;
#else // @header-generator platform
    virtual void use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod&   itemUseMethod,
        ::ItemStack const& initialInstance,
        ::ItemStack&       instance,
        ::Player&          player,
        ::Level&           level
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[15]> CAN_ALWAYS_EAT();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[15]> CAN_ALWAYS_EAT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[10]> NUTRITION();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[10]> NUTRITION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> SATURATION_MODIFIER();
#else // @header-generator platform
    MCAPI static ::std::add_lvalue_reference_t<char const[20]> SATURATION_MODIFIER();
#endif // @header-generator platform
    // NOLINTEND
};

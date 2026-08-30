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
    // clang-format off
    virtual ~IFoodItemComponent() = default;

    virtual int getNutrition() const = 0;

    virtual float getSaturationModifier() const = 0;

    virtual bool canAlwaysEat() const = 0;

    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&) = 0;

    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&) = 0;

    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[15]> CAN_ALWAYS_EAT();

    MCNAPI static ::std::add_lvalue_reference_t<char const[10]> NUTRITION();

    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> SATURATION_MODIFIER();
    // NOLINTEND
};

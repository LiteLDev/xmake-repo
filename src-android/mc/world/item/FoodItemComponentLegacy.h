#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemStack;
class Level;
class Player;
struct ItemOnUseResult;
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    enum class OnUseAction : int {
        NONE                   = -1,
        CHORUS_TELEPORT        = 0,
        SUSPICIOUS_STEW_EFFECT = 1,
    };

    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>              id;
        ::ll::TypedStorage<8, 24, std::string>     name;
        ::ll::TypedStorage<8, 24, std::string>     descriptionId;
        ::ll::TypedStorage<4, 4, ::EffectDuration> duration;
        ::ll::TypedStorage<4, 4, int>              amplifier;
        ::ll::TypedStorage<4, 4, float>            chance;
        // NOLINTEND

    public:
        // prevent constructor by default
        Effect& operator=(Effect const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Effect();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item&>                                       mOwner;
    ::ll::TypedStorage<4, 4, int>                                           mNutrition;
    ::ll::TypedStorage<4, 4, float>                                         mSaturationModifier;
    ::ll::TypedStorage<8, 24, std::string>                                  mUsingConvertsTo;
    ::ll::TypedStorage<4, 4, ::FoodItemComponentLegacy::OnUseAction>        mOnUseAction;
    ::ll::TypedStorage<4, 12, ::Vec3>                                       mOnUseRange;
    ::ll::TypedStorage<8, 40, ::HashedString>                               mCooldownCategory;
    ::ll::TypedStorage<4, 4, int>                                           mCooldownDuration;
    ::ll::TypedStorage<1, 1, bool>                                          mCanAlwaysEat;
    ::ll::TypedStorage<8, 24, std::vector<FoodItemComponentLegacy::Effect>> mEffects;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                            mRemoveEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FoodItemComponentLegacy();

    virtual int getNutrition() const;

    virtual float getSaturationModifier() const;

    virtual bool canAlwaysEat() const;

    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&);

    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&);

    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _applyEatEffects(::ItemStack const&, ::Actor&, ::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getNutrition() const;

    MCNAPI float $getSaturationModifier() const;

    MCNAPI bool $canAlwaysEat() const;

    MCNAPI ::Item const* $eatItem(::ItemStack&, ::Actor&, ::Level&);

    MCNAPI void $use(::ItemOnUseResult&, ::ItemStack&, ::Player&);

    MCNAPI ::Item const* $useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

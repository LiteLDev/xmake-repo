#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/molang/MolangVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Item;
class ItemStack;
class Level;
class Player;
struct ItemOnUseResult;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    enum class OnUseAction : int {
#if defined(LL_PLAT_A) // @header-generator platform
        NONE                   = -1,
        CHORUS_TELEPORT        = 0,
        SUSPICIOUS_STEW_EFFECT = 1,
#else // @header-generator platform
        None                 = -1,
        ChorusTeleport       = 0,
        SuspiciousStewEffect = 1,
#endif // @header-generator platform
    };

    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>              id;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>     name;
        ::ll::TypedStorage<8, 24, std::string>     descriptionId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>   name;
        ::ll::TypedStorage<8, 32, ::std::string>   descriptionId;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, ::EffectDuration> duration;
        ::ll::TypedStorage<4, 4, int>              amplifier;
        ::ll::TypedStorage<4, 4, float>            chance;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Item&>                                           mOwner;
    ::ll::TypedStorage<4, 4, int>                                               mNutrition;
    ::ll::TypedStorage<4, 4, float>                                             mSaturationModifier;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mUsingConvertsTo;
    ::ll::TypedStorage<4, 4, ::FoodItemComponentLegacy::OnUseAction>            mOnUseAction;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mOnUseRange;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCooldownCategory;
    ::ll::TypedStorage<4, 4, int>                                               mCooldownDuration;
    ::ll::TypedStorage<1, 1, bool>                                              mCanAlwaysEat;
    ::ll::TypedStorage<8, 24, ::std::vector<::FoodItemComponentLegacy::Effect>> mEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                              mRemoveEffects;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FoodItemComponentLegacy();
#else // @header-generator platform
    virtual int getNutrition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getNutrition() const;
#else // @header-generator platform
    virtual float getSaturationModifier() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getSaturationModifier() const;
#else // @header-generator platform
    virtual bool canAlwaysEat() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAlwaysEat() const;
#else // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&);
#else // @header-generator platform
    virtual void use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&);

    virtual ::Item const* useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
#else // @header-generator platform
    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _applyEatEffects(::ItemStack const&, ::Actor&, ::Level&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _applyEatEffects(::ItemStack const&, ::Actor& actor, ::Level& level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getNutrition() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int $getNutrition() const;
#else // LL_PLAT_C
    MCFOLD int $getNutrition() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getSaturationModifier() const;
#else // @header-generator platform
    MCFOLD float $getSaturationModifier() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAlwaysEat() const;
#else // @header-generator platform
    MCAPI bool $canAlwaysEat() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* $eatItem(::ItemStack&, ::Actor&, ::Level&);
#else // @header-generator platform
    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $use(::ItemOnUseResult&, ::ItemStack&, ::Player&);
#else // @header-generator platform
    MCAPI void $use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Item const* $useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Item const* $useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

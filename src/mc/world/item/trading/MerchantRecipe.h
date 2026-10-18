#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/RecipeNetIdTag.h"
#include "mc/world/item/ItemInstance.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class SaveContext;
#else // @header-generator platform
struct RecipeNetIdTag;
#endif // @header-generator platform
// clang-format on

class MerchantRecipe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mBuyA;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mBuyB;
    ::ll::TypedStorage<8, 128, ::ItemInstance> mSell;
    ::ll::TypedStorage<4, 4, int>              mTier;
    ::ll::TypedStorage<4, 4, int>              mUses;
    ::ll::TypedStorage<4, 4, int>              mMaxUses;
    ::ll::TypedStorage<4, 4, uint>             mTraderExp;
    ::ll::TypedStorage<1, 1, bool>             mRewardExp;
    ::ll::TypedStorage<4, 4, int>              mDemand;
    ::ll::TypedStorage<4, 4, int>              mBuyCountA;
    ::ll::TypedStorage<4, 4, int>              mBuyCountB;
    ::ll::TypedStorage<4, 4, float>            mPriceMultiplierA;
    ::ll::TypedStorage<4, 4, float>            mPriceMultiplierB;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                 mRecipeNetId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RecipeNetId>    mRecipeNetId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MerchantRecipe();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MerchantRecipe(::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI MerchantRecipe(::ItemInstance const& buy, ::ItemInstance const& sell);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MerchantRecipe(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI MerchantRecipe(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateDemandPrices(int, int, int, int, bool, ::BaseGameVersion);
#else // @header-generator platform
    MCAPI void calculateDemandPrices(
        int               minorPositiveGossip,
        int               majorPositiveGossip,
        int               nearbyCuredDiscount,
        int               heroEffectAmplifier,
        bool              hasHeroOfTheVillage,
        ::BaseGameVersion baseGameVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void calculateDemandPricesDefaults();
#else // @header-generator platform
    MCAPI bool isSame(::MerchantRecipe const& lhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBaseCountA() const;
#else // @header-generator platform
    MCAPI void legacyCalculateDemandPrices(int lowTierDiscount, int highTierDiscount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getBaseCountB() const;

    MCNAPI ::ItemInstance const& getBuyBItem() const;

    MCNAPI int getDemand() const;

    MCNAPI int getMaxUses() const;

    MCNAPI ::TypedServerNetId<RecipeNetIdTag, uint, 0> const& getNetId() const;

    MCNAPI ::ItemInstance const& getSellItem() const;

    MCNAPI int getTier() const;

    MCNAPI uint getTraderExp() const;

    MCNAPI int getUses() const;

    MCNAPI bool hasSecondaryBuyItem() const;

    MCNAPI void increaseMaxUses(int);

    MCNAPI void increaseUses(int);

    MCNAPI void init(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);

    MCNAPI bool isOutOfUses() const;

    MCNAPI bool isSame(::MerchantRecipe const&) const;

    MCNAPI void legacyCalculateDemandPrices(int, int);

    MCNAPI void setDemand(int);

    MCNAPI void setMaxUses(int);

    MCNAPI void setPriceMultiplierA(float);

    MCNAPI void setPriceMultiplierB(float);

    MCNAPI void setRewardExp(bool);

    MCNAPI void setTier(int);

    MCNAPI void setTraderExp(uint);

    MCNAPI void setUses(int);

    MCNAPI bool shouldRewardExp() const;

    MCNAPI ~MerchantRecipe();
#else // @header-generator platform
    MCAPI ~MerchantRecipe();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemInstance const& buy, ::ItemInstance const& sell);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

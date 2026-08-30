#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class SaveContext;
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
    ::ll::UntypedStorage<4, 8>                 mRecipeNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MerchantRecipe(::ItemInstance const&, ::ItemInstance const&);

    MCNAPI MerchantRecipe(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);

    MCNAPI void calculateDemandPrices(int, int, int, int, bool, ::BaseGameVersion);

    MCNAPI void calculateDemandPricesDefaults();

    MCNAPI int getBaseCountA() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const&, ::ItemInstance const&);

    MCNAPI void* $ctor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

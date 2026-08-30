#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/trading/MerchantRecipe.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class SaveContext;
// clang-format on

class MerchantRecipeList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MerchantRecipe>> mRecipeList;
    ::ll::TypedStorage<8, 24, std::vector<uint>>           mTierExpRequirements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MerchantRecipeList();

    virtual ::MerchantRecipe* getRecipeFor(::ItemInstance const&, ::ItemInstance const&, int);

    virtual void addIfNewOrBetter(::MerchantRecipe*);

    virtual ::MerchantRecipe* getMatchingRecipeFor(::MerchantRecipe const&);

    virtual ::MerchantRecipe* getMatchingRecipeFor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);

    virtual void load(::CompoundTag const&);

    virtual std::unique_ptr<CompoundTag> createTag(bool, ::SaveContext const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MerchantRecipeList();

    MCNAPI void assignNetIds();

    MCNAPI ::MerchantRecipe const* getRecipeByNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&) const;

    MCNAPI std::optional<ulong> getRecipeIndexByNetId(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MerchantRecipe* $getRecipeFor(::ItemInstance const&, ::ItemInstance const&, int);

    MCNAPI void $addIfNewOrBetter(::MerchantRecipe*);

    MCNAPI ::MerchantRecipe* $getMatchingRecipeFor(::MerchantRecipe const&);

    MCNAPI ::MerchantRecipe* $getMatchingRecipeFor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);

    MCNAPI void $load(::CompoundTag const&);

    MCNAPI std::unique_ptr<CompoundTag> $createTag(bool, ::SaveContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/trading/MerchantRecipe.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class MerchantRecipe;
#endif // @header-generator platform
class SaveContext;
// clang-format on

class MerchantRecipeList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<MerchantRecipe>> mRecipeList;
    ::ll::TypedStorage<8, 24, std::vector<uint>>           mTierExpRequirements;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::MerchantRecipe>> mRecipeList;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>             mTierExpRequirements;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MerchantRecipeList();
#else // @header-generator platform
    virtual ~MerchantRecipeList() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MerchantRecipe* getRecipeFor(::ItemInstance const&, ::ItemInstance const&, int);
#else // @header-generator platform
    virtual ::MerchantRecipe* getRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, int selectionHint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addIfNewOrBetter(::MerchantRecipe*);
#else // @header-generator platform
    virtual void addIfNewOrBetter(::MerchantRecipe* toMatch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MerchantRecipe* getMatchingRecipeFor(::MerchantRecipe const&);
#else // @header-generator platform
    virtual ::MerchantRecipe*
    getMatchingRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MerchantRecipe* getMatchingRecipeFor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    virtual ::MerchantRecipe* getMatchingRecipeFor(::MerchantRecipe const& recipe);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::CompoundTag const&);
#else // @header-generator platform
    virtual void load(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MerchantRecipe* $getRecipeFor(::ItemInstance const&, ::ItemInstance const&, int);
#else // @header-generator platform
    MCAPI ::MerchantRecipe* $getRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, int selectionHint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addIfNewOrBetter(::MerchantRecipe*);
#else // @header-generator platform
    MCAPI void $addIfNewOrBetter(::MerchantRecipe* toMatch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MerchantRecipe* $getMatchingRecipeFor(::MerchantRecipe const&);
#else // @header-generator platform
    MCAPI ::MerchantRecipe*
    $getMatchingRecipeFor(::ItemInstance const& buyA, ::ItemInstance const& buyB, ::ItemInstance const& sell);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MerchantRecipe* $getMatchingRecipeFor(::ItemInstance const&, ::ItemInstance const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI ::MerchantRecipe* $getMatchingRecipeFor(::MerchantRecipe const& recipe);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $load(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $createTag(bool, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $createTag(bool includeNetInfo, ::SaveContext const& saveContext) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/MultiRecipePayload.h"
#include "mc/ShapedRecipePayload.h"
#include "mc/ShapelessRecipePayload.h"
#include "mc/SmithingTransformRecipePayload.h"
#include "mc/SmithingTrimRecipePayload.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/ContainerMixDataEntry.h"
#include "mc/network/packet/MaterialReducerDataEntry.h"
#include "mc/network/packet/PotionMixDataEntry.h"

// auto generated forward declare list
// clang-format off
class Recipes;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MultiRecipePayload;
struct ShapedRecipePayload;
struct ShapelessRecipePayload;
struct SmithingTransformRecipePayload;
struct SmithingTrimRecipePayload;
#endif // @header-generator platform
// clang-format on

struct CraftingDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ShapedRecipePayload>>            mShapedRecipes;
    ::ll::TypedStorage<8, 24, std::vector<ShapelessRecipePayload>>         mShapelessRecipes;
    ::ll::TypedStorage<8, 24, std::vector<MultiRecipePayload>>             mMultiRecipes;
    ::ll::TypedStorage<8, 24, std::vector<ShapelessRecipePayload>>         mUserDataShapelessRecipes;
    ::ll::TypedStorage<8, 24, std::vector<ShapelessRecipePayload>>         mShapelessChemistryRecipes;
    ::ll::TypedStorage<8, 24, std::vector<ShapedRecipePayload>>            mShapedChemistryRecipes;
    ::ll::TypedStorage<8, 24, std::vector<SmithingTransformRecipePayload>> mSmithingTransformRecipes;
    ::ll::TypedStorage<8, 24, std::vector<SmithingTrimRecipePayload>>      mSmithingTrimRecipes;
    ::ll::TypedStorage<8, 24, std::vector<PotionMixDataEntry>>             mPotionMixEntries;
    ::ll::TypedStorage<8, 24, std::vector<ContainerMixDataEntry>>          mContainerMixEntries;
    ::ll::TypedStorage<8, 24, std::vector<MaterialReducerDataEntry>>       mMaterialReducerEntries;
    ::ll::TypedStorage<1, 1, bool>                                         mClearRecipes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapedRecipePayload>>            mShapedRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mShapelessRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::MultiRecipePayload>>             mMultiRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mUserDataShapelessRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mShapelessChemistryRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapedRecipePayload>>            mShapedChemistryRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SmithingTransformRecipePayload>> mSmithingTransformRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SmithingTrimRecipePayload>>      mSmithingTrimRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::PotionMixDataEntry>>             mPotionMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerMixDataEntry>>          mContainerMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialReducerDataEntry>>       mMaterialReducerEntries;
    ::ll::TypedStorage<1, 1, bool>                                             mClearRecipes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CraftingDataPacketPayload(::CraftingDataPacketPayload const&);

    MCNAPI ::CraftingDataPacketPayload& operator=(::CraftingDataPacketPayload&&);

    MCNAPI ::CraftingDataPacketPayload& operator=(::CraftingDataPacketPayload const&);

    MCNAPI ~CraftingDataPacketPayload();
#else // @header-generator platform
    MCAPI ~CraftingDataPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CraftingDataPacketPayload fromRecipes(::Recipes const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CraftingDataPacketPayload const&);
#else // @header-generator platform
    MCAPI static ::CraftingDataPacketPayload fromRecipes(::Recipes const& levelRecipes, bool onlyCraftingRecipes);
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

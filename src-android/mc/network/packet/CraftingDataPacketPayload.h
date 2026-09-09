#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/MultiRecipePayload.h"
#include "mc/ShapedRecipePayload.h"
#include "mc/ShapelessRecipePayload.h"
#include "mc/SmithingTransformRecipePayload.h"
#include "mc/SmithingTrimRecipePayload.h"
#include "mc/network/packet/ContainerMixDataEntry.h"
#include "mc/network/packet/MaterialReducerDataEntry.h"
#include "mc/network/packet/PotionMixDataEntry.h"

// auto generated forward declare list
// clang-format off
class Recipes;
// clang-format on

struct CraftingDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingDataPacketPayload(::CraftingDataPacketPayload const&);

    MCNAPI ::CraftingDataPacketPayload& operator=(::CraftingDataPacketPayload&&);

    MCNAPI ::CraftingDataPacketPayload& operator=(::CraftingDataPacketPayload const&);

    MCNAPI ~CraftingDataPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CraftingDataPacketPayload fromRecipes(::Recipes const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CraftingDataPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

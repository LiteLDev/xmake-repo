#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftingSessionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mHasSearchString;
    ::ll::TypedStorage<4, 4, int>                 mStartingTab;
    ::ll::TypedStorage<4, 4, int>                 mEndingTab;
    ::ll::TypedStorage<4, 4, int>                 mTabsChanged;
    ::ll::TypedStorage<1, 1, bool>                mAutomaticallyCrafted;
    ::ll::TypedStorage<1, 1, bool>                mCraftableFilterOn;
    ::ll::TypedStorage<1, 1, bool>                mRecipeBookShown;
    ::ll::TypedStorage<8, 24, std::vector<short>> mIngredientItemIDs;
    // NOLINTEND
};

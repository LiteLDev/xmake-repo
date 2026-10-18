#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftingSessionInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                mHasSearchString;
    ::ll::TypedStorage<4, 4, int>                 mStartingTab;
    ::ll::TypedStorage<4, 4, int>                 mEndingTab;
    ::ll::TypedStorage<4, 4, int>                 mTabsChanged;
    ::ll::TypedStorage<1, 1, bool>                mAutomaticallyCrafted;
    ::ll::TypedStorage<1, 1, bool>                mCraftableFilterOn;
    ::ll::TypedStorage<1, 1, bool>                mRecipeBookShown;
    ::ll::TypedStorage<8, 24, std::vector<short>> mIngredientItemIDs;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkc36f7e;
    ::ll::UntypedStorage<4, 4>  mUnkc24046;
    ::ll::UntypedStorage<4, 4>  mUnk6dc536;
    ::ll::UntypedStorage<4, 4>  mUnkb19aac;
    ::ll::UntypedStorage<1, 1>  mUnkcd00e6;
    ::ll::UntypedStorage<1, 1>  mUnk43a436;
    ::ll::UntypedStorage<1, 1>  mUnkd1ae83;
    ::ll::UntypedStorage<8, 24> mUnkaa92dc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CraftingSessionInfo& operator=(CraftingSessionInfo const&);
    CraftingSessionInfo(CraftingSessionInfo const&);
    CraftingSessionInfo();
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ToastIconData.h"
#include "mc/client/social/ToastState.h"

// auto generated forward declare list
// clang-format off
class ToastManager;
// clang-format on

class RecipeToastDataViewer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ToastManager&> mToastManager;
    ::ll::TypedStorage<8, 24, std::vector<ToastIconData>> mRecipes;
    ::ll::TypedStorage<8, 8, const ToastIconData*> mRecipeToShow;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRecipeStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mInvidualRecipeDuration;
    ::ll::TypedStorage<4, 4, int const> mSlowRecipeDuration;
    ::ll::TypedStorage<4, 4, int const> mDesiredRecipeDuration;
    ::ll::TypedStorage<4, 4, int const> mAndMoreRecipesDuration;
    ::ll::TypedStorage<4, 4, int const> mMinRecipesForRegularDuration;
    ::ll::TypedStorage<4, 4, int const> mMaxVisibleRecipes;
    ::ll::TypedStorage<4, 4, float const> mMinToastDisplayTime;
    ::ll::TypedStorage<4, 4, float const> mMaxToastDisplayTime;
    ::ll::TypedStorage<1, 1, bool> mFirstTimeFlag;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeToastDataViewer& operator=(RecipeToastDataViewer const&);
    RecipeToastDataViewer(RecipeToastDataViewer const&);
    RecipeToastDataViewer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getI18nIconTranslation(::ToastIconData const&) const;
    // NOLINTEND
};

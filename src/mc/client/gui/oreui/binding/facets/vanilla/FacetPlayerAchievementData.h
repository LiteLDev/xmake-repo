#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetAchievementData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { struct FacetAchievementData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetPlayerAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                       mAchievementsUnlocked;
    ::ll::TypedStorage<4, 4, int>                                       mMaxAchievements;
    ::ll::TypedStorage<4, 4, int>                                       mCurrGamerScore;
    ::ll::TypedStorage<4, 4, int>                                       mMaxGamerScore;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetAchievementData>> mAchievementData;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetPlayerAchievementData(FacetPlayerAchievementData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void reset();

    MCNAPI ~FacetPlayerAchievementData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetPlayerAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                           mAchievementsUnlocked;
    ::ll::TypedStorage<4, 4, int>                                           mMaxAchievements;
    ::ll::TypedStorage<4, 4, int>                                           mCurrGamerScore;
    ::ll::TypedStorage<4, 4, int>                                           mMaxGamerScore;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetAchievementData>> mAchievementData;
    // NOLINTEND
};
#else // @header-generator platform
struct FacetPlayerAchievementData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

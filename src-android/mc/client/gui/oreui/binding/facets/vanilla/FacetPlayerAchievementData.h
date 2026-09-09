#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetAchievementData.h"

namespace OreUI {

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

} // namespace OreUI

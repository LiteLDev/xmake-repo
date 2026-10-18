#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/social/manual_achievement_tracking/TrackedSetting.h"
#include "mc/world/actor/player/persona/Rarity.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/social/manual_achievement_tracking/TrackedSetting.h"
#include "mc/world/actor/player/persona/Rarity.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                mId;
    ::ll::TypedStorage<8, 24, std::string>                                mPlatformIndependentId;
    ::ll::TypedStorage<8, 24, std::string>                                mAchievementName;
    ::ll::TypedStorage<8, 24, std::string>                                mDescription;
    ::ll::TypedStorage<4, 4, int>                                         mGamerScore;
    ::ll::TypedStorage<8, 8, long>                                        mDateUnlocked;
    ::ll::UntypedStorage<8, 72>                                           mAchievementImageURL;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mIsSecret;
    ::ll::TypedStorage<4, 4, float>                                       mProgressCompleted;
    ::ll::TypedStorage<4, 4, float>                                       mProgressTarget;
    ::ll::TypedStorage<4, 4, ::ManualAchievementTracking::TrackedSetting> mTrackedByUser;
    ::ll::TypedStorage<4, 4, int>                                         mSuggestedOrder;
    ::ll::TypedStorage<8, 24, std::string>                                mPersonaRewardId;
    ::ll::TypedStorage<1, 1, bool>                                        mHasPersonaReward;
    ::ll::TypedStorage<1, 1, bool>                                        mIsPersonaRewardOwned;
    ::ll::TypedStorage<8, 24, std::string>                                mPersonaRewardName;
    ::ll::UntypedStorage<8, 72>                                           mPersonaRewardImageURL;
    ::ll::TypedStorage<1, 1, ::persona::Rarity>                           mPersonaRewardRarity;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetAchievementData& operator=(FacetAchievementData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FacetAchievementData();

    MCNAPI FacetAchievementData(::OreUI::FacetAchievementData const&);

    MCNAPI ~FacetAchievementData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::OreUI::FacetAchievementData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformIndependentId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mAchievementName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mDescription;
    ::ll::TypedStorage<4, 4, int>                                         mGamerScore;
    ::ll::TypedStorage<8, 8, int64>                                       mDateUnlocked;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                     mAchievementImageURL;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mIsSecret;
    ::ll::TypedStorage<4, 4, float>                                       mProgressCompleted;
    ::ll::TypedStorage<4, 4, float>                                       mProgressTarget;
    ::ll::TypedStorage<4, 4, ::ManualAchievementTracking::TrackedSetting> mTrackedByUser;
    ::ll::TypedStorage<4, 4, int>                                         mSuggestedOrder;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPersonaRewardId;
    ::ll::TypedStorage<1, 1, bool>                                        mHasPersonaReward;
    ::ll::TypedStorage<1, 1, bool>                                        mIsPersonaRewardOwned;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPersonaRewardName;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                     mPersonaRewardImageURL;
    ::ll::TypedStorage<1, 1, ::persona::Rarity>                           mPersonaRewardRarity;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetAchievementData& operator=(FacetAchievementData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetAchievementData();

    MCAPI FacetAchievementData(::OreUI::FacetAchievementData const&);

    MCAPI ~FacetAchievementData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OreUI::FacetAchievementData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct FacetAchievementData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

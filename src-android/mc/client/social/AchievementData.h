#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class Achievement;
// clang-format on

class AchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mId;
    ::ll::TypedStorage<8, 24, std::string>              mAchievementName;
    ::ll::TypedStorage<8, 24, std::string>              mDescription;
    ::ll::TypedStorage<8, 24, std::string>              mGamerScore;
    ::ll::TypedStorage<4, 4, int>                       mSuggestedOrder;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mInGameRewardIds;
    ::ll::TypedStorage<8, 8, long>                      mDateUnlocked;
    ::ll::UntypedStorage<8, 24>                         mImagePath;
    ::ll::TypedStorage<1, 1, bool>                      mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                      mIsSecret;
    ::ll::TypedStorage<4, 4, int>                       mWorldScore;
    ::ll::TypedStorage<4, 4, float>                     mProgressCompleted;
    ::ll::TypedStorage<4, 4, float>                     mProgressTarget;
    ::ll::TypedStorage<8, 8, long>                      _mDateUnlocked;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementData(::AchievementData const&);

    MCNAPI std::string getInGameReward(std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool achievementComparisonForSorting(::AchievementData const&, ::AchievementData const&);

    MCNAPI static std::unordered_map<std::string, Achievement> initializeAchievementMapping();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, Achievement> const& ACHIEVEMENT_MAPPING();

    MCNAPI static ::AchievementData const& INVALID_ACHIEVEMENT_DATA();

    MCNAPI static char& REWARD_META_DELIMITER();

    MCNAPI static std::string& REWARD_META_TAG_PERSONA();

    MCNAPI static std::vector<std::string> const& SUGGESTED_ORDER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AchievementData const&);
    // NOLINTEND
};

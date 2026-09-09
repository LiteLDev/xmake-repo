#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/AchievementData.h"

class PlayerAchievementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mAchievementsUnlocked;
    ::ll::TypedStorage<4, 4, int>                           mMaxAchievements;
    ::ll::TypedStorage<4, 4, int>                           mCurrGamerScore;
    ::ll::TypedStorage<4, 4, int>                           mMaxGamerScore;
    ::ll::TypedStorage<8, 24, std::vector<AchievementData>> mAchievementData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerAchievementData();

    MCNAPI void addAchievementData(::AchievementData&);

    MCNAPI void clear();

    MCNAPI bool containsAchievement(::AchievementData&);

    MCNAPI std::vector<AchievementData> const& getAchievementData() const;

    MCNAPI std::vector<AchievementData>& getAchievementData();

    MCNAPI int getAchievementsUnlocked() const;

    MCNAPI int getCurrGamerScore() const;

    MCNAPI int getMaxAchievements() const;

    MCNAPI int getMaxGamerScore() const;

    MCNAPI void operator=(::PlayerAchievementData const&);

    MCNAPI void setAchievementsUnlocked(int);

    MCNAPI void setCurrGamerScore(int);

    MCNAPI void setMaxAchievements(int);

    MCNAPI void setMaxGamerScore(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AchievementCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAchievements;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementCategory& operator=(AchievementCategory const&);
    AchievementCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AchievementCategory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<AchievementCategory> getReleaseCategories();

    MCNAPI static std::vector<AchievementCategory> getStandardCategories();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

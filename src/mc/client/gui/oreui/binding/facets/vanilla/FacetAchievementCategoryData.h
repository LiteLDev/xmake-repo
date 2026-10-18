#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct FacetAchievementCategoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAchievements;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetAchievementCategoryData& operator=(FacetAchievementCategoryData const&);
    FacetAchievementCategoryData(FacetAchievementCategoryData const&);
    FacetAchievementCategoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FacetAchievementCategoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetAchievementCategoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mAchievements;
    // NOLINTEND
};
#else // @header-generator platform
struct FacetAchievementCategoryData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ReviewModel;
struct RatingData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct RatingDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        averageRating;
    ::ll::TypedStorage<4, 4, int>          totalRatingsCount;
    ::ll::TypedStorage<8, 24, std::string> displayRatingCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RatingDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          averageRating;
    ::ll::TypedStorage<4, 4, int>            totalRatingsCount;
    ::ll::TypedStorage<8, 32, ::std::string> displayRatingCount;
    // NOLINTEND
};
#else // @header-generator platform
struct RatingDataBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

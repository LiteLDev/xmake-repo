#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ReviewModel;
struct RatingData;
// clang-format on

namespace OreUI {

struct RatingDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        averageRating;
    ::ll::TypedStorage<4, 4, int>          totalRatingsCount;
    ::ll::TypedStorage<8, 24, std::string> displayRatingCount;
    // NOLINTEND
};

} // namespace OreUI

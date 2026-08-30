#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct ClampedNormalFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mean;
    ::ll::TypedStorage<4, 4, float> deviation;
    ::ll::TypedStorage<4, 4, float> min;
    ::ll::TypedStorage<4, 4, float> max;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float generateNext(::Random&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float generateNext(::Random&, float, float, float, float);
    // NOLINTEND
};

} // namespace ValueProviders

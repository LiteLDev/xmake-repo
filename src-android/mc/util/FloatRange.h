#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

struct FloatRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> rangeMin;
    ::ll::TypedStorage<4, 4, float> rangeMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getValue(::Random&) const;

    MCNAPI bool parseJson(::Json::Value const&, float, float);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

class RandomValueBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMin;
    ::ll::TypedStorage<4, 4, float> mMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void deserialize(::Json::Value const&);

    MCNAPI float getFloat(::Random&) const;

    MCNAPI int getInt(::Random&) const;

    MCNAPI float getMax() const;

    MCNAPI float getMin() const;
    // NOLINTEND
};

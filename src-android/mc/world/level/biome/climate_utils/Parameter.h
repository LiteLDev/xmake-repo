#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct Parameter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> mMin;
    ::ll::TypedStorage<8, 8, long> mMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Parameter(float, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClimateUtils::Parameter
    fromParameters(::ClimateUtils::Parameter const&, ::ClimateUtils::Parameter const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, float);
    // NOLINTEND
};

} // namespace ClimateUtils

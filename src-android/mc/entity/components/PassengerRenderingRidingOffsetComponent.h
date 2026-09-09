#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/RidingOffsetInterpolationPair.h"

struct PassengerRenderingRidingOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RidingOffsetInterpolationPair> mInterpolationPair;
    // NOLINTEND

public:
    // prevent constructor by default
    PassengerRenderingRidingOffsetComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PassengerRenderingRidingOffsetComponent(::RidingOffsetInterpolationPair const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RidingOffsetInterpolationPair const&);
    // NOLINTEND
};

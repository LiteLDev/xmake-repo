#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_40 { struct JumpDataDefinition; }
// clang-format on

class JumpData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceScale;
    ::ll::TypedStorage<4, 4, float> mHeight;
    ::ll::TypedStorage<4, 4, int>   mJumpDelay;
    ::ll::TypedStorage<4, 4, int>   mAnimDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JumpData(float, float, int, int);

    MCNAPI int getAnimDuration() const;

    MCNAPI float getDistanceScale() const;

    MCNAPI float getHeight() const;

    MCNAPI int getJumpDelay() const;

    MCNAPI void initialize(::SharedTypes::v1_26_40::JumpDataDefinition const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, float, int, int);
    // NOLINTEND
};

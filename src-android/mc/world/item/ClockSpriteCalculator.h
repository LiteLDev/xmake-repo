#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Vec3;
// clang-format on

class ClockSpriteCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mFrame;
    ::ll::TypedStorage<4, 4, float> mRot;
    ::ll::TypedStorage<4, 4, float> mRotA;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClockSpriteCalculator();

    MCNAPI int getFrame() const;

    MCNAPI int update(::BlockSource const&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/Tick.h"

struct RenderingRidingOffsetInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mBaseLocator;
    ::ll::TypedStorage<8, 40, ::HashedString> mSeatLocator;
    ::ll::TypedStorage<4, 4, float>           mPreviousOffset;
    ::ll::TypedStorage<8, 8, ::Tick>          mPreviousOffsetTick;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingRidingOffsetInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderingRidingOffsetInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

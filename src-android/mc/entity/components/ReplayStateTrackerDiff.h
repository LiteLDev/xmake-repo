#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateFlagDiff.h"
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct ReplayStateTrackerDiff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mFlags;
    ::ll::UntypedStorage<8, 16> mHorseFlags;
    ::ll::UntypedStorage<1, 2>  mJumpDuration;
    ::ll::UntypedStorage<4, 16> mBoundingBox;
    ::ll::UntypedStorage<4, 16> mSeatOffset;
    ::ll::UntypedStorage<1, 2>  mControllingSeatIndex;
    // NOLINTEND
};

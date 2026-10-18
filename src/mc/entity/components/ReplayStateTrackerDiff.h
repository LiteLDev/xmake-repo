#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/ReplayStateFlagDiff.h"
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ReplayStateTrackerDiff {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mFlags;
    ::ll::UntypedStorage<8, 16> mHorseFlags;
    ::ll::UntypedStorage<1, 2>  mJumpDuration;
    ::ll::UntypedStorage<4, 16> mBoundingBox;
    ::ll::UntypedStorage<4, 16> mSeatOffset;
    ::ll::UntypedStorage<1, 2>  mControllingSeatIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk5c9bba;
    ::ll::UntypedStorage<8, 16> mUnk49779f;
    ::ll::UntypedStorage<1, 2>  mUnk9e9943;
    ::ll::UntypedStorage<4, 16> mUnke8275a;
    ::ll::UntypedStorage<4, 16> mUnk58f400;
    ::ll::UntypedStorage<1, 2>  mUnk395446;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReplayStateTrackerDiff& operator=(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff(ReplayStateTrackerDiff const&);
    ReplayStateTrackerDiff();
#endif // @header-generator platform
};

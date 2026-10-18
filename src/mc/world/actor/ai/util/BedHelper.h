#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BedHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mNorthDir;
    ::ll::TypedStorage<4, 4, float> mSouthDir;
    ::ll::TypedStorage<4, 4, float> mWestDir;
    ::ll::TypedStorage<4, 4, float> mEastDir;
    ::ll::TypedStorage<4, 4, float> mBedOffsetX;
    ::ll::TypedStorage<4, 4, float> mBedOffsetZ;
    ::ll::TypedStorage<4, 4, float> mMobOffsetWestX;
    ::ll::TypedStorage<4, 4, float> mMobOffsetEastX;
    ::ll::TypedStorage<4, 4, float> mMobOffsetSouthZ;
    ::ll::TypedStorage<4, 4, float> mMobOffsetNorthZ;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BedHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getBedRotation(int) const;

    MCNAPI void setBedPositionOffsets(int, float&, float&, ::Vec3&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

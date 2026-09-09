#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class VisibilityNode;
// clang-format on

struct ChunkVisibilityCacheElement {
public:
    // ChunkVisibilityCacheElement inner types declare
    // clang-format off
    struct CullerDistanceField;
    struct CullerManhattan;
    struct CullerShadow;
    // clang-format on

    // ChunkVisibilityCacheElement inner types define
    struct CullerDistanceField {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>  mDistance;
        ::ll::TypedStorage<2, 2, ushort> mLatticeLookup;
        ::ll::TypedStorage<1, 1, uchar>  mCanSeeChunkBitfield;
        // NOLINTEND
    };

    struct CullerManhattan {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mCurrentRunLengthXY;
        ::ll::TypedStorage<1, 1, uchar> mCurrentRunLengthXZ;
        ::ll::TypedStorage<1, 1, uchar> mCurrentRunLengthYZ;
        ::ll::TypedStorage<1, 1, uchar> mMaximumRunLengthXY;
        ::ll::TypedStorage<1, 1, uchar> mMaximumRunLengthXZ;
        ::ll::TypedStorage<1, 1, uchar> mMaximumRunLengthYZ;
        ::ll::TypedStorage<1, 1, uchar> mReachedFromFaceBitset;
        uchar                           mAllowedTravelDirectionBitset : 7;
        bool                            mQueuedThisIteration          : 1;
        // NOLINTEND
    };

    struct CullerShadow {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mReachedFromFaceBitset;
        bool                            mQueuedThisIteration  : 1;
        bool                            mReachedFromValidNode : 1;
        ::ll::TypedStorage<2, 2, short> mShortestPathX;
        ::ll::TypedStorage<2, 2, short> mShortestPathY;
        ::ll::TypedStorage<2, 2, short> mShortestPathZ;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>      mField_a182f358;
    ::ll::UntypedStorage<1, 6>      mVisibility;
    uchar                           mChunkIsEmpty           : 1;
    uchar                           mChunkVisible           : 1;
    uchar                           mChunkAccessBitX        : 1;
    uchar                           mChunkAccessBitY        : 1;
    uchar                           mChunkAccessBitZ        : 1;
    uchar                           mAllSidesCanSeeAllSides : 1;
    uchar                           mForceRequery           : 1;
    uchar                           mInitted                : 1;
    ::ll::TypedStorage<1, 1, uchar> mUpdateCounter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void updateVisibilityMatrix(::VisibilityNode const&);
    // NOLINTEND
};

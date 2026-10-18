#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace VoxelShapes { struct MergerIndexPair; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mCoords;
    ::ll::UntypedStorage<8, 64> mIndices;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk9ef562;
    ::ll::UntypedStorage<8, 64> mUnk914bd0;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexMerger& operator=(IndexMerger const&);
    IndexMerger(IndexMerger const&);
    IndexMerger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexMerger(
        ::Bedrock::small_vector<float, 12> const& first,
        ::Bedrock::small_vector<float, 12> const& second,
        bool                                      canTrimExcessOfFirst,
        bool                                      canTrimExcessOfSecond
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::small_vector<float, 12> const& emptyShapeCoords();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::small_vector<float, 12> const& first,
        ::Bedrock::small_vector<float, 12> const& second,
        bool                                      canTrimExcessOfFirst,
        bool                                      canTrimExcessOfSecond
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/SubChunkBlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class ByteMask;
class RenderChunkShared;
class VisibilityNode;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class VisibilityExtimator {
public:
    // VisibilityExtimator inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BlockState : uchar {
        TS_EMPTY        = 0,
        TS_OPAQUE       = 1,
        TS_EMPTY_MARKED = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                         timer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                          mOrigin;
    ::ll::TypedStorage<4, 4, int>                                                  mEmptyBlocks;
    ::ll::TypedStorage<1, 4096, std::array<VisibilityExtimator::BlockState, 4096>> mBlocks;
    ::ll::TypedStorage<8, 48, std::deque<SubChunkBlockPos>>                        mFloodQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ByteMask _floodFill(::SubChunkBlockPos const&);

    MCNAPI ~VisibilityExtimator();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::VisibilityExtimator& pool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class BlockState : schar {};
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/ChunkVisibilityCacheElement.h"

// auto generated forward declare list
// clang-format off
class DimensionHeightRange;
class SubChunkPos;
class VisibilityNode;
// clang-format on

class ChunkVisibilityCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ChunkVisibilityCacheElement>> mCache;
    ::ll::TypedStorage<4, 4, int>                                       mCacheSideMask;
    ::ll::TypedStorage<1, 1, uchar>                                     mCacheSideShift;
    ::ll::TypedStorage<1, 1, uchar>                                     mCacheDoubleSideShift;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkVisibilityCache();

    MCNAPI void invalidateAllElements();

    MCNAPI void resetFrameCounters(uchar);

    MCNAPI void resetViewAreaSide(int, ::DimensionHeightRange const&);

    MCNAPI void setElem(::SubChunkPos const&, ::VisibilityNode const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

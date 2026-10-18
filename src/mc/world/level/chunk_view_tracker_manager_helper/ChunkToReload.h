#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/Bounds.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ChunkViewTrackerManagerHelper {

struct ChunkToReload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 48, ::Bounds>                       mBound;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ChunkViewSource>> mChunkView;
    ::ll::TypedStorage<1, 1, bool>                            mIsCircle;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 48> mUnk2c570b;
    ::ll::UntypedStorage<8, 16> mUnkbf7030;
    ::ll::UntypedStorage<1, 1>  mUnk966956;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ChunkToReload& operator=(ChunkToReload const&);
    ChunkToReload(ChunkToReload const&);
    ChunkToReload();
#endif // @header-generator platform
};

} // namespace ChunkViewTrackerManagerHelper

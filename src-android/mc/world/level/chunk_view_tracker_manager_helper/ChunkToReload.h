#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Bounds.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
// clang-format on

namespace ChunkViewTrackerManagerHelper {

struct ChunkToReload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::Bounds>                       mBound;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ChunkViewSource>> mChunkView;
    ::ll::TypedStorage<1, 1, bool>                            mIsCircle;
    // NOLINTEND
};

} // namespace ChunkViewTrackerManagerHelper

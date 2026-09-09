#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/TileRenderConfig.h"

namespace dragon::atlas {

struct TileState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::dragon::atlas::TileRenderConfig>    mRenderConfig;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, int, (glm::qualifier)0>> mPixelRect;
    ::ll::TypedStorage<4, 4, ::dragon::atlas::PackerAllocId>         mPackerAllocId;
    ::ll::TypedStorage<8, 8, ulong>                                  mLastRenderedAtFrame;
    ::ll::TypedStorage<4, 4, uint>                                   mVersion;
    ::ll::TypedStorage<1, 1, bool>                                   mDirty;
    ::ll::TypedStorage<1, 1, bool>                                   mInUse;
    // NOLINTEND
};

} // namespace dragon::atlas

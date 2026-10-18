#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/TileRenderConfig.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct TileState {};
#endif // @header-generator platform

} // namespace dragon::atlas

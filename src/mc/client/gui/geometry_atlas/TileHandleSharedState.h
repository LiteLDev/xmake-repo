#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct TileHandleSharedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mIsInitialized;
    ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mHandle;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TileHandleSharedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mIsInitialized;
    ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mHandle;
    // NOLINTEND
};
#else // @header-generator platform
struct TileHandleSharedState {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

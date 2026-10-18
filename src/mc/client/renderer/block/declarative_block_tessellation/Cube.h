#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/CubePoint.h"
#include "mc/client/renderer/block/declarative_block_tessellation/Face.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/CubePoint.h"
#include "mc/client/renderer/block/declarative_block_tessellation/Face.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace DeclarativeBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
struct Cube {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>          mOrigin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mSize;
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>          mMax;
    ::ll::TypedStorage<8, 192, std::array<DeclarativeBlockTessellation::Face, 6>> mFaces;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Cube {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>              mOrigin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mSize;
    ::ll::TypedStorage<4, 24, ::DeclarativeBlockTessellation::CubePoint>              mMax;
    ::ll::TypedStorage<8, 192, ::std::array<::DeclarativeBlockTessellation::Face, 6>> mFaces;
    // NOLINTEND
};
#else // @header-generator platform
struct Cube {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace DeclarativeBlockTessellation

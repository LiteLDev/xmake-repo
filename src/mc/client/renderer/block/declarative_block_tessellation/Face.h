#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/TextureSlot.h"
#include "mc/client/renderer/block/declarative_block_tessellation/UVMap.h"
#include "mc/legacy/facing/Name.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/TextureSlot.h"
#include "mc/client/renderer/block/declarative_block_tessellation/UVMap.h"
#include "mc/legacy/facing/Name.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace DeclarativeBlockTessellation {

#if defined(LL_PLAT_A) // @header-generator platform
struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Facing::Name>                              mFace;
    ::ll::TypedStorage<4, 16, ::DeclarativeBlockTessellation::UVMap>      mUVMap;
    ::ll::TypedStorage<8, 8, ::DeclarativeBlockTessellation::TextureSlot> mTextureSlot;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Facing::Name>                              mFace;
    ::ll::TypedStorage<4, 16, ::DeclarativeBlockTessellation::UVMap>      mUVMap;
    ::ll::TypedStorage<8, 8, ::DeclarativeBlockTessellation::TextureSlot> mTextureSlot;
    // NOLINTEND
};
#else // @header-generator platform
struct Face {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace DeclarativeBlockTessellation

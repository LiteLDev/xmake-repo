#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockTessellatorBlockInWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>     block;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer> layer;
    ::ll::TypedStorage<4, 12, ::BlockPos>        pos;
    ::ll::TypedStorage<8, 8, void const*>        owner;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellatorBlockInWorld& operator=(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct BlockTessellatorBlockInWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>     block;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer> layer;
    ::ll::TypedStorage<4, 12, ::BlockPos>        pos;
    ::ll::TypedStorage<8, 8, void const*>        owner;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTessellatorBlockInWorld& operator=(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld(BlockTessellatorBlockInWorld const&);
    BlockTessellatorBlockInWorld();
};
#else // @header-generator platform
struct BlockTessellatorBlockInWorld {};
#endif // @header-generator platform
#endif // @header-generator platform

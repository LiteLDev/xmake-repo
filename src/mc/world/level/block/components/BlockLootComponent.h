#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class ItemStack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockLootComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

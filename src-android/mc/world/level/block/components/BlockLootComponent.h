#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class ItemStack;
// clang-format on

struct BlockLootComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);
};

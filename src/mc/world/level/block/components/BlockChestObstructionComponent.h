#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/ChestObstructionRule.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
struct BlockChestObstructionDescription;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BlockChestObstructionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChestObstructionRule> mChestObstructionRule;
    // NOLINTEND
};

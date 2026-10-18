#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockPlacementType.h"
#include "mc/world/level/levelgen/structure/PlacedConnectionBlock.h"

class StructureBlockPlacementInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::variant<BlockPlacementType, PlacedConnectionBlock>> mPlacementInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::variant<::BlockPlacementType, ::PlacedConnectionBlock>> mPlacementInfo;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureBlockPlacementInfo& operator=(StructureBlockPlacementInfo const&);
    StructureBlockPlacementInfo(StructureBlockPlacementInfo const&);
#else // @header-generator platform
#endif // @header-generator platform
};

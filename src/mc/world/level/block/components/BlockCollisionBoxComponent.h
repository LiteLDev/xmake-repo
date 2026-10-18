#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockShapeComponentData.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
// clang-format on

struct BlockCollisionBoxComponent : public ::BlockShapeComponentData {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockCollisionBoxComponent(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool addComponentCollisionShapes(
        ::BlockCollisionBoxComponent const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&
#else // @header-generator platform
    MCAPI static bool addComponentCollisionShapes(
        ::BlockCollisionBoxComponent const& component,
        ::BlockPos const&                   pos,
        ::BlockPos const&                   randomOffsetPos,
        ::AABB const*                       intersectTestBox,
        ::std::vector<::AABB>&              inoutBoxes
#endif // @header-generator platform
    );
    // NOLINTEND
};

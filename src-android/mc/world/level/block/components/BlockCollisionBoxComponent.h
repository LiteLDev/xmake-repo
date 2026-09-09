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
    // prevent constructor by default
    BlockCollisionBoxComponent(BlockCollisionBoxComponent const&);
    BlockCollisionBoxComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool addComponentCollisionShapes(
        ::BlockCollisionBoxComponent const&,
        ::BlockPos const&,
        ::BlockPos const&,
        ::AABB const*,
        std::vector<AABB>&
    );
    // NOLINTEND
};

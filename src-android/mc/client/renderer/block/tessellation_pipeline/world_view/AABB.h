#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/world_view/Interface.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ClientBlockPipeline::WorldView {

class AABB : public ::ClientBlockPipeline::WorldView::Interface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mChunkMinWorldPos;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mAABBoffset;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mRelativeAABBmin;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mRelativeAABBmax;
    ::ll::TypedStorage<8, 8, ::Block const&>    mExternalBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    AABB& operator=(AABB const&);
    AABB(AABB const&);
    AABB();
};

} // namespace ClientBlockPipeline::WorldView

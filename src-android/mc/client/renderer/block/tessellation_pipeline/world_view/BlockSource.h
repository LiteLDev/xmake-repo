#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/world_view/Interface.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"

namespace ClientBlockPipeline::WorldView {

class BlockSource : public ::ClientBlockPipeline::WorldView::Interface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::BlockSource> mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mMinPos;
    // NOLINTEND
};

} // namespace ClientBlockPipeline::WorldView

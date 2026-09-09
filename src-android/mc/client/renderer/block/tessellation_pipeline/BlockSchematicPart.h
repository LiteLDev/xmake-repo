#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/BoxSchematic.h"

namespace ClientBlockPipeline {

struct BlockSchematicPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ClientBlockPipeline::BoxSchematic>> mBoxes;
    ::ll::TypedStorage<8, 24, std::string>                                    mName;
    ::ll::TypedStorage<1, 1, uchar>                                           mCullPart;
    ::ll::UntypedStorage<1, 2>                                                mCullCondition;
    ::ll::TypedStorage<1, 1, bool>                                            mCullAgainstFullAndOpaque;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSchematicPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::BlockSchematicPart& operator=(::ClientBlockPipeline::BlockSchematicPart&&);

    MCNAPI ~BlockSchematicPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline

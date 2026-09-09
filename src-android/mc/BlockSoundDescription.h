#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

struct BlockSoundDescription : public ::NetworkedBlockComponentDescription<BlockSoundDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSoundType;
    // NOLINTEND
};

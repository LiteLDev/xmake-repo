#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

namespace ClientBlockPipeline {

struct BlockVolumeArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isInBounds(::BlockPos const&) const;
    // NOLINTEND
};

} // namespace ClientBlockPipeline

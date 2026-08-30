#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkKeyUtil {

struct ChunkPosData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke90885;
    ::ll::UntypedStorage<4, 4> mUnkc22f76;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkPosData& operator=(ChunkPosData const&);
    ChunkPosData(ChunkPosData const&);
    ChunkPosData();
};

} // namespace ChunkKeyUtil

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/storage/LevelDataLoadResult.h"

struct LevelInfoPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                     mPath;
    ::ll::TypedStorage<4, 4, ::LevelDataLoadResult> mDataAvailability;
    // NOLINTEND
};

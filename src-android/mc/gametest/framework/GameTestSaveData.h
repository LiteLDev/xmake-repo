#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

struct GameTestSaveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>  mBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<8, 24, std::string>    mTestName;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&);
};

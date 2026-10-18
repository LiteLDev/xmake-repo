#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#else // @header-generator platform
#endif // @header-generator platform

struct GameTestSaveData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>  mBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<8, 24, std::string>    mTestName;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 24> mUnkb98612;
    ::ll::UntypedStorage<4, 4>  mUnk4553be;
    ::ll::UntypedStorage<8, 32> mUnkddb4d5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameTestSaveData(GameTestSaveData const&);
    GameTestSaveData();
#endif // @header-generator platform
};

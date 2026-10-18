#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct BiomeMountainParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSteepBlock;
    ::ll::TypedStorage<1, 1, bool> mNorthSlopes;
    ::ll::TypedStorage<1, 1, bool> mSouthSlopes;
    ::ll::TypedStorage<1, 1, bool> mWestSlopes;
    ::ll::TypedStorage<1, 1, bool> mEastSlopes;
    ::ll::TypedStorage<1, 1, bool> mTopSlideEnabled;
    // NOLINTEND
};

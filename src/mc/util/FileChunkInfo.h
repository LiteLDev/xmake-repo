#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>   chunkID;
    ::ll::TypedStorage<8, 8, ulong> startByte;
    ::ll::TypedStorage<8, 8, ulong> endByte;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>    chunkID;
    ::ll::TypedStorage<8, 8, uint64> startByte;
    ::ll::TypedStorage<8, 8, uint64> endByte;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FileChunkInfo();
#else // @header-generator platform
#endif // @header-generator platform
};

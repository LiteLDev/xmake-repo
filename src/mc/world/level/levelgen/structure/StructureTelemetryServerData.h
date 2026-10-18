#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class StructureTelemetryServerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHasBeenActivatedByRedstone;
    ::ll::TypedStorage<1, 1, bool>        mHasLoadedIntoUnloadedChunks;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastOffsetWhenLoadingIntoUnloadedChunks;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTelemetryServerData();

    MCNAPI bool hasBeenActivatedByRedstone();

    MCNAPI void setHasBeenActivedByRedstone();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

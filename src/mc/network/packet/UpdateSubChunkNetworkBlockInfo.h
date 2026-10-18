#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct UpdateSubChunkNetworkBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>              mPos;
    ::ll::TypedStorage<4, 4, uint>                     mRuntimeId;
    ::ll::TypedStorage<1, 1, uchar>                    mUpdateFlags;
    ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mSyncMessage;
    // NOLINTEND
};

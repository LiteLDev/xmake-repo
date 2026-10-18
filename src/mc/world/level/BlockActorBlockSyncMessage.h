#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
struct BlockActorBlockSyncMessage {
public:
    // BlockActorBlockSyncMessage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class MessageId : int {
        NONE    = 0,
        CREATE  = 1,
        DESTROY = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mBlockEntityPos;
    ::ll::TypedStorage<4, 4, ::BlockActorBlockSyncMessage::MessageId> mMessage;
    // NOLINTEND
#else // @header-generator platform
    enum class MessageId : int {};
#endif // @header-generator platform
};

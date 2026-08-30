#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct BlockActorBlockSyncMessage {
public:
    // BlockActorBlockSyncMessage inner types define
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
};

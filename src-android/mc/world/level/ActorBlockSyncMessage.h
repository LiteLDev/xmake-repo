#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct ActorBlockSyncMessage {
public:
    // ActorBlockSyncMessage inner types define
    enum class MessageId : uint {
        NONE    = 0,
        CREATE  = 1,
        DESTROY = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                    mEntityUniqueID;
    ::ll::TypedStorage<4, 4, ::ActorBlockSyncMessage::MessageId> mMessage;
    // NOLINTEND
};

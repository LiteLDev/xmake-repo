#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/MinecraftPacketIds.h"

struct OutgoingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                    mRecipients;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mPacketId;
    // NOLINTEND

public:
    // prevent constructor by default
    OutgoingPacketEvent& operator=(OutgoingPacketEvent const&);
    OutgoingPacketEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OutgoingPacketEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

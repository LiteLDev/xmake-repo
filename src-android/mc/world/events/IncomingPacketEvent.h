#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct IncomingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                    mSender;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> mPacketId;
    ::ll::TypedStorage<8, 8, ulong>                mPacketSize;
    // NOLINTEND

public:
    // prevent constructor by default
    IncomingPacketEvent& operator=(IncomingPacketEvent const&);
    IncomingPacketEvent();
};

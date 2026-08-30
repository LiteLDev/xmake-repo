#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SyncWorldClocksPacketPayload.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PacketSender;
class SyncWorldClocksPacket;
// clang-format on

class WorldClockRegistryClient : public ::WorldClockRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryClient();

    virtual void tick(::PacketSender&, ::LevelData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handleSyncWorldClocks(::SyncWorldClocksPacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::PacketSender&, ::LevelData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

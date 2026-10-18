#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SyncWorldClocksPacketPayload.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class SyncWorldClocksPacket;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WorldClockRegistryClient : public ::WorldClockRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldClockRegistryClient();
#else // @header-generator platform
    virtual ~WorldClockRegistryClient() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::PacketSender&, ::LevelData const&);
#else // @header-generator platform
    virtual void tick(::PacketSender&, ::LevelData const& levelData) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleSyncWorldClocks(::SyncWorldClocksPacket const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _addTimeMarker(::SyncWorldClocksPacketPayload::AddTimeMarkerData const& data);

    MCAPI void _initializeRegistry(::SyncWorldClocksPacketPayload::InitializeRegistryData const& data);

    MCAPI void _removeTimeMarker(::SyncWorldClocksPacketPayload::RemoveTimeMarkerData const& data);

    MCAPI void _syncWorldClocksState(::SyncWorldClocksPacketPayload::SyncStateData const& data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::PacketSender&, ::LevelData const&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $tick(::PacketSender&, ::LevelData const& levelData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

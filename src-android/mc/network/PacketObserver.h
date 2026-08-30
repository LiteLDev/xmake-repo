#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketObserver.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
// clang-format on

class PacketObserver : public ::IPacketObserver {
public:
    // PacketObserver inner types declare
    // clang-format off
    struct PacketStats;
    // clang-format on

    // PacketObserver inner types define
    struct PacketStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> id;
        ::ll::TypedStorage<4, 4, uint> sentNum;
        ::ll::TypedStorage<4, 4, uint> sentBytes;
        ::ll::TypedStorage<4, 4, uint> receivedNum;
        ::ll::TypedStorage<4, 4, uint> receivedBytes;
        ::ll::TypedStorage<4, 4, uint> handledPackets;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::PacketObserver::PacketStats> mQueuedStatsInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketObserver();

    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);

    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);

    virtual void dataSentTo(::NetworkIdentifier const&, std::string_view);

    virtual void dataReceivedFrom(::NetworkIdentifier const&, std::string const&);

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getQueuedPacketsRcvdCount();

    MCNAPI int getQueuedPacketsRcvdSize();

    MCNAPI int getQueuedPacketsSentCount();

    MCNAPI int getQueuedPacketsSentSize();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);

    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);

    MCNAPI void $dataSentTo(::NetworkIdentifier const&, std::string_view);

    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const&, std::string const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

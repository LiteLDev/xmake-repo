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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> id;
        ::ll::TypedStorage<4, 4, uint> sentNum;
        ::ll::TypedStorage<4, 4, uint> sentBytes;
        ::ll::TypedStorage<4, 4, uint> receivedNum;
        ::ll::TypedStorage<4, 4, uint> receivedBytes;
        ::ll::TypedStorage<4, 4, uint> handledPackets;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk8e1033;
        ::ll::UntypedStorage<4, 4> mUnk1b3300;
        ::ll::UntypedStorage<4, 4> mUnk5d3915;
        ::ll::UntypedStorage<4, 4> mUnkc76f5b;
        ::ll::UntypedStorage<4, 4> mUnkf9db13;
        ::ll::UntypedStorage<4, 4> mUnkc40279;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PacketStats& operator=(PacketStats const&);
        PacketStats(PacketStats const&);
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PacketObserver();
#else // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const& target, ::std::string_view data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const&, std::string_view);

    virtual void dataReceivedFrom(::NetworkIdentifier const&, std::string const&);
#else // @header-generator platform
    virtual void dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data) /*override*/;
#endif // @header-generator platform

    virtual void reset();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    MCNAPI void $packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint);
#else // @header-generator platform
    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dataSentTo(::NetworkIdentifier const&, std::string_view);
#else // @header-generator platform
    MCNAPI void $dataSentTo(::NetworkIdentifier const& target, ::std::string_view data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const&, std::string const&);
#else // @header-generator platform
    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data);
#endif // @header-generator platform

    MCNAPI void $reset();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

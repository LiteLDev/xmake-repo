#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                     mReadResult;
    ::ll::TypedStorage<8, 24, std::string>              mReadResultContext;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse> mViolationResponse;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>     mNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketViolationDetectedTelemetryData(
        ulong,
        std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&
    );

    MCNAPI void WriteEventData(::Social::Events::Event&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& mEventName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, ::NetworkIdentifier const&);
    // NOLINTEND
};

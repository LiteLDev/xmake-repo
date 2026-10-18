#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/PacketViolationResponse.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                     mReadResult;
    ::ll::TypedStorage<8, 24, std::string>              mReadResultContext;
    ::ll::TypedStorage<4, 4, ::PacketViolationResponse> mViolationResponse;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>      mViolatingPacketId;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier>     mNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk42dcb4;
    ::ll::UntypedStorage<8, 32>  mUnk6ab08a;
    ::ll::UntypedStorage<4, 4>   mUnk38d1a1;
    ::ll::UntypedStorage<4, 4>   mUnkfa3960;
    ::ll::UntypedStorage<8, 176> mUnkec8fe0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PacketViolationDetectedTelemetryData(
        ulong,
        std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&
    );

    MCNAPI void WriteEventData(::Social::Events::Event&) const;
#else // @header-generator platform
    MCNAPI void WriteEventData(::Social::Events::Event& event) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& mEventName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong, std::string, ::PacketViolationResponse, ::MinecraftPacketIds, ::NetworkIdentifier const&);
#else // @header-generator platform
    MCNAPI static ::std::string const& mEventName();
#endif // @header-generator platform
    // NOLINTEND
};

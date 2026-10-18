#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/events/PlayerJoinWorldContext.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/events/NetworkType.h"
#include "mc/network/TransportLayer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ConnectionContextInfo {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<2, 2, ushort> joinAttemptId;
    ::ll::TypedStorage<1, 1, bool> isLocalServer;
    ::ll::TypedStorage<4, 4, ::NetworkType> networkType;
    ::ll::TypedStorage<4, 4, ::TransportLayer> transportType;
    ::ll::TypedStorage<8, 24, std::string> serverName;
    ::ll::TypedStorage<8, 24, std::string> worldName;
    ::ll::TypedStorage<4, 4, ::Social::MultiplayerServiceIdentifier> serviceId;
    ::ll::TypedStorage<8, 32, ::PlayerJoinWorldContext> worldContext;
    ::ll::TypedStorage<8, 24, std::string> multiplayerCorrelationId;
    ::ll::UntypedStorage<8, 16> sessionSummary;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> connectionStartTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionContextInfo& operator=(ConnectionContextInfo const&);
    ConnectionContextInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionContextInfo(::ConnectionContextInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ConnectionContextInfo const&);
    // NOLINTEND
};
#else // @header-generator platform
struct ConnectionContextInfo {};
#endif // @header-generator platform

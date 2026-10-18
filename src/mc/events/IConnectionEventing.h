#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

class IConnectionEventing {
public:
    // IConnectionEventing inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ServerConnectionOutcome : int {
        Success              = 0,
        Failed               = 1,
        Failed_UserOffline   = 2,
        Failed_ServerFull    = 3,
        Failed_ServerOffline = 4,
#else // @header-generator platform
    enum class ConnectionFailureReason : int {
        Unknown                     = -1,
        MismatchedMinecraftProtocol = 1,
        MismatchedRaknetVersion     = 2,
#endif // @header-generator platform
    };

    enum class PlayerJoinWorldAttemptState : int {
        Unknown                = 0,
        AttemptingToJoin       = 1,
        TimedOutAttemptingJoin = 2,
        FailedToJoin           = 3,
        SuccessfulJoin         = 4,
        Canceled               = 5,
        MissingEventDetected   = 6,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class ServerConnectionOutcome : int {
        Success             = 0,
        Failed              = 1,
        FailedUserOffline   = 2,
        FailedServerFull    = 3,
        FailedServerOffline = 4,
    };

#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IConnectionEventing() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const*) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void fireEventOnSuccessfulClientLogin(::Level const* level) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

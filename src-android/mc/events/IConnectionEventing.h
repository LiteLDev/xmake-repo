#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

class IConnectionEventing {
public:
    // IConnectionEventing inner types define
    enum class ServerConnectionOutcome : int {
        Success              = 0,
        Failed               = 1,
        Failed_UserOffline   = 2,
        Failed_ServerFull    = 3,
        Failed_ServerOffline = 4,
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

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IConnectionEventing() = default;

    virtual void fireServerConnectionEvent(::IConnectionEventing::ServerConnectionOutcome, uint, double, std::string const&, std::string const&) = 0;

    virtual void fireEventOnSuccessfulClientLogin(::Level const*) = 0;
    // clang-format on
    // NOLINTEND
};

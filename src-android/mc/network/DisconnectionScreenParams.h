#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

struct DisconnectionScreenParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason> disconnectFailReason;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectionStage>   disconnectStage;
    ::ll::TypedStorage<8, 24, std::string>                       messageTitle;
    ::ll::TypedStorage<8, 24, std::string>                       messageBody;
    ::ll::TypedStorage<8, 24, std::string>                       messageFromServer;
    ::ll::TypedStorage<8, 24, std::string>                       screenNameOverride;
    ::ll::TypedStorage<8, 24, std::string>                       telemetryString;
    ::ll::TypedStorage<8, 24, std::string>                       codeword;
    ::ll::TypedStorage<8, 16, std::optional<long>>               realmId;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionScreenParams& operator=(DisconnectionScreenParams const&);
    DisconnectionScreenParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DisconnectionScreenParams(::Connection::DisconnectFailReason);

    MCNAPI ~DisconnectionScreenParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connection::DisconnectFailReason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

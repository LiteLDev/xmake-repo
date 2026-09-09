#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/GameConnectionReason.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

struct GameConnectionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mConnected;
    ::ll::TypedStorage<4, 4, ::GameConnectionReason>             mReason;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason> mDiscoReason;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectionStage>   mDisconnectStage;
    ::ll::TypedStorage<8, 24, std::string>                       mMessageFromServer;
    ::ll::TypedStorage<8, 24, std::string>                       mMessageBodyOverride;
    ::ll::TypedStorage<8, 24, std::string>                       mTelemetryOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionEvent(::GameConnectionEvent const&);

    MCNAPI GameConnectionEvent(
        bool,
        ::GameConnectionReason,
        ::Connection::DisconnectFailReason,
        ::Connection::DisconnectionStage const,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ~GameConnectionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameConnectionEvent const&);

    MCNAPI void* $ctor(
        bool,
        ::GameConnectionReason,
        ::Connection::DisconnectFailReason,
        ::Connection::DisconnectionStage const,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

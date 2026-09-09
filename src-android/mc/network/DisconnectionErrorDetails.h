#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/NetworkConnectionType.h"
#include "mc/events/NetworkType.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectionStage.h"

struct DisconnectionErrorDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     endpoint;
    ::ll::TypedStorage<8, 24, std::string>                     dateTime;
    ::ll::TypedStorage<8, 24, std::string>                     version;
    ::ll::TypedStorage<8, 24, std::string>                     connectionGuid;
    ::ll::TypedStorage<8, 24, std::string>                     worldSession;
    ::ll::TypedStorage<8, 24, std::string>                     clientId;
    ::ll::TypedStorage<8, 24, std::string>                     serverName;
    ::ll::TypedStorage<8, 24, std::string>                     worldName;
    ::ll::TypedStorage<8, 24, std::string>                     signinId;
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectionStage> actualStage;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                 transportLayer;
    ::ll::TypedStorage<4, 4, ::NetworkType>                    networkType;
    ::ll::TypedStorage<1, 1, ::NetworkConnectionType>          mediumType;
    ::ll::TypedStorage<1, 1, bool>                             isEduGame;
    ::ll::TypedStorage<1, 1, bool>                             isConnectedToApplication;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DisconnectionErrorDetails();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getNameForDisconnectionStage(::Connection::DisconnectionStage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

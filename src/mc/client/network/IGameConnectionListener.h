#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/GameConnectionReason.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

// auto generated forward declare list
// clang-format off
struct GameConnectionConnector;
struct GameConnectionEvent;
// clang-format on

class IGameConnectionListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IGameConnectionListener() = default;

    virtual void setConnected(::GameConnectionReason const) = 0;

    virtual void setDisconnected(::GameConnectionReason const, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, std::string const&) = 0;

    virtual bool hasConnectionToRemoteServer() const = 0;

    virtual std::optional<GameConnectionEvent> const& getPreviousConnectionEvent() const = 0;

    virtual std::optional<GameConnectionEvent> popNextConnectionEvent() = 0;

    virtual void resetListener() = 0;

    virtual ::GameConnectionConnector getConnectionConnector() = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IGameConnectionListener {};
#endif // @header-generator platform

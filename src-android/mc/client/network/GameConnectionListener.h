#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/GameConnectionEvent.h"
#include "mc/client/network/GameConnectionReason.h"
#include "mc/client/network/IGameConnectionListener.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

// auto generated forward declare list
// clang-format off
struct GameConnectionConnector;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class GameConnectionListener : public ::IGameConnectionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mConnected;
    ::ll::TypedStorage<8, 48, std::deque<GameConnectionEvent>>    mConnectionEvents;
    ::ll::TypedStorage<8, 96, std::optional<GameConnectionEvent>> mPreviousEvent;
    ::ll::UntypedStorage<8, 40>                                   mConnectedPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameConnectionListener();

    virtual void setConnected(::GameConnectionReason const);

    virtual void setDisconnected(::GameConnectionReason const, ::Connection::DisconnectFailReason const, ::Connection::DisconnectionStage const, std::string const&, std::string const&, std::string const&);

    virtual bool hasConnectionToRemoteServer() const;

    virtual std::optional<GameConnectionEvent> const& getPreviousConnectionEvent() const;

    virtual std::optional<GameConnectionEvent> popNextConnectionEvent();

    virtual void resetListener();

    virtual ::GameConnectionConnector getConnectionConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameConnectionListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setConnected(::GameConnectionReason const);

    MCNAPI void $setDisconnected(
        ::GameConnectionReason const,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI bool $hasConnectionToRemoteServer() const;

    MCNAPI std::optional<GameConnectionEvent> const& $getPreviousConnectionEvent() const;

    MCNAPI std::optional<GameConnectionEvent> $popNextConnectionEvent();

    MCNAPI void $resetListener();

    MCNAPI ::GameConnectionConnector $getConnectionConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/ConnectionContextInfo.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftGame;
class NetworkSessionOwner;
struct PlayerJoinWorldContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ConnectionContext {
public:
    // ConnectionContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Disconnected = 0,
        Connecting   = 1,
        Connected    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ConnectionContext::State>             mState;
    ::ll::TypedStorage<1, 1, bool>                                   mSkipNextConResultOrDisconnectEvent;
    ::ll::TypedStorage<8, 160, std::optional<ConnectionContextInfo>> mConnectionContextInfo;
    ::ll::TypedStorage<2, 2, ushort>                                 mJoinAttemptCounter;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                     mClient;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                      mMinecraftGame;
    ::ll::UntypedStorage<8, 24>                                      mNetworkSessionOwner;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mMultiplayerSummaryObserver;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionContext& operator=(ConnectionContext const&);
    ConnectionContext(ConnectionContext const&);
    ConnectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _fireCleanCancelOrDisconnectIfNeeded(bool, bool);

    MCNAPI void _fireMissingEventDetected(std::string);

    MCNAPI void _firePlayerJoinWorldStateUpdate(
        ::IConnectionEventing::PlayerJoinWorldAttemptState,
        ::Connection::DisconnectFailReason,
        bool,
        bool,
        std::string,
        std::string,
        std::string
    );

    MCNAPI void onConnecting(
        bool,
        bool,
        std::string const&&,
        std::string const&&,
        std::string const&&,
        ::NetworkType,
        ::Social::MultiplayerServiceIdentifier,
        ::PlayerJoinWorldContext
    );

    MCNAPI void onConnectingResultCanceled(bool, bool);

    MCNAPI void onDisconnected(
        bool,
        bool,
        ::Connection::DisconnectFailReason,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ~ConnectionContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class State : int {};
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ClientOrServerNetworkSystemRef;
class EntityContext;
class Level;
class LoopbackPacketSender;
class NetEventCallback;
class ServerNetworkHandler;
class ServerNetworkSystem;
// clang-format on

class GameSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                     mNetwork;
    ::ll::UntypedStorage<1, 32>                                     mLevelEntity;
    ::ll::UntypedStorage<8, 24>                                     mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerNetworkHandler>> mServerNetworkHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetEventCallback>>     mLegacyClientNetworkHandler;
    ::ll::TypedStorage<8, 8, ::LoopbackPacketSender&>               mLoopbackPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                         mClientSubId;
    // NOLINTEND

public:
    // prevent constructor by default
    GameSession& operator=(GameSession const&);
    GameSession(GameSession const&);
    GameSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    GameSession(::ClientNetworkSystem&, std::unique_ptr<NetEventCallback>, ::LoopbackPacketSender&, ::SubClientId);

    MCNAPI GameSession(
        ::ServerNetworkSystem&,
        std::unique_ptr<ServerNetworkHandler>,
        ::LoopbackPacketSender&,
        std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>,
        ::SubClientId
    );

    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback();

    MCNAPI bool isLeaveGameDone();

    MCNAPI void setLevel(std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>);

    MCNAPI void startLeaveGame();

    MCNAPI void tick();

    MCNAPI ~GameSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ClientNetworkSystem&, std::unique_ptr<NetEventCallback>, ::LoopbackPacketSender&, ::SubClientId);

    MCNAPI void* $ctor(
        ::ServerNetworkSystem&,
        std::unique_ptr<ServerNetworkHandler>,
        ::LoopbackPacketSender&,
        std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>,
        ::SubClientId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
#if defined(LL_PLAT_A) // @header-generator platform
class ClientOrServerNetworkSystemRef;
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                     mNetwork;
    ::ll::UntypedStorage<1, 32>                                     mLevelEntity;
    ::ll::UntypedStorage<8, 24>                                     mLevel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerNetworkHandler>> mServerNetworkHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NetEventCallback>>     mLegacyClientNetworkHandler;
    ::ll::TypedStorage<8, 8, ::LoopbackPacketSender&>               mLoopbackPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                         mClientSubId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>         mNetwork;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityContext>>              mLevelEntity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Level>>      mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkHandler>> mServerNetworkHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetEventCallback>>     mLegacyClientNetworkHandler;
    ::ll::TypedStorage<8, 8, ::LoopbackPacketSender&>                   mLoopbackPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                             mClientSubId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameSession& operator=(GameSession const&);
    GameSession(GameSession const&);
    GameSession();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    GameSession(::ClientNetworkSystem&, std::unique_ptr<NetEventCallback>, ::LoopbackPacketSender&, ::SubClientId);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI GameSession(
        ::ClientNetworkSystem&                network,
        ::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler,
        ::LoopbackPacketSender&               loopbackPacketSender,
        ::SubClientId                         subid
    );

    MCAPI GameSession(
        ::ServerNetworkSystem&                                               network,
        ::std::unique_ptr<::ServerNetworkHandler>                            serverNetworkHandler,
        ::LoopbackPacketSender&                                              loopbackPacketSender,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::SubClientId                                                        subid
    );

    MCAPI ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback();

    MCAPI void setLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameSession(
        ::ServerNetworkSystem&,
        std::unique_ptr<ServerNetworkHandler>,
        ::LoopbackPacketSender&,
        std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>,
        ::SubClientId
    );
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void earlyShutdownMainthread();

    MCNAPI ::Bedrock::NonOwnerPointer<NetEventCallback> getNetEventCallback();

    MCNAPI bool isLeaveGameDone();

    MCNAPI void setLevel(std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>);

    MCNAPI void startLeaveGame();

    MCNAPI void tick();

    MCNAPI ~GameSession();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~GameSession();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::ClientNetworkSystem&, std::unique_ptr<NetEventCallback>, ::LoopbackPacketSender&, ::SubClientId);

    MCNAPI void* $ctor(
        ::ServerNetworkSystem&,
        std::unique_ptr<ServerNetworkHandler>,
        ::LoopbackPacketSender&,
        std::pair<std::unique_ptr<Level>, OwnerPtr<EntityContext>>,
        ::SubClientId
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ClientNetworkSystem&                network,
        ::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler,
        ::LoopbackPacketSender&               loopbackPacketSender,
        ::SubClientId                         subid
    );

    MCAPI void* $ctor(
        ::ServerNetworkSystem&                                               network,
        ::std::unique_ptr<::ServerNetworkHandler>                            serverNetworkHandler,
        ::LoopbackPacketSender&                                              loopbackPacketSender,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::SubClientId                                                        subid
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

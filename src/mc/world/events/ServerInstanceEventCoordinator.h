#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ServerInstanceEventListener.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
class Minecraft;
class ServerInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ServerInstanceEventHandler;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ServerInstanceEventListener;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ServerInstanceEventCoordinator : public ::EventCoordinator<ServerInstanceEventListener> {
#else // @header-generator platform
class ServerInstanceEventCoordinator : public ::EventCoordinator<::ServerInstanceEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ServerInstanceEventHandler>> mServerInstanceEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerServerInstanceEventHandler(std::unique_ptr<ServerInstanceEventHandler>&&);

    MCNAPI void sendEvent(::EventRef<ServerInstanceGameplayEvent<void>> const&);

    MCNAPI void sendServerInitializeEnd(::ServerInstance&);

    MCNAPI void sendServerInitializeStart(::ServerInstance&);

    MCNAPI void sendServerLevelInitialized(::ServerInstance&, ::Level&);

    MCNAPI void
    sendServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);

    MCNAPI void sendServerResume(::ServerInstance&);

    MCNAPI void sendServerSuspend(::ServerInstance&);

    MCNAPI void sendServerThreadStarted(::ServerInstance&);

    MCNAPI void sendServerThreadStopped(::ServerInstance&);

    MCNAPI void sendServerUpdateEnd(::ServerInstance&);

    MCNAPI void sendServerUpdateStart(::ServerInstance&);

    MCNAPI void sendStartLeaveGame(::ServerInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerInstanceEventHandler>> mServerInstanceEventHandler;
#endif // @header-generator platform
    // NOLINTEND
};

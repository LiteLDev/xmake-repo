#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
class ServerInstance;
struct ServerInstanceNotificationEvent;
// clang-format on

class ServerInstanceEventListener {
public:
    // ServerInstanceEventListener inner types define
    using EventType = ::ServerInstanceNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServerInstanceEventListener() = default;

    virtual ::EventResult onServerInitializeStart(::ServerInstance&);

    virtual ::EventResult onServerInitializeEnd(::ServerInstance&);

    virtual ::EventResult onServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);

    virtual ::EventResult onServerLevelInitialized(::ServerInstance&, ::Level&);

    virtual ::EventResult onServerUpdateStart(::ServerInstance&);

    virtual ::EventResult onServerUpdateEnd(::ServerInstance&);

    virtual ::EventResult onServerSuspend(::ServerInstance&);

    virtual ::EventResult onServerResume(::ServerInstance&);

    virtual ::EventResult onServerThreadStarted(::ServerInstance&);

    virtual ::EventResult onServerThreadStopped(::ServerInstance&);

    virtual ::EventResult onStartLeaveGame(::ServerInstance&);

    virtual ::EventResult onEvent(::ServerInstanceNotificationEvent const&);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance&);

    MCNAPI ::EventResult $onServerInitializeEnd(::ServerInstance&);

    MCNAPI ::EventResult
    $onServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);

    MCNAPI ::EventResult $onServerLevelInitialized(::ServerInstance&, ::Level&);

    MCNAPI ::EventResult $onServerUpdateStart(::ServerInstance&);

    MCNAPI ::EventResult $onServerUpdateEnd(::ServerInstance&);

    MCNAPI ::EventResult $onServerSuspend(::ServerInstance&);

    MCNAPI ::EventResult $onServerResume(::ServerInstance&);

    MCNAPI ::EventResult $onServerThreadStarted(::ServerInstance&);

    MCNAPI ::EventResult $onServerThreadStopped(::ServerInstance&);

    MCNAPI ::EventResult $onStartLeaveGame(::ServerInstance&);
    // NOLINTEND
};

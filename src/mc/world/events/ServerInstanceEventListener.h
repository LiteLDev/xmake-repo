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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ServerInstanceEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerInitializeStart(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerInitializeStart(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerInitializeEnd(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerInitializeEnd(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);
#else // @header-generator platform
    virtual ::EventResult onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerLevelInitialized(::ServerInstance&, ::Level&);
#else // @header-generator platform
    virtual ::EventResult onServerLevelInitialized(::ServerInstance& instance, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerUpdateStart(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerUpdateStart(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerUpdateEnd(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerUpdateEnd(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerSuspend(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerSuspend(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerResume(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerResume(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerThreadStarted(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerThreadStarted(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerThreadStopped(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onServerThreadStopped(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onStartLeaveGame(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onStartLeaveGame(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceNotificationEvent const&);
    // clang-format on
#else // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceNotificationEvent const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerInitializeStart(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerInitializeEnd(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerInitializeEnd(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult
    $onServerMinecraftInitialized(::ServerInstance&, ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerLevelInitialized(::ServerInstance&, ::Level&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerLevelInitialized(::ServerInstance& instance, ::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerUpdateStart(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerUpdateStart(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerUpdateEnd(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerUpdateEnd(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerSuspend(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerSuspend(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerResume(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerResume(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerThreadStarted(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerThreadStarted(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerThreadStopped(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onServerThreadStopped(::ServerInstance& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onStartLeaveGame(::ServerInstance&);
#else // @header-generator platform
    MCFOLD ::EventResult $onStartLeaveGame(::ServerInstance& instance);

    MCFOLD ::EventResult $onEvent(::ServerInstanceNotificationEvent const& event);


#endif // @header-generator platform
    // NOLINTEND
};

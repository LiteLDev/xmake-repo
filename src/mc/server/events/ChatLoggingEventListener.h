#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"
#include "mc/world/events/ServerInstanceEventListener.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerInstance;
struct ChatEvent;
struct PlayerMeCommandEvent;
struct PlayerSayCommandEvent;
struct PlayerTellCommandEvent;
struct PlayerTellRawCommandEvent;
struct PlayerTitleCommandEvent;
struct PlayerTitleRawCommandEvent;
struct ServerInstanceLeaveGameDoneEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ChatLoggingEventListener : public ::EventListenerDispatcher<ServerInstanceEventListener>,
                                 public ::EventListenerDispatcher<ServerNetworkEventListener>,
                                 public ::EventListenerDispatcher<PlayerEventListener>,
                                 public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
class ChatLoggingEventListener : public ::EventListenerDispatcher<::ServerInstanceEventListener>,
                                 public ::EventListenerDispatcher<::ServerNetworkEventListener>,
                                 public ::EventListenerDispatcher<::PlayerEventListener>,
                                 public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>             mLogFilePath;
    ::ll::UntypedStorage<8, 304>            mLogFile;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 16>             mPreviousFileWriteTask;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mLogFilePath;
    ::ll::TypedStorage<8, 296, ::Core::OutputFileStream>         mLogFile;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mPreviousFileWriteTask;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChatLoggingEventListener();
#else // @header-generator platform
    virtual ~ChatLoggingEventListener() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onServerInitializeStart(::ServerInstance&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ChatEvent const& chatEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTitleRawCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceLeaveGameDoneEvent const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTitleCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerMeCommandEvent const& meEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTellRawCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerSayCommandEvent const& sayEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTellCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTellCommandEvent const& tellEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerSayCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTellRawCommandEvent const& tellRawEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerMeCommandEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTitleCommandEvent const& titleEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ChatEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerTitleRawCommandEvent const& titleRawEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ServerInstanceLeaveGameDoneEvent const&);
#else // @header-generator platform
    virtual ::EventResult onServerInitializeStart(::ServerInstance& instance) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatLoggingEventListener();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _write(std::string const&, bool);
#else // @header-generator platform
    MCNAPI void _write(::std::string const& message, bool includeTime);
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance&);

    MCNAPI ::EventResult $onEvent(::PlayerTitleRawCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTitleCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTellRawCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTellCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerSayCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerMeCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::ChatEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ChatEvent const& chatEvent);
#endif // @header-generator platform

    MCNAPI ::EventResult $onEvent(::ServerInstanceLeaveGameDoneEvent const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerMeCommandEvent const& meEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerSayCommandEvent const& sayEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerTellCommandEvent const& tellEvent);

    MCNAPI ::EventResult $onEvent(::PlayerTellRawCommandEvent const& tellRawEvent);

    MCNAPI ::EventResult $onEvent(::PlayerTitleCommandEvent const& titleEvent);

    MCNAPI ::EventResult $onEvent(::PlayerTitleRawCommandEvent const& titleRawEvent);

    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance& instance);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player& player);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player& player);


#endif // @header-generator platform
    // NOLINTEND
};

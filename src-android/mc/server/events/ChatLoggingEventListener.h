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

class ChatLoggingEventListener : public ::EventListenerDispatcher<ServerInstanceEventListener>,
                                 public ::EventListenerDispatcher<ServerNetworkEventListener>,
                                 public ::EventListenerDispatcher<PlayerEventListener>,
                                 public ::EventListenerDispatcher<LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             mLogFilePath;
    ::ll::UntypedStorage<8, 304>            mLogFile;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 16>             mPreviousFileWriteTask;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatLoggingEventListener();

    virtual ::EventResult onServerInitializeStart(::ServerInstance&);

    virtual ::EventResult onEvent(::PlayerTitleRawCommandEvent const&);

    virtual ::EventResult onEvent(::PlayerTitleCommandEvent const&);

    virtual ::EventResult onEvent(::PlayerTellRawCommandEvent const&);

    virtual ::EventResult onEvent(::PlayerTellCommandEvent const&);

    virtual ::EventResult onEvent(::PlayerSayCommandEvent const&);

    virtual ::EventResult onEvent(::PlayerMeCommandEvent const&);

    virtual ::EventResult onEvent(::ChatEvent const&);

    virtual ::EventResult onEvent(::ServerInstanceLeaveGameDoneEvent const&);

    virtual ::EventResult onLevelAddedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedPlayer(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatLoggingEventListener();

    MCNAPI void _write(std::string const&, bool);
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
    MCNAPI ::EventResult $onServerInitializeStart(::ServerInstance&);

    MCNAPI ::EventResult $onEvent(::PlayerTitleRawCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTitleCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTellRawCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerTellCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerSayCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::PlayerMeCommandEvent const&);

    MCNAPI ::EventResult $onEvent(::ChatEvent const&);

    MCNAPI ::EventResult $onEvent(::ServerInstanceLeaveGameDoneEvent const&);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

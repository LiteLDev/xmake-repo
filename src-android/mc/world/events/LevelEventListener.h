#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelNotificationEvent;
// clang-format on

class LevelEventListener {
public:
    // LevelEventListener inner types define
    using EventType = ::LevelNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelEventListener();

    virtual ::EventResult onLevelInitialized(::Level&);

    virtual ::EventResult onLevelAddedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedPlayer(::Player&);

    virtual ::EventResult onLevelRemovedActor(::Actor&);

    virtual ::EventResult onLevelTick(::Level&);

    virtual ::EventResult onLevelTickStart(::Level&);

    virtual ::EventResult onLevelTickEnd(::Level&);

    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    virtual ::EventResult onRealmsStory(std::string const&);

    virtual ::EventResult onEvent(::LevelNotificationEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelInitialized(::Level&);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);

    MCNAPI ::EventResult $onLevelRemovedActor(::Actor&);

    MCNAPI ::EventResult $onLevelTick(::Level&);

    MCNAPI ::EventResult $onLevelTickStart(::Level&);

    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI ::EventResult $onLevelWeatherChange(std::string const&, bool, bool, bool, bool);

    MCNAPI ::EventResult $onRealmsStory(std::string const&);

    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const&);
    // NOLINTEND
};

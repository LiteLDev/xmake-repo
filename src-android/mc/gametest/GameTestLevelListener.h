#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
struct LevelNotificationEvent;
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestLevelListener : public ::LevelEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::GameTestTicker&> mTestTicker;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const&);
    GameTestLevelListener(GameTestLevelListener const&);
    GameTestLevelListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestLevelListener();

    virtual ::EventResult onLevelTickEnd(::Level&);

    virtual ::EventResult onEvent(::LevelNotificationEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameTestLevelListener(::gametest::GameTestTicker&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gametest::GameTestTicker&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

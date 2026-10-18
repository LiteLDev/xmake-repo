#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class Level;
struct LevelNotificationEvent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class GameTestTicker; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameTestLevelListener : public ::LevelEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gametest::GameTestTicker&> mTestTicker;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk66625a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const&);
    GameTestLevelListener(GameTestLevelListener const&);
    GameTestLevelListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameTestLevelListener();
#else // @header-generator platform
    virtual ::EventResult onLevelTickEnd(::Level&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::EventResult onEvent(::LevelNotificationEvent const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onLevelTickEnd(::Level&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const& event);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

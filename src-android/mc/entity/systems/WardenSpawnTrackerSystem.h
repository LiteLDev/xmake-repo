#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class Player;
// clang-format on

class WardenSpawnTrackerSystem : public ::ITickingSystem, public ::LevelEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WardenSpawnTrackerSystem();

    virtual void tick(::EntityRegistry&);

    virtual ::EventResult onLevelAddedPlayer(::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);

    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

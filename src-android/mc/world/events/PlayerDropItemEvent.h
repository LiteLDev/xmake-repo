#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerDropItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mPlayer;
    ::ll::UntypedStorage<1, 24> mSpawnedItemActor;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDropItemEvent& operator=(PlayerDropItemEvent const&);
    PlayerDropItemEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerDropItemEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

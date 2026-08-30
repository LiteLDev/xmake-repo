#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerUpdateInteractionEvent {
public:
    // PlayerUpdateInteractionEvent inner types define
    enum class ActionType : int {
        ApproachEntity = 0,
        LeaveEntity    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mPlayer;
    ::ll::UntypedStorage<1, 24> mEntity;
    ::ll::UntypedStorage<4, 8>  mAction;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUpdateInteractionEvent& operator=(PlayerUpdateInteractionEvent const&);
    PlayerUpdateInteractionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerUpdateInteractionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

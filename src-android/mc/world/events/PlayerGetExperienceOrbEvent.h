#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerGetExperienceOrbEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mPlayer;
    ::ll::UntypedStorage<4, 8>  mExperienceValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerGetExperienceOrbEvent& operator=(PlayerGetExperienceOrbEvent const&);
    PlayerGetExperienceOrbEvent();
};

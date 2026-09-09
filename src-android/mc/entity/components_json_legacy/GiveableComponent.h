#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
// clang-format on

class GiveableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mCooldownTimeStamps;
    // NOLINTEND

public:
    // prevent constructor by default
    GiveableComponent& operator=(GiveableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);
    // NOLINTEND
};

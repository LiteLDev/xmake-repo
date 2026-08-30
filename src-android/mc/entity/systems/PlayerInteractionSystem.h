#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class Player;
// clang-format on

class PlayerInteractionSystem {
public:
    // PlayerInteractionSystem inner types declare
    // clang-format off
    struct InteractionMappingBase;
    // clang-format on

    // PlayerInteractionSystem inner types define
    struct InteractionMappingBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~InteractionMappingBase();

        virtual ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<PlayerInteractionSystem::InteractionMappingBase>>> mInteractionMappings;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractionSystem& operator=(PlayerInteractionSystem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&) const;

    MCNAPI ~PlayerInteractionSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

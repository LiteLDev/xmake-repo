#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
class NameableDefinition;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class NameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAllowNameTagRenaming;
    ::ll::TypedStorage<1, 1, bool> mAlwaysShow;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NameableComponent();

    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void nameEntity(::Actor&, ::Bedrock::Safety::RedactableString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

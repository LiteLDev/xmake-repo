#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class InteractionResult;
#if defined(LL_PLAT_A) // @header-generator platform
class NameableDefinition;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NameableComponent();
#else // @header-generator platform
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult getInteraction(::Actor&, ::Player&, ::ActorInteraction&);

    MCNAPI void nameEntity(::Actor&, ::Bedrock::Safety::RedactableString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void nameEntity(::Actor& owner, ::Bedrock::Safety::RedactableString const& name);
#endif // @header-generator platform
    // NOLINTEND
};

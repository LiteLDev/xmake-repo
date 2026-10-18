#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class Ocelot : public ::Animal {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    Ocelot();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Ocelot();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Ocelot(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& SNEAK_SPEED_MOD();

    MCNAPI static float const& SPRINT_SPEED_MOD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

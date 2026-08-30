#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Piglin.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class PiglinBrute : public ::Piglin {
public:
    // prevent constructor by default
    PiglinBrute();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PiglinBrute();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PiglinBrute(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

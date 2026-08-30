#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Boat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class ChestBoat : public ::Boat {
public:
    // prevent constructor by default
    ChestBoat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBoat();

    virtual std::string getEntityLocNameString() const;

    virtual void kill();

    virtual void destroy(::Actor*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestBoat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _dropChestContents(::Vec3 const&);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getEntityLocNameString() const;

    MCNAPI void $kill();

    MCNAPI void $destroy(::Actor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

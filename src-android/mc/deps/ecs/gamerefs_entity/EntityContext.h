#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
// clang-format on

class EntityContext : public ::EnableGetWeakRef<EntityContext> {
public:
    // EntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // EntityContext inner types define
    struct Hash {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong operator()(::EntityContext const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                                           mRegistry;
    ::ll::TypedStorage<8, 8, ::entt::basic_registry<EntityId, std::allocator<EntityId>>&> mEnTTRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId const>                                            mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityContext(::EntityRegistry&, ::StrictEntityContext const&);

    MCNAPI ::EntityId _getEntityId() const;

    MCNAPI ::EntityRegistry& _registry() const;

    MCNAPI ::WeakRef<EntityContext> getWeakRef() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::EntityContext const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityRegistry&, ::StrictEntityContext const&);
    // NOLINTEND
};

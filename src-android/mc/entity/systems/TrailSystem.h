#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityRegistry;
class Vec3;
struct TrailComponent;
// clang-format on

class TrailSystem : public ::ITickingSystem {
public:
    // TrailSystem inner types declare
    // clang-format off
    struct BlockPositions;
    // clang-format on

    // TrailSystem inner types define
    struct BlockPositions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 48, ::BlockPos[4]> mBlockPos;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrailSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickComponent(::ActorOwnerComponent&, ::TrailComponent&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

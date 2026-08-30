#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Silverfish : public ::Monster {
public:
    // prevent constructor by default
    Silverfish();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Silverfish();

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual void spawnAnim();

    virtual bool checkSpawnRules(bool);

    virtual float _getWalkTargetValue(::BlockPos const&);

    virtual bool isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Silverfish(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI void $spawnAnim();

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);

    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Bee : public ::Animal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mNormalLoop;
    ::ll::TypedStorage<8, 8, ulong> mAggressiveLoop;
    ::ll::TypedStorage<4, 4, float> mLoopSoundSpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    Bee();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Bee();

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void onSynchedDataUpdate(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Bee(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _registerLoopingSounds();

    MCNAPI void postNormalTick();
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
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $onSynchedDataUpdate(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

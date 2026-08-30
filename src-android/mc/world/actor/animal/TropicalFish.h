#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class TropicalFish : public ::WaterAnimal {
public:
    // prevent constructor by default
    TropicalFish();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TropicalFish();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool startRiding(::Actor&, bool);

    virtual void onSynchedDataUpdate(int);

    virtual bool createAIGoals();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TropicalFish(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI bool $startRiding(::Actor&, bool);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI bool $createAIGoals();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

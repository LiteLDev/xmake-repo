#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/animal/WaterAnimal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Dolphin : public ::WaterAnimal {
public:
    // prevent constructor by default
    Dolphin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Dolphin();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool canBePulledIntoVehicle() const;

    virtual bool createAIGoals();

    virtual float _getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Dolphin(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $createAIGoals();

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

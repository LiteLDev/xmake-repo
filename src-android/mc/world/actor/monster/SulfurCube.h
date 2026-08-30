#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Slime.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class SulfurCube : public ::Slime {
public:
    // prevent constructor by default
    SulfurCube();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SulfurCube();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool canFreeze() const;

    virtual bool canBePulledIntoVehicle() const;

    virtual bool checkSpawnRules(bool);

    virtual bool isDarkEnoughToSpawn() const;

    virtual bool _shouldSquish() const;

    virtual bool _shouldPlayJumpSound() const;

    virtual bool _shouldPlayLandSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SulfurCube(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI bool $canFreeze() const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI bool $isDarkEnoughToSpawn() const;

    MCNAPI bool $_shouldSquish() const;

    MCNAPI bool $_shouldPlayJumpSound() const;

    MCNAPI bool $_shouldPlayLandSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

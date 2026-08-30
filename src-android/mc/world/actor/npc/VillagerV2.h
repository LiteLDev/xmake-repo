#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/npc/VillagerBase.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorInteraction;
class DwellerComponent;
class EntityContext;
class InteractionResult;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class VillagerV2 : public ::VillagerBase {
public:
    // prevent constructor by default
    VillagerV2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillagerV2();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void remove();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual void buildDebugInfo(std::string&) const;

    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    virtual void die(::ActorDamageSource const&);

    virtual void newServerAiStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VillagerV2(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _fixupVillagerProfessionSkinIfNeeded(::DwellerComponent const&);
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

    MCNAPI void $remove();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI void $buildDebugInfo(std::string&) const;

    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI void $newServerAiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

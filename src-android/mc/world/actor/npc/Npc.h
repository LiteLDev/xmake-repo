#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct KnockbackParameters;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Npc : public ::Mob {
public:
    // prevent constructor by default
    Npc();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Npc();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool canShowNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual bool isTargetable() const;

    virtual bool canBePulledIntoVehicle() const;

    virtual void buildDebugInfo(std::string&) const;

    virtual bool canBeAffected(uint) const;

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    virtual bool canExistWhenDisallowMob() const;

    virtual void newServerAiStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Npc(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& SKIN_ID_TAG();

    MCNAPI static std::vector<std::pair<std::string, std::string>> const& Skins();
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

    MCNAPI bool $canShowNameTag() const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI void $buildDebugInfo(std::string&) const;

    MCNAPI bool $canBeAffected(uint) const;

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $knockback(::Actor*, float, float, float, ::KnockbackParameters const&);

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI void $newServerAiStep();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/monster/HumanoidMonster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class WitherBoss;
struct ActorDefinitionIdentifier;
// clang-format on

class Skeleton : public ::HumanoidMonster {
public:
    // Skeleton inner types define
    enum SkeletonType : uint {
        DEFAULT = 0,
        WITHER  = 1,
        STRAY   = 2,
        BOGGED  = 3,
        PARCHED = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WitherBoss*> mParentWither;
    // NOLINTEND

public:
    // prevent constructor by default
    Skeleton();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Skeleton();

    virtual void normalTick();

    virtual void setTarget(::Actor*);

    virtual bool canFreeze() const;

    virtual bool canBeAffected(uint) const;

    virtual void getDebugText(std::vector<std::string>&);

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Skeleton(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void setWitherParent(::WitherBoss*);
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
    MCNAPI void $normalTick();

    MCNAPI void $setTarget(::Actor*);

    MCNAPI bool $canFreeze() const;

    MCNAPI bool $canBeAffected(uint) const;

    MCNAPI void $getDebugText(std::vector<std::string>&);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor*, ::SharedTypes::Legacy::ActorDamageCause const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

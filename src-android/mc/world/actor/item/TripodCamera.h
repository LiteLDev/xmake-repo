#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class Player;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class TripodCamera : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<1, 1, bool>             mActivated;
    ::ll::TypedStorage<4, 4, int>              mCountdown;
    // NOLINTEND

public:
    // prevent constructor by default
    TripodCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TripodCamera();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void remove();

    virtual float getShadowRadius() const;

    virtual bool isTargetable() const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual bool canExistWhenDisallowMob() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TripodCamera(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI int getCountdown() const;

    MCNAPI bool interactWithPlayer(::Player&);

    MCNAPI bool isActivated() const;

    MCNAPI void startTakingPicture(::Player&);
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

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI bool $canExistWhenDisallowMob() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

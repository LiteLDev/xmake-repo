#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/actor/animal/HorseFlags.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class Player;
class Vec2;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataHorseFlagComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct VariantParameterList;
// clang-format on

class Horse : public ::Animal {
public:
    // prevent constructor by default
    Horse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Horse();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual float getShadowRadius() const;

    virtual bool isImmobile() const;

    virtual void onFailedTame();

    virtual void setStanding(bool);

    virtual void feed(int);

    virtual bool canFreeze() const;

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int);

    virtual void openContainerComponent(::Player&);

    virtual void die(::ActorDamageSource const&);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void setHorseEating(bool);

    virtual float getStandAnim(float) const;

    virtual bool isHorseEating() const;

    virtual bool isMouthOpen() const;

    virtual void makeMad();

    virtual bool tameToPlayer(::Player&, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Horse(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _setHorseFlag(::HorseFlags, bool);

    MCNAPI void openMouth();

    MCNAPI void postAiStep();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3
    getInterpolatedRidingOffset(::RenderRotationComponent const&, ::StandAnimationComponent const&, float);

    MCNAPI static ::Vec3 getNewPassengerPos(
        ::RenderPositionComponent const&,
        ::RenderRotationComponent const&,
        ::StandAnimationComponent const&,
        float,
        float
    );

    MCNAPI static void
    setHorseFlag(::ActorDataHorseFlagComponent&, ::ActorDataDirtyFlagsComponent&, ::HorseFlags, bool);
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

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isImmobile() const;

    MCNAPI void $onFailedTame();

    MCNAPI void $setStanding(bool);

    MCNAPI void $feed(int);

    MCNAPI bool $canFreeze() const;

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI void $openContainerComponent(::Player&);

    MCNAPI void $die(::ActorDamageSource const&);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $setHorseEating(bool);

    MCNAPI float $getStandAnim(float) const;

    MCNAPI bool $isHorseEating() const;

    MCNAPI bool $isMouthOpen() const;

    MCNAPI void $makeMad();

    MCNAPI bool $tameToPlayer(::Player&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

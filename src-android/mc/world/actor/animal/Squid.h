#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Squid : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mInkColor;
    ::ll::TypedStorage<4, 4, float>         mSpeed;
    ::ll::TypedStorage<4, 4, float>         mTentacleSpeed;
    ::ll::TypedStorage<4, 4, float>         mRotateSpeed;
    ::ll::TypedStorage<4, 4, float>         mXBodyRot;
    ::ll::TypedStorage<4, 4, float>         mXBodyRotO;
    ::ll::TypedStorage<4, 4, float>         mZBodyRot;
    ::ll::TypedStorage<4, 4, float>         mZBodyRotO;
    ::ll::TypedStorage<4, 4, float>         mTx;
    ::ll::TypedStorage<4, 4, float>         mTy;
    ::ll::TypedStorage<4, 4, float>         mTz;
    ::ll::TypedStorage<4, 4, float>         mTentacleMovement;
    ::ll::TypedStorage<4, 4, float>         mOldTentacleMovement;
    ::ll::TypedStorage<4, 4, float>         mTentacleAngle;
    ::ll::TypedStorage<4, 4, float>         mOldTentacleAngle;
    // NOLINTEND

public:
    // prevent constructor by default
    Squid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Squid();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual bool checkSpawnRules(bool);

    virtual bool checkSpawnObstruction() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Squid(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::mce::Color const&);

    MCNAPI ::Vec3 _randomInkDir();

    MCNAPI float getTentacleAngle() const;

    MCNAPI float getTy();

    MCNAPI float getZBodyRot() const;

    MCNAPI void postAiStep();

    MCNAPI void setTx(float);

    MCNAPI void setTy(float);

    MCNAPI void setTz(float);

    MCNAPI void spawnInkParticles();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::mce::Color const&);
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

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI bool $checkSpawnObstruction() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

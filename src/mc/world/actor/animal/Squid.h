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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Squid();
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual bool checkSpawnObstruction() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual bool checkSpawnRules(bool);

    virtual bool checkSpawnObstruction() const;
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform

    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Squid(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::mce::Color const&);
#else // @header-generator platform
    MCAPI Squid(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 _randomInkDir();
#else // @header-generator platform
    MCAPI ::Vec3 _randomInkDir();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getTentacleAngle() const;
#else // @header-generator platform
    MCAPI void postAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getTy();

    MCNAPI float getZBodyRot() const;

    MCNAPI void postAiStep();

    MCNAPI void setTx(float);

    MCNAPI void setTy(float);

    MCNAPI void setTz(float);

    MCNAPI void spawnInkParticles();
#else // @header-generator platform
    MCAPI void spawnInkParticles();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::mce::Color const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::mce::Color const&                inkParticleColor
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent id, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCFOLD bool $checkSpawnObstruction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnObstruction() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;
#else // @header-generator platform
    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

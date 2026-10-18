#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Mob;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Guardian : public ::Monster {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // Guardian inner types define
    using DataFlagIdType = schar;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    ATTACK_SOUND;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  ATTACK_SOUND;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>           ELDER_SIZE_SCALE;
    ::ll::TypedStorage<4, 4, int>             FLAG_MOVING;
    ::ll::TypedStorage<4, 4, int>             FLAG_ELDER;
    ::ll::TypedStorage<4, 12, ::Vec3>         startPos;
    ::ll::TypedStorage<8, 8, ::Mob*>          clientSideCachedAttackTarget;
    ::ll::TypedStorage<4, 4, int>             clientSideAttackTime;
    ::ll::TypedStorage<1, 1, bool>            clientSideTouchedGround;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttackTargetId;
    ::ll::TypedStorage<1, 1, bool>            mElderGhost;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>           mLaserLoop;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>          mLaserLoop;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEyeTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    Guardian();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Guardian();
#else // @header-generator platform
    virtual ~Guardian() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTarget(::Actor*);
#else // @header-generator platform
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual void setTarget(::Actor* target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual float getMaxHeadXRot() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkSpawnRules(bool);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getMaxHeadXRot();
#else // @header-generator platform
    virtual bool isDarkEnoughToSpawn() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDarkEnoughToSpawn() const;
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Guardian(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Guardian(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAttackAnimationScale(float);
#else // @header-generator platform
    MCAPI ::Vec3 getMoveEyeVector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAttackDuration();
#else // @header-generator platform
    MCAPI void preAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 getMoveEyeVector();
#else // @header-generator platform
    MCAPI void registerLoopingSounds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getTargetEntity() const;

    MCNAPI bool isElder() const;

    MCNAPI bool isElderGhost() const;

    MCNAPI void preAiStep();

    MCNAPI void registerLoopingSounds();

    MCNAPI void setAttackTime(int);

    MCNAPI void setElder(bool);

    MCNAPI void setElderGhost();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ATTACK_TIME();

    MCNAPI static int const& FIRST_DAMAGE_TIME();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setElderGhost();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTarget(::Actor*);
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCFOLD void $setTarget(::Actor* target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI float $getMaxHeadXRot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMaxHeadXRot();
#else // @header-generator platform
    MCFOLD bool $isDarkEnoughToSpawn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

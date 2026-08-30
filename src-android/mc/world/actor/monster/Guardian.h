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
class BlockPos;
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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    ATTACK_SOUND;
    ::ll::TypedStorage<4, 4, float>           ELDER_SIZE_SCALE;
    ::ll::TypedStorage<4, 4, int>             FLAG_MOVING;
    ::ll::TypedStorage<4, 4, int>             FLAG_ELDER;
    ::ll::TypedStorage<4, 12, ::Vec3>         startPos;
    ::ll::TypedStorage<8, 8, ::Mob*>          clientSideCachedAttackTarget;
    ::ll::TypedStorage<4, 4, int>             clientSideAttackTime;
    ::ll::TypedStorage<1, 1, bool>            clientSideTouchedGround;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttackTargetId;
    ::ll::TypedStorage<1, 1, bool>            mElderGhost;
    ::ll::TypedStorage<8, 8, ulong>           mLaserLoop;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEyeTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    Guardian();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Guardian();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void setTarget(::Actor*);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual bool checkSpawnRules(bool);

    virtual float getMaxHeadXRot();

    virtual bool isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Guardian(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI float getAttackAnimationScale(float);

    MCNAPI int getAttackDuration();

    MCNAPI ::Vec3 getMoveEyeVector();

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

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $setTarget(::Actor*);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI float $getMaxHeadXRot();

    MCNAPI bool $isDarkEnoughToSpawn() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

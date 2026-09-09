#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class SynchedActorDataReader;
class SynchedActorDataWriter;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct ShulkerBounds;
struct ShulkerBoundsInput;
struct VariantParameterList;
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Shulker();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _doInitialMove();

    virtual float getShadowRadius() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual bool checkSpawnRules(bool);

    virtual float getMaxHeadXRot();

    virtual int getArmorValue() const;

    virtual std::unique_ptr<BodyControl> initBodyControl();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Shulker(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _calculateBB();

    MCNAPI bool _isPosOccupiedByOtherShulker(::BlockPos) const;

    MCNAPI void _peekAmountTick();

    MCNAPI bool _tryAttachingToNeighbouringFaces(::BlockPos);

    MCNAPI bool _trySetNewAttachPosition(::BlockPos);

    MCNAPI bool _tryTeleportSomewhere();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(::SynchedActorDataWriter, ::BlockPos const&);

    MCNAPI static void setShulkerAttachPos(::SynchedActorDataWriter, ::BlockPos const&);
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

    MCNAPI void $_doInitialMove();

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI float $getMaxHeadXRot();

    MCNAPI int $getArmorValue() const;

    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class BlockSource;
class ChunkPos;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class IConstBlockSource;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class HangingActor : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDirection;
    ::ll::TypedStorage<4, 4, int> mTicksToWouldSurviveCheck;
    ::ll::TypedStorage<4, 4, int> mWouldSurviveCheckCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    HangingActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HangingActor();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void normalTick();

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual int getWidth() const = 0;

    virtual int getHeight() const = 0;

    virtual void dropItem() = 0;

    virtual bool placeHangingEntity(::BlockSource&, int);

    virtual bool wouldSurvive(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HangingActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, int);

    MCNAPI bool _blockContainsObstruction(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI bool _blockIsObstruction(::BlockSource const&, ::BlockPos const&) const;

    MCNAPI void _calculateAABB();

    MCNAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const&);

    MCNAPI bool _wouldSurvive(::BlockSource&, ::BlockPos const&, bool);

    MCNAPI int getDirection() const;

    MCNAPI void setDirection(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, int);
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

    MCNAPI void $normalTick();

    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool $placeHangingEntity(::BlockSource&, int);

    MCNAPI bool $wouldSurvive(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

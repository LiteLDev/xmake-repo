#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/level/block/NewBlockID.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class FallingBlock;
class ITickDelegate;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class FallingBlockActor : public ::PredictableProjectile {
public:
    // FallingBlockActor inner types define
    enum class State : int {
        Falling     = 0,
        WaitRemoval = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mCreative;
    ::ll::TypedStorage<4, 4, ::FallingBlockActor::State>   mState;
    ::ll::TypedStorage<4, 4, int>                          mWaitTicks;
    ::ll::TypedStorage<4, 4, int>                          mTime;
    ::ll::TypedStorage<1, 1, bool>                         mCancelDrop;
    ::ll::TypedStorage<1, 1, bool>                         mHurtEntities;
    ::ll::TypedStorage<4, 4, int>                          mFallDamageMax;
    ::ll::TypedStorage<4, 4, float>                        mFallDamageAmount;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mRenderOffset;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mFallingBlockSerId;
    ::ll::UntypedStorage<2, 2>                             mFallingBlockId;
    ::ll::TypedStorage<2, 2, ushort>                       mFallingBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FallingBlockActor();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void normalTick();

    virtual float getShadowRadius() const;

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int);

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FallingBlockActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI bool _isBeingPushedUp(::Block const&, ::BlockSource&, ::BlockPos const) const;

    MCNAPI void breakBlock();

    MCNAPI void doNormalTick(::ITickDelegate&);

    MCNAPI ::Block const& getFallingBlock() const;

    MCNAPI void setFallDamageAmount(float);

    MCNAPI void setFallingBlock(::Block const&, bool);
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

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

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
#if defined(LL_PLAT_A) // @header-generator platform
class FallingBlock;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                             mCreative;
    ::ll::TypedStorage<4, 4, ::FallingBlockActor::State>       mState;
    ::ll::TypedStorage<4, 4, int>                              mWaitTicks;
    ::ll::TypedStorage<4, 4, int>                              mTime;
    ::ll::TypedStorage<1, 1, bool>                             mCancelDrop;
    ::ll::TypedStorage<1, 1, bool>                             mHurtEntities;
    ::ll::TypedStorage<4, 4, int>                              mFallDamageMax;
    ::ll::TypedStorage<4, 4, float>                            mFallDamageAmount;
    ::ll::TypedStorage<4, 12, ::Vec3>                          mRenderOffset;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mFallingBlockSerId;
    ::ll::TypedStorage<2, 2, ::NewBlockID>                     mFallingBlockId;
    ::ll::TypedStorage<2, 2, ushort>                           mFallingBlockData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FallingBlockActor();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    virtual void onSynchedDataUpdate(int dataId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSynchedDataUpdate(int);
#else // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FallingBlockActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI FallingBlockActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isBeingPushedUp(::Block const&, ::BlockSource&, ::BlockPos const) const;
#else // @header-generator platform
    MCAPI bool _isBeingPushedUp(::Block const& pushingBlock, ::BlockSource& region, ::BlockPos const blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void breakBlock();
#else // @header-generator platform
    MCAPI void breakBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void doNormalTick(::ITickDelegate&);
#else // @header-generator platform
    MCAPI void doNormalTick(::ITickDelegate& tickDelegate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getFallingBlock() const;

    MCNAPI void setFallDamageAmount(float);

    MCNAPI void setFallingBlock(::Block const&, bool);
#else // @header-generator platform
    MCAPI void setFallingBlock(::Block const& block, bool creative);
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
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangeDimensionsUsingPortal() const;
#else // @header-generator platform
    MCFOLD void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);
#else // @header-generator platform
    MCAPI bool $canChangeDimensionsUsingPortal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSynchedDataUpdate(int);
#else // @header-generator platform
    MCAPI void $onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
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

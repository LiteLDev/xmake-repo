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
#if defined(LL_PLAT_A) // @header-generator platform
class SynchedActorDataReader;
#else // @header-generator platform
#endif // @header-generator platform
class SynchedActorDataWriter;
struct ActorDefinitionIdentifier;
struct HurtParameters;
#if defined(LL_PLAT_A) // @header-generator platform
struct ShulkerBounds;
struct ShulkerBoundsInput;
#else // @header-generator platform
#endif // @header-generator platform
struct VariantParameterList;
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Shulker();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _doInitialMove();
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool checkSpawnRules(bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual int getArmorValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void _doInitialMove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkSpawnRules(bool);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getMaxHeadXRot();
#else // @header-generator platform
    virtual float getMaxHeadXRot() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getArmorValue() const;

    virtual std::unique_ptr<BodyControl> initBodyControl();
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Shulker(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Shulker(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _calculateBB();
#else // @header-generator platform
    MCAPI void _calculateBB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isPosOccupiedByOtherShulker(::BlockPos) const;
#else // @header-generator platform
    MCAPI bool _isPosOccupiedByOtherShulker(::BlockPos blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _peekAmountTick();
#else // @header-generator platform
    MCAPI void _peekAmountTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryAttachingToNeighbouringFaces(::BlockPos);
#else // @header-generator platform
    MCAPI bool _tryAttachingToNeighbouringFaces(::BlockPos currentPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _trySetNewAttachPosition(::BlockPos);
#else // @header-generator platform
    MCAPI bool _trySetNewAttachPosition(::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryTeleportSomewhere();
#else // @header-generator platform
    MCAPI bool _tryTeleportSomewhere();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postNormalTick();
#else // @header-generator platform
    MCAPI void postNormalTick();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(::SynchedActorDataWriter, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(::SynchedActorDataWriter data, ::BlockPos const& newAttachPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setShulkerAttachPos(::SynchedActorDataWriter, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void setShulkerAttachPos(::SynchedActorDataWriter data, ::BlockPos const& pos);
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
    MCNAPI void $_doInitialMove();
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI int $getArmorValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD void $_doInitialMove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::BodyControl> $initBodyControl();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getMaxHeadXRot();
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getArmorValue() const;
#else // @header-generator platform
    MCAPI float $getMaxHeadXRot();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BodyControl> $initBodyControl();
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

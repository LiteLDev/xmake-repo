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
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HangingActor();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void normalTick();

    virtual float getBrightness(float, ::IConstBlockSource const&) const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

    virtual int getWidth() const = 0;

    virtual int getHeight() const = 0;

    virtual void dropItem() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool placeHangingEntity(::BlockSource&, int);
#else // @header-generator platform
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool wouldSurvive(::BlockSource&);
#else // @header-generator platform
    virtual bool placeHangingEntity(::BlockSource& region, int direction);

    virtual bool wouldSurvive(::BlockSource& region);

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const& source, float, ::HurtParameters const&) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HangingActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, int);
#else // @header-generator platform
    MCAPI HangingActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        int                                wouldSurviveCheckCooldown
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _blockContainsObstruction(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool _blockContainsObstruction(::BlockSource const& region, ::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _blockIsObstruction(::BlockSource const&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool _blockIsObstruction(::BlockSource const& region, ::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _calculateAABB();
#else // @header-generator platform
    MCAPI void _calculateAABB();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const&);
#else // @header-generator platform
    MCAPI void _calculateActorPositionFromPlacementPosition(::BlockPos const& blockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _wouldSurvive(::BlockSource&, ::BlockPos const&, bool);

    MCNAPI int getDirection() const;

    MCNAPI void setDirection(int);
#else // @header-generator platform
    MCAPI bool _wouldSurvive(::BlockSource& region, ::BlockPos const& blockPos, bool beingPlaced);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, int);
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
        int                                wouldSurviveCheckCooldown
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCFOLD bool $placeHangingEntity(::BlockSource& region, int direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBrightness(float, ::IConstBlockSource const&) const;
#else // @header-generator platform
    MCAPI bool $wouldSurvive(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float, ::HurtParameters const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $placeHangingEntity(::BlockSource&, int);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $wouldSurvive(::BlockSource&);
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

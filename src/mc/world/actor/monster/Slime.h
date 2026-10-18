#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class SpawnConditions;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class Slime : public ::Monster {
public:
    // Slime inner types declare
    // clang-format off
    struct Parameters;
    // clang-format on

    // Slime inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ClientEvent : uchar {
#else // @header-generator platform
    enum class ClientEvent : schar {
#endif // @header-generator platform
        None       = 0,
        JustLanded = 1,
        JustJumped = 2,
    };

    struct Parameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>            mBaseChildrenOnDeathCount;
        ::ll::TypedStorage<4, 4, int>            mMaxRandomAdditionalChildren;
        ::ll::TypedStorage<4, 4, int>            mMinSizeToPlayLandSound;
        ::ll::TypedStorage<4, 4, float>          mDecreaseSquishFactor;
        ::ll::TypedStorage<4, 4, ::ParticleType> mLandParticleType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::Slime::Parameters const> mParameters;
    ::ll::TypedStorage<4, 4, float>                      mTargetSquish;
    ::ll::TypedStorage<4, 4, float>                      mSquish;
    ::ll::TypedStorage<4, 4, float>                      mOldSquish;
    // NOLINTEND

public:
    // prevent constructor by default
    Slime();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Slime();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove();
#else // @header-generator platform
    virtual void onSynchedDataUpdate(int dataId) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual void remove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSynchedDataUpdate(int);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual bool checkSpawnRules(bool);

    virtual float _getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    virtual bool checkSpawnRules(bool fromSpawner) /*override*/;
#endif // @header-generator platform

    virtual bool _shouldSquish() const;

    virtual bool _shouldPlayJumpSound() const;

    virtual bool _shouldPlayLandSound() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Slime(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::Slime::Parameters);
#else // @header-generator platform
    MCAPI Slime(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext,
        ::Slime::Parameters                parameters
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _justJumped();
#else // @header-generator platform
    MCAPI void _emitLandParticles();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _justLanded();
#else // @header-generator platform
    MCAPI void _justJumped();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setSlimeSize(int);
#else // @header-generator platform
    MCAPI void _justLanded();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getOldSquishValue() const;
#else // @header-generator platform
    MCAPI void _setSlimeSize(int size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getSquishValue() const;

    MCNAPI void postNormalTick(bool);

    MCNAPI void preNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<bool(const SpawnConditions&, BlockSource&)> getSpawnRulesCallback();
#else // @header-generator platform
    MCAPI void postNormalTick(bool wasOnGround);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::Slime::Parameters);
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
        ::Slime::Parameters                parameters
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
    MCNAPI void $remove();
#else // @header-generator platform
    MCAPI float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCAPI void $onSynchedDataUpdate(int dataId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSynchedDataUpdate(int);
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI bool $checkSpawnRules(bool fromSpawner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD bool $_shouldSquish() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkSpawnRules(bool);
#else // @header-generator platform
    MCAPI bool $_shouldPlayJumpSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
#else // @header-generator platform
    MCAPI bool $_shouldPlayLandSound() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldSquish() const;
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldPlayJumpSound() const;
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_shouldPlayLandSound() const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);
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

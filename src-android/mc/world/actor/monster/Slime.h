#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class SpawnConditions;
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
    enum class ClientEvent : uchar {
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
    virtual ~Slime();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void remove();

    virtual float getShadowRadius() const;

    virtual void onSynchedDataUpdate(int);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual bool checkSpawnRules(bool);

    virtual float _getWalkTargetValue(::BlockPos const&);

    virtual bool _shouldSquish() const;

    virtual bool _shouldPlayJumpSound() const;

    virtual bool _shouldPlayLandSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Slime(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::Slime::Parameters);

    MCNAPI void _justJumped();

    MCNAPI void _justLanded();

    MCNAPI void _setSlimeSize(int);

    MCNAPI float getOldSquishValue() const;

    MCNAPI float getSquishValue() const;

    MCNAPI void postNormalTick(bool);

    MCNAPI void preNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<bool(const SpawnConditions&, BlockSource&)> getSpawnRulesCallback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&, ::Slime::Parameters);
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

    MCNAPI void $remove();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $onSynchedDataUpdate(int);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);

    MCNAPI bool $_shouldSquish() const;

    MCNAPI bool $_shouldPlayJumpSound() const;

    MCNAPI bool $_shouldPlayLandSound() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

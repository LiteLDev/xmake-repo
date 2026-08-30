#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class ExperienceOrb : public ::Actor {
public:
    // ExperienceOrb inner types define
    enum class DropType : uchar {
        NoType     = 0,
        FromBlock  = 1,
        FromMob    = 2,
        FromPlayer = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mFollowingPlayer;
    ::ll::TypedStorage<4, 4, int>             mFollowingTime;
    ::ll::TypedStorage<4, 4, int>             mAge;
    ::ll::TypedStorage<4, 4, int>             mHealth;
    ::ll::TypedStorage<4, 4, int>             mRandomPickupValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceOrb();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperienceOrb();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual float getShadowRadius() const;

    virtual void playerTouch(::Player&);

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual void doWaterSplashEffect();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperienceOrb(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI int getIconIndex() const;

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _spawnOrb(::BlockSource&, ::Level&, ::Vec3 const&, int);

    MCNAPI static bool _tryMergeIntoExistingOrbs(::BlockSource&, ::Vec3 const&, int);

    MCNAPI static void spawnOrb(::BlockSource&, ::Vec3 const&, int);

    MCNAPI static void spawnOrbs(::BlockSource&, ::Vec3 const&, int, ::ExperienceOrb::DropType, ::Player*);

    MCNAPI static void spawnOrbs(::BlockSource&, ::Vec3 const&, int, int, ::ExperienceOrb::DropType, ::Player*);
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

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $playerTouch(::Player&);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI void $doWaterSplashEffect();

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

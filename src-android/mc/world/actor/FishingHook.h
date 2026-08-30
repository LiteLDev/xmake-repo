#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
class HitResult;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class FishingHook : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> SHOOT_SPEED;
    ::ll::TypedStorage<4, 4, float const> SHOOT_POWER;
    ::ll::TypedStorage<4, 4, int const>   NUM_PERCENTAGE_STEPS;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<4, 4, float>       mBobTimer;
    ::ll::TypedStorage<4, 4, float>       mFishAngle;
    ::ll::TypedStorage<4, 4, int>         mLife;
    ::ll::TypedStorage<4, 4, int>         mFlightTime;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilHooked;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilLured;
    ::ll::TypedStorage<4, 4, int>         mTimeUntilNibble;
    ::ll::TypedStorage<4, 4, int>         mFishingSpeed;
    ::ll::TypedStorage<1, 1, bool>        mInGround;
    // NOLINTEND

public:
    // prevent constructor by default
    FishingHook();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FishingHook();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void remove();

    virtual float getShadowRadius() const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool shouldDropDeathLoot() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FishingHook(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI float _getWaterPercentage();

    MCNAPI void _pullCloser(::Actor&, float);

    MCNAPI void postNormalTick();

    MCNAPI int retrieve();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& BOBBER_SIZE();
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

    MCNAPI void $remove();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $shouldDropDeathLoot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

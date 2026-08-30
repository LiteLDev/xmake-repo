#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockPos;
class EntityContext;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class Camel : public ::Animal {
public:
    // Camel inner types define
    enum class SittingState : uchar {
        StandingAdult = 0,
        SittingAdult  = 1,
        StandingBaby  = 2,
        SittingBaby   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Camel::SittingState>        mLastSittingState;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mDashCooldown;
    ::ll::TypedStorage<1, 1, bool>                         mWasInCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    Camel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Camel();

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual void normalTick();

    virtual void aiStep();

    virtual float _getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Camel(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI std::optional<ExpiringTick> getDashCooldown() const;
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
    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI void $normalTick();

    MCNAPI void $aiStep();

    MCNAPI float $_getWalkTargetValue(::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

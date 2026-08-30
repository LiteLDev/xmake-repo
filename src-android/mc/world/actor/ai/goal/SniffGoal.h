#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct DistanceSortedActor;
// clang-format on

class SniffGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mSniffingRadius;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownRangeSeconds;
    ::ll::TypedStorage<2, 2, ushort>                    mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                    mCooldownExpiryTick;
    ::ll::TypedStorage<4, 4, float>                     mSuspicionRadiusHorizontal;
    ::ll::TypedStorage<4, 4, float>                     mSuspicionRadiusVertical;
    // NOLINTEND

public:
    // prevent constructor by default
    SniffGoal& operator=(SniffGoal const&);
    SniffGoal(SniffGoal const&);
    SniffGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SniffGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SniffGoal(::Mob&);

    MCNAPI std::vector<DistanceSortedActor> _fetchNearbySniffableActors(::ActorType) const;

    MCNAPI std::optional<DistanceSortedActor> _fetchNearestSniffableActor() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

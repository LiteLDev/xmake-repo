#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/IntRange.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
struct DistanceSortedActor;
struct GoalId;
struct MobDescriptor;
// clang-format on

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                 mTargetID;
    ::ll::TypedStorage<8, 8, ::MobDescriptor const*>                          mTargetDescriptor;
    ::ll::TypedStorage<1, 1, bool>                                            mReselectTargets;
    ::ll::TypedStorage<8, 40, std::unordered_map<const MobDescriptor*, Tick>> mTargetCooldowns;
    ::ll::TypedStorage<4, 8, ::IntRange>                                      mAttackIntervalTicks;
    ::ll::TypedStorage<4, 4, int>                                             mScanInterval;
    ::ll::TypedStorage<1, 1, bool>                                            mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                                           mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                           mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                                           mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                           mTargetAcquisitionProbability;
    // NOLINTEND

public:
    // prevent constructor by default
    NearestAttackableTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NearestAttackableTargetGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void appendDebugInfo(std::string&) const;

    virtual ::ActorUniqueID _findTarget(::MobDescriptor const**);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NearestAttackableTargetGoal(::Mob&);

    MCNAPI bool _selectTarget();

    MCNAPI bool isTargetVisible(::Mob const&, float, float) const;
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

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI ::ActorUniqueID $_findTarget(::MobDescriptor const**);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VillagerCelebrationGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                    mNextFireworkTick;
    ::ll::TypedStorage<8, 8, ::Tick>                    mEndTick;
    ::ll::TypedStorage<4, 4, float>                     mDuration;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mFireworksInterval;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mCelebrationEndEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillagerCelebrationGoal();

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
    MCNAPI explicit VillagerCelebrationGoal(::Mob&);
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

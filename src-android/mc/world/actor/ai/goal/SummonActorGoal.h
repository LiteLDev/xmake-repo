#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/SummonSpellData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct ActorDefinitionIdentifier;
// clang-format on

class SummonActorGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                        mCaster;
    ::ll::TypedStorage<8, 24, std::vector<SummonSpellData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                           mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                           mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                           mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                           mCurrentSpellStage;
    ::ll::TypedStorage<4, 4, int>                           mCurrentSummonCount;
    ::ll::TypedStorage<8, 8, ulong>                         mCooldownStopTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mTargetPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mCasterPos;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonActorGoal& operator=(SummonActorGoal const&);
    SummonActorGoal(SummonActorGoal const&);
    SummonActorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SummonActorGoal();

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
    MCNAPI explicit SummonActorGoal(::Mob&);

    MCNAPI void
    _createSpellEntity(float, float, float, float, float, int, ::ActorDefinitionIdentifier, std::string const&) const;
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

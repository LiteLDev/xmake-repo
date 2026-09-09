#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/SendEventData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class SendEventGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                      mCaster;
    ::ll::UntypedStorage<8, 40>                           mTarget;
    ::ll::TypedStorage<8, 24, std::vector<SendEventData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                         mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                         mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                         mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                         mCurrentSpellStage;
    ::ll::TypedStorage<8, 8, ulong>                       mCooldownStopTick;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventGoal& operator=(SendEventGoal const&);
    SendEventGoal(SendEventGoal const&);
    SendEventGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SendEventGoal();

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
    MCNAPI SendEventGoal(::Mob&, std::vector<SendEventData> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, std::vector<SendEventData> const&);
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

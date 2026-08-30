#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Squid;
// clang-format on

class SquidOutOfWaterGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Squid&> mSquid;
    // NOLINTEND

public:
    // prevent constructor by default
    SquidOutOfWaterGoal& operator=(SquidOutOfWaterGoal const&);
    SquidOutOfWaterGoal(SquidOutOfWaterGoal const&);
    SquidOutOfWaterGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SquidOutOfWaterGoal();

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
    MCNAPI explicit SquidOutOfWaterGoal(::Mob&);
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

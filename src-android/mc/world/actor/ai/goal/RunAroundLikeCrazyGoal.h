#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RunAroundLikeCrazyGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    // NOLINTEND

public:
    // prevent constructor by default
    RunAroundLikeCrazyGoal& operator=(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RunAroundLikeCrazyGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RunAroundLikeCrazyGoal(::Mob&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

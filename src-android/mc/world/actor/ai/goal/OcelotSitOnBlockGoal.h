#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class OcelotSitOnBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    OcelotSitOnBlockGoal& operator=(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal(OcelotSitOnBlockGoal const&);
    OcelotSitOnBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OcelotSitOnBlockGoal();

    virtual bool canUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&);

    virtual bool _canReach(::BlockPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OcelotSitOnBlockGoal(::Mob&);
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

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI bool $isValidTarget(::BlockSource&, ::BlockPos const&);

    MCNAPI bool $_canReach(::BlockPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

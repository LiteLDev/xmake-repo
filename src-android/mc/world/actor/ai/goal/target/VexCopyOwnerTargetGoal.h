#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct MobDescriptor;
// clang-format on

class VexCopyOwnerTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    VexCopyOwnerTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VexCopyOwnerTargetGoal();

    virtual bool canUse();

    virtual void start();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VexCopyOwnerTargetGoal(::Mob&, std::vector<MobDescriptor> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, std::vector<MobDescriptor> const&);
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

    MCNAPI void $appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

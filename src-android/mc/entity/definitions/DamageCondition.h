#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

struct DamageCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mDamageFilters;
    ::ll::TypedStorage<8, 24, std::string>        mCause;
    ::ll::TypedStorage<4, 4, int>                 mDamagePerTick;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageCondition& operator=(DamageCondition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DamageCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

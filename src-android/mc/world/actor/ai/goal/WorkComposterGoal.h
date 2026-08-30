#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkGoal.h"

// auto generated forward declare list
// clang-format off
class ContainerComponent;
class Mob;
// clang-format on

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>   mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>   mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>   mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool>  mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool>  mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>   mMinItemCount;
    ::ll::TypedStorage<4, 4, int>   mTimesComposted;
    ::ll::TypedStorage<8, 8, ulong> mNextUseTick;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkComposterGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorkComposterGoal();

    virtual void start();

    virtual void useWorkstation();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorkComposterGoal(::Mob&);

    MCNAPI std::pair<int, int> _findCompostableItemSlot(::ContainerComponent&);
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
    MCNAPI void $start();

    MCNAPI void $useWorkstation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

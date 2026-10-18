#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/WorkGoal.h"

// auto generated forward declare list
// clang-format off
class ContainerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WorkComposterGoal : public ::WorkGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>   mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>   mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>   mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>   mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool>  mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool>  mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>   mMinItemCount;
    ::ll::TypedStorage<4, 4, int>   mTimesComposted;
    ::ll::TypedStorage<8, 8, ulong> mNextUseTick;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>    mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>    mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>    mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>    mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool>   mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool>   mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>    mMinItemCount;
    ::ll::TypedStorage<4, 4, int>    mTimesComposted;
    ::ll::TypedStorage<8, 8, uint64> mNextUseTick;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    WorkComposterGoal();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorkComposterGoal();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();

    virtual void useWorkstation();
#else // @header-generator platform
    virtual void useWorkstation() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::std::pair<int, int> _findCompostableItemSlot(::ContainerComponent& inventory);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $useWorkstation();
#else // @header-generator platform
    MCAPI void $useWorkstation();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

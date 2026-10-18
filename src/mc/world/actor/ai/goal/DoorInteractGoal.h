#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class DoorBlock;
class Mob;
class Path;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DoorInteractGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>        mDoorPos;
    ::ll::TypedStorage<8, 8, ::DoorBlock const*> mDoorBlock;
    ::ll::TypedStorage<1, 1, bool>               mInitialToggledState;
    ::ll::TypedStorage<1, 1, bool>               mMobOversized;
    ::ll::TypedStorage<1, 1, bool>               mExited;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirX;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirZ;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>                   mEnterDirection;
    ::ll::UntypedStorage<1, 1>                   mExitDirection;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Direction::Type>  mEnterDirection;
    ::ll::TypedStorage<1, 1, ::Direction::Type>  mExitDirection;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&);
    DoorInteractGoal(DoorInteractGoal const&);
    DoorInteractGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DoorInteractGoal();
#else // @header-generator platform
    virtual ~DoorInteractGoal() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DoorInteractGoal(::Mob&);

    MCNAPI bool _doorBlocksPath() const;

    MCNAPI bool _mobHasExited();
#else // @header-generator platform
    MCAPI bool _doorBlocksPath() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::DoorBlock const*
    _findBlockingDoorAtPos(::BlockPos const&, ::Mob const&, ::Path*, ::Direction::Type&, ::Direction::Type&);
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
    MCAPI static ::DoorBlock const* _findBlockingDoorAtPos(
        ::BlockPos const&  bpos,
        ::Mob const&       mob,
        ::Path*            path,
        ::Direction::Type& dirIn,
        ::Direction::Type& dirOut
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

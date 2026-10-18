#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class PetSleepWithOwnerState;
// clang-format on

class PetSleepWithOwnerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                     mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                     mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                   mGoalRadius;
    ::ll::TypedStorage<8, 8, ::Mob&>                                  mMob;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PetSleepWithOwnerState>> mState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mBedTargetPos;
    ::ll::UntypedStorage<8, 40>                                       mOwner;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                         mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                         mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                       mGoalRadius;
    ::ll::TypedStorage<8, 8, ::Mob&>                                      mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PetSleepWithOwnerState>> mState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mBedTargetPos;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>                          mOwner;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PetSleepWithOwnerGoal& operator=(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PetSleepWithOwnerGoal();
#else // @header-generator platform
    virtual ~PetSleepWithOwnerGoal() /*override*/ = default;
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
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
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
    MCNAPI explicit PetSleepWithOwnerGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit PetSleepWithOwnerGoal(::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MobDescriptor;
#endif // @header-generator platform
// clang-format on

class PlayGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                         mMaxPlayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                       mChanceToStart;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                         mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                         mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                         mFollowDistanceInBlocksSquared;
    ::ll::TypedStorage<4, 4, int>                         mCurrentPlayDurationTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::UntypedStorage<8, 40>                           mFollowFriend;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                             mMaxPlayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                           mChanceToStart;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                             mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                             mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                             mFollowDistanceInBlocksSquared;
    ::ll::TypedStorage<4, 4, int>                             mCurrentPlayDurationTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>              mFollowFriend;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayGoal& operator=(PlayGoal const&);
    PlayGoal(PlayGoal const&);
    PlayGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayGoal(::Mob&);
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
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
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

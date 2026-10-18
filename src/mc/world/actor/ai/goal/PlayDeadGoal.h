#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PlayDeadGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                               mDuration;
    ::ll::TypedStorage<4, 4, float>                                               mRandomStartChance;
    ::ll::TypedStorage<4, 4, int>                                                 mForceUseBelowHealth;
    ::ll::TypedStorage<1, 1, bool>                                                mApplyRegeneration;
    ::ll::TypedStorage<4, 8, ::IntRange>                                          mActivationDamageRange;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                 mFilters;
    ::ll::TypedStorage<8, 8, ::Mob&>                                              mMob;
    ::ll::TypedStorage<8, 8, ulong>                                               mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, ulong>                                               mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, ulong>                                               mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                mPlayDeadOnAllCauses;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                                   mDuration;
    ::ll::TypedStorage<4, 4, float>                                                   mRandomStartChance;
    ::ll::TypedStorage<4, 4, int>                                                     mForceUseBelowHealth;
    ::ll::TypedStorage<1, 1, bool>                                                    mApplyRegeneration;
    ::ll::TypedStorage<4, 8, ::IntRange>                                              mActivationDamageRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                     mFilters;
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 8, uint64>                                                  mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, uint64>                                                  mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, uint64>                                                  mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                    mPlayDeadOnAllCauses;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&);
    PlayDeadGoal(PlayDeadGoal const&);
    PlayDeadGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayDeadGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayDeadGoal(::Mob&);
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
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
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

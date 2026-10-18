#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/IntRange.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#endif // @header-generator platform
#include "mc/world/actor/ai/goal/target/TargetGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/Tick.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
struct DistanceSortedActor;
struct GoalId;
struct MobDescriptor;
#else // @header-generator platform
struct Tick;
#endif // @header-generator platform
// clang-format on

class NearestAttackableTargetGoal : public ::TargetGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                 mTargetID;
    ::ll::TypedStorage<8, 8, ::MobDescriptor const*>                          mTargetDescriptor;
    ::ll::TypedStorage<1, 1, bool>                                            mReselectTargets;
    ::ll::TypedStorage<8, 40, std::unordered_map<const MobDescriptor*, Tick>> mTargetCooldowns;
    ::ll::TypedStorage<4, 8, ::IntRange>                                      mAttackIntervalTicks;
    ::ll::TypedStorage<4, 4, int>                                             mScanInterval;
    ::ll::TypedStorage<1, 1, bool>                                            mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                                           mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                           mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                                           mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                           mTargetAcquisitionProbability;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                       mTargetID;
    ::ll::TypedStorage<8, 8, ::MobDescriptor const*>                                mTargetDescriptor;
    ::ll::TypedStorage<1, 1, bool>                                                  mReselectTargets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::MobDescriptor const*, ::Tick>> mTargetCooldowns;
    ::ll::TypedStorage<4, 8, ::IntRange>                                            mAttackIntervalTicks;
    ::ll::TypedStorage<4, 4, int>                                                   mScanInterval;
    ::ll::TypedStorage<1, 1, bool>                                                  mSetPersistent;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetAcquisitionProbability;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NearestAttackableTargetGoal();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NearestAttackableTargetGoal();
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
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;

    virtual ::ActorUniqueID _findTarget(::MobDescriptor const**);
#else // @header-generator platform
    virtual ::ActorUniqueID _findTarget(::MobDescriptor const** outMobDescriptor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NearestAttackableTargetGoal(::Mob&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _isTargetInCooldown(::MobDescriptor const& descriptor) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _selectTarget();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool _isTargetInCooldown(::MobDescriptor const& descriptor) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isTargetVisible(::Mob const&, float, float) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool _selectTarget();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
#else // @header-generator platform
    MCAPI bool isTargetVisible(::Mob const& mob, float maxDistance, float maxHeight) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
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
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $_findTarget(::MobDescriptor const**);
#else // @header-generator platform
    MCAPI ::ActorUniqueID $_findTarget(::MobDescriptor const** outMobDescriptor);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

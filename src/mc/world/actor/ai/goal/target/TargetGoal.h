#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/MobDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
struct MobDescriptor;
#endif // @header-generator platform
// clang-format on

class TargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                      mMob;
    ::ll::TypedStorage<1, 1, bool>                        mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                        mMustReach;
    ::ll::TypedStorage<1, 1, bool>                        mGlobalMustSee;
    ::ll::TypedStorage<1, 1, bool>                        mTargetMustSee;
    ::ll::TypedStorage<4, 4, int>                         mTargetMustSeeForgetTicks;
    ::ll::TypedStorage<1, 1, bool>                        mFilterFailure;
    ::ll::TypedStorage<4, 4, int>                         mFilterFailureTicks;
    ::ll::TypedStorage<4, 4, int>                         mGlobalMustSeeForgetTicks;
    ::ll::TypedStorage<4, 4, int>                         mPersistTargetTicks;
    ::ll::TypedStorage<4, 4, int>                         mReachCache;
    ::ll::TypedStorage<4, 4, int>                         mReachCacheTime;
    ::ll::TypedStorage<4, 4, int>                         mUnseenTicks;
    ::ll::TypedStorage<4, 4, float>                       mWithinDefault;
    ::ll::TypedStorage<1, 1, bool>                        mReevaluateTarget;
    ::ll::TypedStorage<8, 24, std::vector<MobDescriptor>> mTargetTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<1, 1, bool>                            mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                            mMustReach;
    ::ll::TypedStorage<1, 1, bool>                            mGlobalMustSee;
    ::ll::TypedStorage<1, 1, bool>                            mTargetMustSee;
    ::ll::TypedStorage<4, 4, int>                             mTargetMustSeeForgetTicks;
    ::ll::TypedStorage<1, 1, bool>                            mFilterFailure;
    ::ll::TypedStorage<4, 4, int>                             mFilterFailureTicks;
    ::ll::TypedStorage<4, 4, int>                             mGlobalMustSeeForgetTicks;
    ::ll::TypedStorage<4, 4, int>                             mPersistTargetTicks;
    ::ll::TypedStorage<4, 4, int>                             mReachCache;
    ::ll::TypedStorage<4, 4, int>                             mReachCacheTime;
    ::ll::TypedStorage<4, 4, int>                             mUnseenTicks;
    ::ll::TypedStorage<4, 4, float>                           mWithinDefault;
    ::ll::TypedStorage<1, 1, bool>                            mReevaluateTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetTypes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TargetGoal& operator=(TargetGoal const&);
    TargetGoal(TargetGoal const&);
    TargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TargetGoal();
#else // @header-generator platform
    virtual bool isTargetGoal() const /*override*/;
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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTargetGoal() const;
#else // @header-generator platform
    virtual bool _canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
#else // @header-generator platform
    virtual ~TargetGoal() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TargetGoal(::Mob&, bool, int, bool, float, bool, int);
#else // @header-generator platform
    MCAPI bool _canAttack(::Actor* target, bool allowInvulnerable, ::MobDescriptor const** outDescriptorMatch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canAttack(::Actor*, bool, ::MobDescriptor const**);
#else // @header-generator platform
    MCAPI bool _canReach(::Actor& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canReach(::Actor&);

    MCNAPI bool _canReachAfterDelay(::Actor&);

    MCNAPI bool _matchesTargetTypes(::Mob*, ::Actor*, bool, ::MobDescriptor const**);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, bool, int, bool, float, bool, int);
#else // @header-generator platform
    MCAPI bool
    _matchesTargetTypes(::Mob* testMob, ::Actor* target, bool mustSee, ::MobDescriptor const** outDescriptorMatch);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCFOLD bool $isTargetGoal() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isTargetGoal() const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_canAttack(::Mob*, ::Actor*, bool, bool, ::MobDescriptor const**);
#else // @header-generator platform
    MCAPI bool $_canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );


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

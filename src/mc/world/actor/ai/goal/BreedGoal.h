#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec2;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BreedGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>           mOwner;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPartner;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPartner;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>              mLoveTime;
    ::ll::TypedStorage<4, 4, float>            mSpeed;
    ::ll::TypedStorage<1, 1, bool const>       mStopNavigationOnStop;
    // NOLINTEND

public:
    // prevent constructor by default
    BreedGoal& operator=(BreedGoal const&);
    BreedGoal(BreedGoal const&);
    BreedGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BreedGoal();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BreedGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit BreedGoal(::Mob& animal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isCloseEnoughToBreed(::Vec3, ::Vec2, ::Vec3, ::Vec2) const;
#else // @header-generator platform
    MCAPI bool _isCloseEnoughToBreed(::Vec3 pos1, ::Vec2 size1, ::Vec3 pos2, ::Vec2 size2) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob* _moveToFreePartner() const;
#else // @header-generator platform
    MCAPI ::Mob* _moveToFreePartner() const;
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
    MCAPI void* $ctor(::Mob& animal);
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

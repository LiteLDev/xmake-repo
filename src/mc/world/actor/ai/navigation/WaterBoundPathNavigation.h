#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Mob;
class NavigationComponent;
class Vec3;
struct NavigationDescription;
// clang-format on

class WaterBoundPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mAllowRiverFollow;
    ::ll::TypedStorage<1, 1, bool>  mFollowingRiver;
    ::ll::TypedStorage<4, 4, int>   mHeadingTicks;
    ::ll::TypedStorage<4, 4, float> mCenteredThreshold;
    ::ll::TypedStorage<4, 4, float> mLookAheadDistance;
    ::ll::TypedStorage<4, 4, float> mMinDepth;
    ::ll::TypedStorage<4, 4, float> mMaxDepth;
    ::ll::TypedStorage<4, 4, float> mSteerDampening;
    ::ll::TypedStorage<4, 4, float> mTerrainAvoidDistance;
    ::ll::TypedStorage<4, 4, float> mXBodyRotation;
    ::ll::TypedStorage<4, 4, float> mYBodyRotation;
    ::ll::TypedStorage<4, 4, float> mZBodyRotation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WaterBoundPathNavigation();
#else // @header-generator platform
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription const* description) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);
#else // @header-generator platform
    virtual void tick(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const&) const;
#else // @header-generator platform
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
#else // @header-generator platform
    virtual bool canUpdatePath(::Mob const& mob) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUpdatePath(::Mob const&) const;

    virtual void updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeInternal(::Mob&, ::NavigationDescription const*);
#else // @header-generator platform
    MCAPI void $initializeInternal(::Mob& mob, ::NavigationDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $tick(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getTempMobPos(::Mob const&) const;
#else // @header-generator platform
    MCAPI ::Vec3 $getTempMobPos(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
#else // @header-generator platform
    MCAPI bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUpdatePath(::Mob const&) const;
#else // @header-generator platform
    MCAPI bool $canUpdatePath(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updatePath(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $updatePath(::NavigationComponent& parent, ::Mob& mob);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

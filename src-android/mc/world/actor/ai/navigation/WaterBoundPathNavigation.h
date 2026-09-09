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
    virtual ~WaterBoundPathNavigation();

    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);

    virtual void tick(::NavigationComponent&, ::Mob&);

    virtual ::Vec3 getTempMobPos(::Mob const&) const;

    virtual bool travel(::NavigationComponent&, ::Mob&, float&, float&, float&);

    virtual bool canUpdatePath(::Mob const&) const;

    virtual void updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob&, ::NavigationDescription const*);

    MCNAPI void $tick(::NavigationComponent&, ::Mob&);

    MCNAPI ::Vec3 $getTempMobPos(::Mob const&) const;

    MCNAPI bool $travel(::NavigationComponent&, ::Mob&, float&, float&, float&);

    MCNAPI bool $canUpdatePath(::Mob const&) const;

    MCNAPI void $updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

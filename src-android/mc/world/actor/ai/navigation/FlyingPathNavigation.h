#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
struct NavigationDescription;
// clang-format on

class FlyingPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mHadGravity;
    ::ll::TypedStorage<1, 1, bool>        mCanPathFromAir;
    ::ll::TypedStorage<4, 4, float const> mMinWaypointRadius;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlyingPathNavigation();

    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);

    virtual void tick(::NavigationComponent&, ::Mob&);

    virtual ::Vec3 getTempMobPos(::Mob const&) const;

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    virtual void stop(::NavigationComponent&, ::Mob&);

    virtual bool canUpdatePath(::Mob const&) const;

    virtual void updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _disableGravity(::Mob&);

    MCNAPI void _restorePreviousGravityFlag(::Mob&);

    MCNAPI void _storePreviousGravityFlag(::Mob&);
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

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    MCNAPI void $stop(::NavigationComponent&, ::Mob&);

    MCNAPI bool $canUpdatePath(::Mob const&) const;

    MCNAPI void $updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

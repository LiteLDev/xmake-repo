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

class GenericPathNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericPathNavigation();

    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);

    virtual void tick(::NavigationComponent&, ::Mob&);

    virtual ::Vec3 getTempMobPos(::Mob const&) const;

    virtual void stop(::NavigationComponent&, ::Mob&);

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

    MCNAPI void $stop(::NavigationComponent&, ::Mob&);

    MCNAPI void $updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

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
// clang-format on

class FloatNavigation : public ::PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FloatNavigation();

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    virtual bool travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    MCNAPI bool $travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

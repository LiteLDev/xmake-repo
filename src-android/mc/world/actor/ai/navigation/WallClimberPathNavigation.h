#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockSource;
class Mob;
class NavigationComponent;
class Path;
class Vec3;
// clang-format on

class WallClimberPathNavigation : public ::PathNavigation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPathToPosition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WallClimberPathNavigation();

    virtual void tick(::NavigationComponent&, ::Mob&);

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    virtual bool canUpdatePath(::Mob const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isInsideBorderBlock(::AABB const&, ::BlockSource const&, float) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::NavigationComponent&, ::Mob&);

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    MCNAPI bool $canUpdatePath(::Mob const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

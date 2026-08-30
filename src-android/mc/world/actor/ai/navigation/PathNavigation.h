#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Mob;
class NavigationComponent;
class Path;
class Vec2;
class Vec3;
struct NavigationDescription;
// clang-format on

class PathNavigation {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PathNavigation();

    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);

    virtual void tick(::NavigationComponent&, ::Mob&);

    virtual ::Vec3 getTempMobPos(::Mob const&) const;

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);

    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);

    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    virtual void stop(::NavigationComponent&, ::Mob&);

    virtual bool travel(::NavigationComponent&, ::Mob&, float&, float&, float&);

    virtual bool canUpdatePath(::Mob const&) const;

    virtual void updatePath(::NavigationComponent&, ::Mob&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float _getHighestBlockHeight(::BlockSource&, ::Mob&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI bool _isPositionOnlyInAir(::BlockSource const&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI ::NodeType
    isFree(::NavigationComponent&, ::Mob&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&, ::CanJumpIntoNode);
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

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);

    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);

    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);

    MCNAPI void $stop(::NavigationComponent&, ::Mob&);

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

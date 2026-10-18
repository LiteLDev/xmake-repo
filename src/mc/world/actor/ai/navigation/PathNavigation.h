#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PathNavigation();
#else // @header-generator platform
    virtual ~PathNavigation() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeInternal(::Mob&, ::NavigationDescription const*);
#else // @header-generator platform
    virtual void initializeInternal(::Mob& mob, ::NavigationDescription const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual void tick(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const&) const;
#else // @header-generator platform
    virtual ::Vec3 getTempMobPos(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Path> createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);
#else // @header-generator platform
    virtual ::std::unique_ptr<::Path> createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Path> createPath(::NavigationComponent&, ::Mob&, ::Actor const&);
#else // @header-generator platform
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);
#else // @header-generator platform
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);
#else // @header-generator platform
    virtual bool moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual void stop(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
#else // @header-generator platform
    virtual bool travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUpdatePath(::Mob const&) const;
#else // @header-generator platform
    virtual bool canUpdatePath(::Mob const& mob) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updatePath(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    virtual void updatePath(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _getHighestBlockHeight(::BlockSource&, ::Mob&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI bool _isPositionOnlyInAir(::BlockSource const&, ::Vec3 const&, ::Vec2 const&) const;

    MCNAPI ::NodeType
    isFree(::NavigationComponent&, ::Mob&, ::BlockPos const&, ::BlockPos const&, ::BlockPos const&, ::CanJumpIntoNode);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI float _getHighestBlockHeight(::BlockSource& region, ::Mob& mob, ::Vec3 const& pos, ::Vec2 const& aabb) const;

    MCAPI bool _isPositionOnlyInAir(::BlockSource const& region, ::Vec3 const& pos, ::Vec2 const& aabb) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static float _getHighestBlockHeight(::BlockSource& region, ::Mob& mob, ::Vec3 const& pos, ::Vec2 const& aabb);

    MCAPI static bool _isPositionOnlyInAir(::BlockSource const& region, ::Vec3 const& pos, ::Vec2 const& aabb);
#endif
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
    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Vec3 const&);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Vec3 const&, float);
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::Path> $createPath(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Path> $createPath(::NavigationComponent&, ::Mob&, ::Actor const&);
#else // @header-generator platform
    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Vec3 const& pos, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, std::unique_ptr<Path>, float);
#else // @header-generator platform
    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::Actor const& target, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $moveTo(::NavigationComponent&, ::Mob&, ::Actor const&, float);
#else // @header-generator platform
    MCAPI bool $moveTo(::NavigationComponent& parent, ::Mob& mob, ::std::unique_ptr<::Path> newPath, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop(::NavigationComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $stop(::NavigationComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $travel(::NavigationComponent&, ::Mob&, float&, float&, float&);
#else // @header-generator platform
    MCFOLD bool $travel(::NavigationComponent& parent, ::Mob& mob, float& xa, float& ya, float& za);
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

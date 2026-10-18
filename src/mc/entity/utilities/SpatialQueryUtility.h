#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct AABBShapeComponent;
struct ActorDataFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
struct CollidableMobFlagComponent;
struct CollisionShapes;
struct FallingBlockFlagComponent;
// clang-format on

struct SpatialQueryUtility {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool forEachBlockInAABB(
        ::IConstBlockSource const&,
        ::AABB const&,
        float,
        std::function<void(const Block&, const BlockPos&)> const&
#else // @header-generator platform
    MCAPI static bool forEachBlockInAABB(
        ::IConstBlockSource const&                                      region,
        ::AABB const&                                                   aabb,
        float                                                           grow,
        ::std::function<void(::Block const&, ::BlockPos const&)> const& callback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void testForCollidableMobs(
        ::StrictEntityContext const&,
        ::LocalSpatialEntityFetcher&,
        ::AABB const&,
        ::AABB const&,
        ::ViewT<StrictEntityContext, Include<CollidableMobFlagComponent>, const AABBShapeComponent> const,
        ::ViewT<StrictEntityContext, Include<FallingBlockFlagComponent>> const,
        ::CollisionShapes&
#else // @header-generator platform
    MCAPI static void testForCollidableMobs(
        ::StrictEntityContext const& except,
        ::LocalSpatialEntityFetcher& fetcher,
        ::AABB const&                actorAABB,
        ::AABB const&                intersectTestBox,
        ::ViewT<::StrictEntityContext, ::Include<::CollidableMobFlagComponent>, ::AABBShapeComponent const> view,
        ::ViewT<::StrictEntityContext, ::Include<::FallingBlockFlagComponent>> fallingBlockView,
        ::CollisionShapes&                                                     collisionShapes
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void testForEntityStacking(
        ::StrictEntityContext const&,
        ::LocalSpatialEntityFetcher&,
        ::AABB const&,
        ::ViewT<StrictEntityContext, const AABBShapeComponent, const ActorDataFlagComponent> const&,
        ::CollisionShapes&
#else // @header-generator platform
    MCAPI static void testForEntityStacking(
        ::StrictEntityContext const& except,
        ::LocalSpatialEntityFetcher& component,
        ::AABB const&                intersectTestBox,
        ::ViewT<::StrictEntityContext, ::AABBShapeComponent const, ::ActorDataFlagComponent const> const& view,
        ::CollisionShapes& collisionShapes
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static ::StrictEntityContext tryFetchEntity(::LocalSpatialEntityFetcher&, ::ActorUniqueID const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

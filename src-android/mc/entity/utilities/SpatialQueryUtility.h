#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class IConstBlockSource;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
template<typename... T0> class Include;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorUniqueID;
struct CollidableMobFlagComponent;
struct CollisionShapes;
struct FallingBlockFlagComponent;
// clang-format on

struct SpatialQueryUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool forEachBlockInAABB(
        ::IConstBlockSource const&,
        ::AABB const&,
        float,
        std::function<void(const Block&, const BlockPos&)> const&
    );

    MCNAPI static void testForCollidableMobs(
        ::StrictEntityContext const&,
        ::LocalSpatialEntityFetcher&,
        ::AABB const&,
        ::AABB const&,
        ::ViewT<StrictEntityContext, Include<CollidableMobFlagComponent>, const AABBShapeComponent> const,
        ::ViewT<StrictEntityContext, Include<FallingBlockFlagComponent>> const,
        ::CollisionShapes&
    );

    MCNAPI static void testForEntityStacking(
        ::StrictEntityContext const&,
        ::LocalSpatialEntityFetcher&,
        ::AABB const&,
        ::ViewT<StrictEntityContext, const AABBShapeComponent, const ActorDataFlagComponent> const&,
        ::CollisionShapes&
    );

    MCNAPI static ::StrictEntityContext tryFetchEntity(::LocalSpatialEntityFetcher&, ::ActorUniqueID const&);
    // NOLINTEND
};

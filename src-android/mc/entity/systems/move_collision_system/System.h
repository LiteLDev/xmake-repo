#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/block_source_visitor/CollisionShape.h"
#include "mc/entity/components/LocalConstBlockSource.h"
#include "mc/entity/components/LocalSpatialEntityFetcher.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
#ifndef LL_GENERATED_ANDROID_BASE_STUB_MOVECOLLISIONSYSTEM__SYSTEMBASE
#define LL_GENERATED_ANDROID_BASE_STUB_MOVECOLLISIONSYSTEM__SYSTEMBASE
namespace MoveCollisionSystem { class SystemBase {}; }
#endif
// clang-format on

namespace MoveCollisionSystem {

struct System : public ::MoveCollisionSystem::SystemBase {
public:
    // System inner types declare
    // clang-format off
    struct SpatialQueryFactories;
    struct SpatialQueries;
    // clang-format on

    // System inner types define
    struct SpatialQueryFactories {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::LocalConstBlockSourceFactoryComponent*>     mBlockSourceFactory;
        ::ll::TypedStorage<8, 8, ::LocalSpatialEntityFetcherFactoryComponent*> mFetcherFactory;
        // NOLINTEND
    };

    struct SpatialQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 288, ::LocalSpatialEntityFetcher> mFetcher;
        ::ll::TypedStorage<8, 288, ::LocalConstBlockSource>     mBlockSource;
        // NOLINTEND
    };

    using CollisionShapeVec = std::vector<BlockSourceVisitor::CollisionShape>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes;
    ::ll::TypedStorage<8, 24, std::vector<BlockSourceVisitor::CollisionShape>> mScratchTempCollisionShapes2;
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                               mScratchTempShapes;
    // NOLINTEND
};

} // namespace MoveCollisionSystem

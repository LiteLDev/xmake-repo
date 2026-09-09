#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockPos;
class ChunkPos;
class GetCollisionShapeInterface;
class LevelChunk;
class Material;
class Vec3;
struct Bounds;
struct DimensionType;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class IConstBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IConstBlockSource() = default;

    virtual ::Block const& getBlock(::BlockPos const&, uint) const = 0;

    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    virtual ::Block const& getLiquidBlock(::BlockPos const&) const = 0;

    virtual bool hasBlock(::BlockPos const&) const = 0;

    virtual bool containsAnyLiquid(::AABB const&) const = 0;

    virtual bool containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const = 0;

    virtual bool isInWall(::Vec3 const&) const = 0;

    virtual bool isUnderWater(::BlockPos const&, ::Block const&) const = 0;

    virtual ::Material const& getMaterial(int, int, int) const = 0;

    virtual ::Material const& getMaterial(::BlockPos const&) const = 0;

    virtual bool hasBorderBlock(::BlockPos const) const = 0;

    virtual bool hasChunk(::ChunkPos const&, bool) const = 0;

    virtual bool hasChunksAt(::AABB const&, bool) const = 0;

    virtual bool hasChunksAt(::BlockPos const&, int, bool) const = 0;

    virtual bool hasChunksAt(::Bounds const&, bool) const = 0;

    virtual ::DimensionType getDimensionId() const = 0;

    virtual bool shouldFireEvents(::LevelChunk const&) const = 0;

    virtual void fetchAABBs(std::vector<AABB>&, ::AABB const&, bool) const = 0;

    virtual void fetchCollisionShapes(std::vector<AABB>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const = 0;

    virtual void fetchCollisionShapesAndBlocks(std::vector<BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const = 0;

    virtual ::AABB getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const = 0;

    virtual float getBrightness(::BlockPos const&) const = 0;
    // clang-format on
    // NOLINTEND
};

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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IConstBlockSource() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&, uint) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getLiquidBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Block const& getLiquidBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool hasBlock(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsAnyLiquid(::AABB const&) const = 0;
#else // @header-generator platform
    virtual bool containsAnyLiquid(::AABB const& box) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const = 0;
#else // @header-generator platform
    virtual bool containsMaterial(::AABB const& box, ::SharedTypes::v1_26_20::MaterialType material) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInWall(::Vec3 const&) const = 0;
#else // @header-generator platform
    virtual bool isInWall(::Vec3 const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isUnderWater(::BlockPos const&, ::Block const&) const = 0;
#else // @header-generator platform
    virtual bool isUnderWater(::BlockPos const& pos, ::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Material const& getMaterial(int, int, int) const = 0;
#else // @header-generator platform
    virtual ::Material const& getMaterial(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Material const& getMaterial(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Material const& getMaterial(int x, int y, int z) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBorderBlock(::BlockPos const) const = 0;
#else // @header-generator platform
    virtual bool hasBorderBlock(::BlockPos const pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunk(::ChunkPos const&, bool) const = 0;
#else // @header-generator platform
    virtual bool hasChunk(::ChunkPos const& pos, bool serverSideOnly) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::AABB const&, bool) const = 0;
#else // @header-generator platform
    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::BlockPos const&, int, bool) const = 0;
#else // @header-generator platform
    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::Bounds const&, bool) const = 0;
#else // @header-generator platform
    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const = 0;
#endif // @header-generator platform

    virtual ::DimensionType getDimensionId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldFireEvents(::LevelChunk const&) const = 0;
#else // @header-generator platform
    virtual bool shouldFireEvents(::LevelChunk const& c) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchAABBs(std::vector<AABB>&, ::AABB const&, bool) const = 0;
#else // @header-generator platform
    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchCollisionShapes(std::vector<AABB>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const = 0;
#else // @header-generator platform
    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchCollisionShapesAndBlocks(std::vector<BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const = 0;
#else // @header-generator platform
    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const = 0;
#else // @header-generator platform
    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBrightness(::BlockPos const&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual float getBrightness(::BlockPos const& pos) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

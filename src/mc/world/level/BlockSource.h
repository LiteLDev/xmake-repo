#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/IDType.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/BlockDataFetchResult.h"
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/IBlockSource.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/TickingQueueType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/Block.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AABB;
#endif // @header-generator platform
class Actor;
class Biome;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Block;
#endif // @header-generator platform
class BlockActor;
class BlockChangeContext;
class BlockDescriptor;
class BlockSourceListener;
class BlockTickingQueue;
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockVolume;
#else // @header-generator platform
#endif // @header-generator platform
class BoundingBox;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class GetCollisionShapeInterface;
class HitResult;
#if defined(LL_PLAT_A) // @header-generator platform
class HitboxComponent;
#else // @header-generator platform
#endif // @header-generator platform
class IConstBlockSource;
class ILevel;
class IVanillaRenderBlockActorComponent;
class ItemStackBase;
class Level;
class LevelChunk;
class LevelSeed64;
class Material;
class SubChunkPos;
class Vec3;
class WeakEntityRef;
struct ActorBlockSyncMessage;
struct ActorDefinitionIdentifier;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
#endif // @header-generator platform
struct BiomeIdLatticeBatch;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BiomeTagIDType;
#endif // @header-generator platform
struct Bounds;
struct Brightness;
struct ClipParameters;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
struct Tick;
struct WellKnownBiomeTags;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Mob;
class Container;
class CompoundTag;

#endif // @header-generator platform
class BlockSource : public ::IBlockSource,
#if defined(LL_PLAT_A) // @header-generator platform
                    public ::EnableGetWeakRef<BlockSource>,
                    public ::std::enable_shared_from_this<BlockSource> {
#else // @header-generator platform
                    public ::EnableGetWeakRef<::BlockSource>,
                    public ::std::enable_shared_from_this<::BlockSource> {
public:
    LLNDAPI std::vector<Actor*> getEntities(
        AABB const& range,
        float       extendDistance = 2.0f,
        ActorType   actorType      = ActorType::TypeMask,
        bool        ignoreType     = false
    ) const;

    LLNDAPI optional_ref<Container> tryGetContainer(BlockPos const& pos);

    LLAPI optional_ref<Actor> spawnActor(CompoundTag const&);

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                                   mOwnerThreadID;
    ::ll::TypedStorage<1, 1, bool const>                         mAllowUnpopulatedChunks;
    ::ll::TypedStorage<1, 1, bool const>                         mPublicSource;
    ::ll::TypedStorage<8, 8, ::Level&>                           mLevel;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                     mChunkSource;
    ::ll::TypedStorage<8, 8, ::Dimension&>                       mDimension;
    ::ll::TypedStorage<2, 2, short const>                        mMaxHeight;
    ::ll::TypedStorage<2, 2, short const>                        mMinHeight;
    ::ll::UntypedStorage<8, 24>                                  mTempBlockFetchResult;
    ::ll::TypedStorage<1, 1, bool>                               mAllowTickingChanges;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mPlaceChunkPos;
    ::ll::TypedStorage<8, 24, std::vector<BlockSourceListener*>> mListeners;
    ::ll::TypedStorage<1, 1, bool>                               mIsPersistantBlockSource;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                         mLastChunkPos;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LevelChunk>>         mLastChunkWeakPtr;
    ::ll::TypedStorage<8, 8, ::LevelChunk*>                      mLastChunkDirectPtr;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>               mRandomTickQueue;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>               mTickQueue;
    ::ll::UntypedStorage<1, 8>                                   mDefaultBrightness;
    ::ll::TypedStorage<8, 24, std::vector<Actor*>>               mTempEntityList;
    ::ll::TypedStorage<8, 24, std::vector<BlockActor*>>          mTempBlockEntityList;
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                 mTempCubeList;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::thread::id const>                         mOwnerThreadID;
    ::ll::TypedStorage<1, 1, bool const>                                      mAllowUnpopulatedChunks;
    ::ll::TypedStorage<1, 1, bool const>                                      mPublicSource;
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::ChunkSource&>                                  mChunkSource;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                    mDimension;
    ::ll::TypedStorage<2, 2, short const>                                     mMaxHeight;
    ::ll::TypedStorage<2, 2, short const>                                     mMinHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDataFetchResult<::Block>>> mTempBlockFetchResult;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowTickingChanges;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPlaceChunkPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSourceListener*>>          mListeners;
    ::ll::TypedStorage<1, 1, bool>                                            mIsPersistantBlockSource;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                      mLastChunkPos;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunk>>                  mLastChunkWeakPtr;
    ::ll::TypedStorage<8, 8, ::LevelChunk*>                                   mLastChunkDirectPtr;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>                            mRandomTickQueue;
    ::ll::TypedStorage<8, 8, ::BlockTickingQueue*>                            mTickQueue;
    ::ll::TypedStorage<1, 2, ::BrightnessPair const>                          mDefaultBrightness;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                        mTempEntityList;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockActor*>>                   mTempBlockEntityList;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                          mTempCubeList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockSource& operator=(BlockSource const&);
    BlockSource(BlockSource const&);
#endif // @header-generator platform
    BlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BlockSource();
#else // @header-generator platform
    virtual ~BlockSource() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&, uint) const;
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> getWeakRef() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Level& getLevel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Dimension& getDimension() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Dimension& getDimension() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getLiquidBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::Dimension const& getDimensionConst() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::DimensionType getDimensionId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsAnyLiquid(::AABB const&) const;
#else // @header-generator platform
    virtual bool shouldFireEvents(::LevelChunk const& c) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const;
#else // @header-generator platform
    virtual bool isInstaticking(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInWall(::Vec3 const&) const;
#else // @header-generator platform
    virtual void addListener(::BlockSourceListener& l) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isUnderWater(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    virtual void removeListener(::BlockSourceListener& l) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Material const& getMaterial(int, int, int) const;
#else // @header-generator platform
    virtual ::LevelChunk* getChunk(int x, int z) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Material const& getMaterial(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBorderBlock(::BlockPos const) const;
#else // @header-generator platform
    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunk(::ChunkPos const&, bool) const;
#else // @header-generator platform
    virtual short getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::AABB const&, bool) const;
#else // @header-generator platform
    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::BlockPos const&, int, bool) const;
#else // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, ::BlockPos const& pos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChunksAt(::Bounds const&, bool) const;
#else // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, int x, int z) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DimensionType getDimensionId() const;
#else // @header-generator platform
    virtual ::Material const& getMaterial(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldFireEvents(::LevelChunk const&) const;
#else // @header-generator platform
    virtual ::Material const& getMaterial(int x, int y, int z) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchAABBs(std::vector<AABB>&, ::AABB const&, bool) const;
#else // @header-generator platform
    virtual short getMaxHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchCollisionShapes(std::vector<AABB>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const;
#else // @header-generator platform
    virtual short getMinHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fetchCollisionShapesAndBlocks(std::vector<BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const;
#else // @header-generator platform
    virtual bool hasBorderBlock(::BlockPos const pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AABB getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    virtual float getBrightness(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBrightness(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<BlockSource> getWeakRef();
#else // @header-generator platform
    virtual bool canDoBlockDrops(::Actor const* instigatingActor) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(::BlockSourceListener&);
#else // @header-generator platform
    virtual bool canDoContainedItemDrops(::Actor const* instigatingActor) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeListener(::BlockSourceListener&);
#else // @header-generator platform
    virtual bool hasChunk(::ChunkPos const& pos, bool serverSideOnly) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::ActorType, ::AABB const&, ::Actor const*, std::function<bool (Actor*)>);
#else // @header-generator platform
    virtual bool hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::Actor const*, ::AABB const&, bool, bool);
#else // @header-generator platform
    virtual bool hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&);
#else // @header-generator platform
    virtual bool hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setExtraBlock(::BlockPos const&, ::Block const&, int);
#else // @header-generator platform
    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool removeBlock(::BlockPos const&, ::BlockChangeContext const&);
#else // @header-generator platform
    virtual bool containsAnyLiquid(::AABB const& box) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getMinHeight() const;
#else // @header-generator platform
    virtual bool containsMaterial(::AABB const& box, ::SharedTypes::v1_26_20::MaterialType material) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getMaxHeight() const;
#else // @header-generator platform
    virtual void blockEvent(::BlockPos const& pos, int b0, int b1) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension& getDimension() const;
#else // @header-generator platform
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension const& getDimensionConst() const;
#else // @header-generator platform
    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension& getDimension();
#else // @header-generator platform
    virtual void
    fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunkAt(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const&) const;
#else // @header-generator platform
    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(int, int) const;
#else // @header-generator platform
    virtual void fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Level& getLevel();
#else // @header-generator platform
    virtual void fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ILevel& getILevel() const;
#else // @header-generator platform
    virtual ::AABB getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelSeed64 getLevelSeed64() const;
#else // @header-generator platform
    virtual ::HitResult clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock,
        bool                                                                     stopOnFirstLiquidHit
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const;
#else // @header-generator platform
    virtual ::HitResult clip(::ClipParameters const& parameters) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getAboveTopSolidBlock(int, int, bool, bool) const;
#else // @header-generator platform
    virtual bool isInWall(::Vec3 const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, int, int) const;
#else // @header-generator platform
    virtual bool isUnderWater(::BlockPos const& pos, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual void fireBlockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            flags,
        ::BlockChangedEventTarget      eventTarget,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       source
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<AABB>& fetchAABBs(::AABB const&, bool);
#else // @header-generator platform
    virtual void fireBlockEntityChanged(::BlockActor& te) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<AABB>& fetchCollisionShapes(::AABB const&, bool, std::optional<const EntityContext>, std::vector<AABB>*);
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HitResult clip(::ClipParameters const&) const;
#else // @header-generator platform
    virtual ::Block const& getBlock(::BlockPos const& pos, uint layer) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HitResult clip(::Vec3 const&, ::Vec3 const&, bool, ::ShapeType, int, bool, bool, ::Actor*, std::function<bool (const BlockSource&, const Block&, bool)> const&, bool) const;
#else // @header-generator platform
    virtual ::BlockActor const* getBlockEntity(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ChunkSource& getChunkSource();
#else // @header-generator platform
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlockingBlock(int, int, int) const;
#else // @header-generator platform
    virtual ::Block const& getLiquidBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlockingBlock(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool hasBlock(::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool areChunksFullyLoaded(::BlockPos const&, int) const;
#else // @header-generator platform
    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3);
#else // @header-generator platform
    virtual bool setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDoBlockDrops(::Actor const*) const;
#else // @header-generator platform
    virtual bool removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDoContainedItemDrops(::Actor const*) const;
#else // @header-generator platform
    virtual bool isSolidBlockingBlock(int x, int y, int z) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInstaticking(::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isSolidBlockingBlock(::BlockPos const& p) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkBlockDestroyPermissions(::Actor&, ::BlockPos const&, ::ItemStackBase const&, bool);
#else // @header-generator platform
    virtual ::ILevel& getILevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool);
#else // @header-generator platform
    virtual ::LevelSeed64 getLevelSeed64() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*);
#else // @header-generator platform
    virtual ::ChunkSource& getChunkSource() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBlockChanged(::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::BlockChangedEventTarget, ::ActorBlockSyncMessage const*, ::Actor*);
#else // @header-generator platform
    virtual bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBlockEntityChanged(::BlockActor&);
#else // @header-generator platform
    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockEvent(::BlockPos const&, int, int);
    // clang-format on
#else // @header-generator platform
    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockSource(::ChunkSource&, bool, bool);

    MCNAPI BlockSource(::Level&, ::Dimension&, ::ChunkSource&, bool, bool, bool);

    MCNAPI void _blockChanged(
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        bool,
        ::ActorBlockSyncMessage const*,
        ::Actor*
#else // @header-generator platform
    MCAPI BlockSource(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fetchEntityHelper(
        ::WeakEntityRef const&,
        ::gsl::span<gsl::not_null<const Actor*>> const&,
        ::AABB const&,
        bool,
        std::function<bool(Actor*)>
#else // @header-generator platform
    MCAPI void _blockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 previousBlock,
        int                            updateFlags,
        bool                           fireEvent,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       blockChangeSource
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _fetchEntityHelper(::WeakEntityRef const&, ::ActorType, ::AABB const&, ::Actor const*, std::function<bool(Actor*)>);

    MCNAPI ::Brightness _getRawBrightness(::BlockPos const&, ::Brightness const, bool) const;

    MCNAPI void addToRandomTickingQueue(::BlockPos const&, ::Block const&, int, int, bool);

    MCNAPI void addToRandomTickingQueuePercentChance(::BlockPos const&, ::Block const&, float, int, bool);

    MCNAPI void addToTickingQueue(::BlockPos const&, ::Block const&, int, int, bool);

    MCNAPI bool allowsRunes(::BlockPos const&);

    MCNAPI bool areAllChunksLoaded(::BlockPos const&, ::BlockVolume&) const;

    MCNAPI bool areChunksFullyLoaded(::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool biomeAtPosHasTag(::BlockPos const&, ::IDType<BiomeTagIDType> const&) const;

    MCNAPI void blockEvent(int, int, int, int, int);

    MCNAPI bool canProvideSupport(::BlockPos const&, uchar, ::BlockSupportType) const;

    MCNAPI bool canRedstoneWirePassThrough(::BlockPos const&) const;

    MCNAPI bool canSeeSky(::BlockPos const&) const;

    MCNAPI bool canSeeSky(int, int, int) const;

    MCNAPI bool canSeeSkyFromBelowWater(::BlockPos const&);

    MCNAPI bool containsAnyBlockInBox(::BoundingBox const&, ::brstd::function_ref<bool(const Block&)>);

    MCNAPI bool containsAnyBlockOfType(::BlockPos const&, ::BlockPos const&, ::Block const&) const;

    MCNAPI bool containsAnySolidBlocking(::AABB const&) const;

    MCNAPI ulong countBlocksOfType(::BlockDescriptor const&, ::BlockPos const&, ::BlockPos const&, ulong) const;

    MCNAPI ::gsl::span<gsl::not_null<Actor*>> fetchActors(::ActorDefinitionIdentifier const&, ::AABB const&);

    MCNAPI std::vector<BlockActor*> fetchBlockEntities(::BlockActorType, ::AABB const&) const;

    MCNAPI std::vector<BlockActor*> const& fetchBlockEntities(::AABB const&);

    MCNAPI void fetchBlockEntities(::AABB const&, std::vector<BlockActor*>&, bool);

    MCNAPI bool fetchBlocks(::BlockPos const&, ::BlockVolume&) const;

    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    fetchBlocksInBox(::BoundingBox const&, ::brstd::function_ref<bool(const Block&)>);

    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    fetchBlocksInBoxSorted(::BoundingBox const&, ::brstd::function_ref<bool(const Block&)>);

    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    fetchBlocksInCylinder(::BlockPos const&, uint, uint, ::brstd::function_ref<bool(const Block&)>);

    MCNAPI ::gsl::span<const BlockDataFetchResult<Block>>
    fetchBlocksInCylinderSorted(::BlockPos const&, uint, uint, ::brstd::function_ref<bool(const Block&)>);

    MCNAPI ::gsl::span<gsl::not_null<Actor*>>
    fetchEntities(::gsl::span<gsl::not_null<const Actor*>>, ::AABB const&, bool, bool, std::function<bool(Actor*)>);

    MCNAPI std::vector<Actor*> const& fetchEntities2(::ActorType, ::AABB const&, bool);

    MCNAPI ::Actor* fetchNearestEntityOfType(::Actor const*, ::AABB const&, ::ActorType);

    MCNAPI ::gsl::span<gsl::not_null<Actor*>> fetchPlayers(::AABB const&, ::Actor const*, std::function<bool(Actor*)>);

    MCNAPI void fetchRenderBlockActorComponents(
        ::AABB const&,
        std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>&,
        bool
#else // @header-generator platform
    MCAPI void _fetchEntityHelper(
        ::WeakEntityRef const&                              entityRef,
        ::gsl::span<::gsl::not_null<::Actor const*>> const& ignoredEntities,
        ::AABB const&                                       bb,
        bool                                                useHitbox,
        ::std::function<bool(::Actor*)>                     selector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool findNextTopSolidBlockAbove(::BlockPos&);
#else // @header-generator platform
    MCAPI ::Brightness _getRawBrightness(::BlockPos const& pos, ::Brightness skyDarken, bool accountForNight) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool findNextTopSolidBlockUnder(::BlockPos&);

    MCNAPI void fireAreaChanged(::BlockPos const&, ::BlockPos const&);

    MCNAPI void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>);

    MCNAPI void fireBrightnessChanged(::BlockPos const&);

    MCNAPI void fireEntityChanged(::Actor&);

    MCNAPI std::vector<AABB>& getAABBFetchResultCache();

    MCNAPI short getAllocatedHeightAt(::BlockPos const&);

    MCNAPI ::Biome const& getBiome(::BlockPos const&) const;

    MCNAPI ::BiomeIdLatticeBatch getBiomeIdsInBatch(::BlockPos const&, int, int) const;

    MCNAPI ::BlockActor* getBlockEntity(::BlockPos const&);

    MCNAPI ::BrightnessPair getBrightnessPair(::BlockPos const&) const;

    MCNAPI ::BrightnessPair getDefaultBrightness() const;

    MCNAPI int getGrassColor(::BlockPos const&) const;

    MCNAPI short getHeightmap(::BlockPos const&) const;

    MCNAPI short getHeightmap(int, int);

    MCNAPI ::BlockPos getHeightmapPos(::BlockPos const&) const;

    MCNAPI ::Level& getLevel() const;

    MCNAPI ::Level const& getLevelConst() const;

    MCNAPI ::BrightnessPair getLightColor(::BlockPos const&, ::Brightness) const;

    MCNAPI bool getPublicSource() const;

    MCNAPI ::Brightness getRawBrightness(::BlockPos const&, bool) const;

    MCNAPI ::Brightness getRawBrightnessWithManualDarken(::BlockPos const&, ::Brightness const, bool) const;

    MCNAPI float getSeenPercent(::Vec3 const&, ::AABB const&);

    MCNAPI int getSkylightBrightness(::BlockPos const&) const;

    MCNAPI ::Biome const& getSurfaceBiome(::BlockPos const&) const;

    MCNAPI float getTextureShiftNoise() const;

    MCNAPI ::BlockTickingQueue* getTickingQueue(::BlockPos const&, ::TickingQueueType, bool) const;

    MCNAPI short getVoidHeight() const;

    MCNAPI int getWaterColor(::BlockPos const&) const;

    MCNAPI ::WellKnownBiomeTags const& getWellKnownBiomeTags() const;

    MCNAPI ::LevelChunk* getWritableChunk(::ChunkPos const&);

    MCNAPI bool hasChunksAt(::BlockPos const&, ::BlockPos const&, bool) const;

    MCNAPI std::pair<bool, std::optional<SubChunkPos>> hasSubChunksAt(::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool hasTickInCurrentTick(::BlockPos const&) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&, ::Block const&) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&, ::BlockType const&) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&, ::TickingQueueType) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&, ::Block const&, ::TickingQueueType) const;

    MCNAPI bool hasTickInPendingTicks(::BlockPos const&, ::BlockType const&, ::TickingQueueType) const;

    MCNAPI bool hasUntickedNeighborChunk(::ChunkPos const&, int) const;

    MCNAPI bool isChunkFullyLoaded(::ChunkPos const&, ::ChunkSource const&) const;

    MCNAPI bool isConsideredSolidBlock(::BlockPos const&) const;

    MCNAPI bool isEmptyBlock(::BlockPos const&) const;

    MCNAPI bool isEmptyWaterBlock(::BlockPos const&) const;

    MCNAPI bool isNearUnloadedChunks(::ChunkPos const&) const;

    MCNAPI bool isPositionUnderSnow(::Vec3 const&);

    MCNAPI bool isTouchingMaterial(::BlockPos const&, ::SharedTypes::v1_26_20::MaterialType const) const;

    MCNAPI bool isUnderWater(::BlockPos const&) const;

    MCNAPI bool isUnobstructedByEntities(::AABB const&, ::Actor const*);

    MCNAPI bool isWithinHeightLimits(int) const;

    MCNAPI void neighborChanged(::BlockPos const&, ::BlockPos const&);

    MCNAPI void postGameEvent(::Actor*, ::GameEvent const&, ::Vec3 const&, ::Block const*);

    MCNAPI std::shared_ptr<BlockActor> removeBlockEntity(::BlockPos const&);

    MCNAPI void removeFromRandomTickingQueue(::BlockPos const&, ::Block const&);

    MCNAPI void removeFromTickingQueue(::BlockPos const&, ::Block const&);

    MCNAPI bool setBlock(
        ::BlockPos const&,
        ::Block const&,
        int,
        std::shared_ptr<BlockActor>,
        ::ActorBlockSyncMessage const*,
        ::BlockChangeContext const&
#else // @header-generator platform
    MCAPI void addToRandomTickingQueue(
        ::BlockPos const& pos,
        ::Block const&    block,
        int               tickDelay,
        int               priorityOffset,
        bool              skipOverrides
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setBlockAndRetainCompatibleBlockActor(::BlockPos const&, ::Block const&, int);
#else // @header-generator platform
    MCAPI void addToRandomTickingQueuePercentChance(
        ::BlockPos const& pos,
        ::Block const&    block,
        float             percentChance,
        int               priorityOffset,
        bool              skipOverrides
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setBlockNoUpdate(::BlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI bool areChunksFullyLoaded(::BlockPos const& min, ::BlockPos const& max) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setBlockSimple(::BlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI bool biomeAtPosHasTag(::BlockPos const& pos, ::IDType<::BiomeTagIDType> const& tagId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setBorderBlock(::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI bool canProvideSupport(::BlockPos const& pos, uchar face, ::BlockSupportType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setExtraBlockSimple(::BlockPos const&, ::Block const&);
#else // @header-generator platform
    MCAPI bool canSeeSky(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setGrassColor(int, ::BlockPos const&, int);
#else // @header-generator platform
    MCAPI bool canSeeSkyFromBelowWater(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setIsPersistentBlockSource();
#else // @header-generator platform
    MCAPI bool containsAnyBlockOfType(::BlockPos const& min, ::BlockPos const& max, ::Block const& type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setLiquidBlock(::BlockPos const&, ::Block const&, bool, int);
#else // @header-generator platform
    MCAPI bool containsAnySolidBlocking(::AABB const& box) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRandomTickingQueue(::BlockTickingQueue&);
#else // @header-generator platform
    MCAPI uint64 countBlocksOfType(
        ::BlockDescriptor const& blockDescriptor,
        ::BlockPos const&        min,
        ::BlockPos const&        max,
        uint64                   maxCount
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTickingQueue(::BlockTickingQueue&);
#else // @header-generator platform
    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchActors(::ActorDefinitionIdentifier const& actorId, ::AABB const& bb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setWaterColor(int, ::BlockPos const&, int);
#else // @header-generator platform
    MCAPI ::std::vector<::BlockActor*> fetchBlockEntities(::BlockActorType blockActorTypeId, ::AABB const& bb) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* tryGetBiome(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI void
    fetchBlockEntities(::AABB const& bb, ::std::vector<::BlockActor*>& blockEntityList, bool withPreservedEntities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateConnectionsAt(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const>
    fetchBlocksInBox(::BoundingBox const& box, ::brstd::function_ref<bool(::Block const&)> predicate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateNeighborsAt(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::gsl::span<::BlockDataFetchResult<::Block> const> fetchBlocksInCylinder(
        ::BlockPos const&                           centerPos,
        uint                                        radius,
        uint                                        height,
        ::brstd::function_ref<bool(::Block const&)> predicate
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateNeighborsAtExceptFromFacing(::BlockPos const&, int);
#else // @header-generator platform
    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::gsl::span<::gsl::not_null<::Actor const*>> ignoredEntities,
        ::AABB const&                                bb,
        bool                                         useHitbox,
        bool                                         getDisplayEntities,
        ::std::function<bool(::Actor*)>              selector
    );

    MCAPI ::std::vector<::Actor*> const& fetchEntities2(::ActorType type, ::AABB const& aabb, bool ignoreTargetType);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    fetchPlayers(::AABB const& bb, ::Actor const* except, ::std::function<bool(::Actor*)> selector);

#ifdef LL_PLAT_C
    MCAPI void fetchRenderBlockActorComponents(
        ::AABB const&                                                         bb,
        ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>& blockEntityList,
        bool                                                                  withPreservedEntities
    );
#endif

    MCAPI bool findNextTopSolidBlockUnder(::BlockPos& pos);

    MCAPI void fireBlockEntityAboutToBeRemoved(::std::shared_ptr<::BlockActor> te);

    MCAPI ::Biome const& getBiome(::BlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI ::BiomeIdLatticeBatch getBiomeIdsInBatch(::BlockPos const& centerPos, int areaOffset, int gridOffset) const;
#endif

    MCFOLD ::BlockActor* getBlockEntity(::BlockPos const& pos);

    MCAPI ::BrightnessPair getBrightnessPair(::BlockPos const& pos) const;

    MCAPI ::BlockPos getHeightmapPos(::BlockPos const& xzPos) const;

#ifdef LL_PLAT_C
    MCAPI ::BrightnessPair getLightColor(::BlockPos const& pos, ::Brightness minBlockLight) const;
#endif

    MCAPI float getSeenPercent(::Vec3 const& center, ::AABB const& bb);

    MCAPI int getSkylightBrightness(::BlockPos const& pos) const;

#ifdef LL_PLAT_C
    MCAPI ::Biome const& getSurfaceBiome(::BlockPos const& pos) const;
#endif

    MCAPI ::std::pair<bool, ::std::optional<::SubChunkPos>>
    hasSubChunksAt(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool hasTickInCurrentTick(::BlockPos const& pos) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::TickingQueueType queueType) const;

    MCAPI bool hasTickInPendingTicks(::BlockPos const& pos, ::Block const& block, ::TickingQueueType queueType) const;

    MCAPI bool
    hasTickInPendingTicks(::BlockPos const& pos, ::BlockType const& block, ::TickingQueueType queueType) const;

#ifdef LL_PLAT_C
    MCAPI bool isPositionUnderSnow(::Vec3 const& p);
#endif

    MCAPI bool isTouchingMaterial(::BlockPos const& pos, ::SharedTypes::v1_26_20::MaterialType type) const;

    MCAPI bool isUnobstructedByEntities(::AABB const& aabb, ::Actor const* ignoreEntity);

    MCAPI void neighborChanged(::BlockPos const& neighPos, ::BlockPos const& myPos);

    MCAPI bool setBlock(
        ::BlockPos const&               pos,
        ::Block const&                  block,
        int                             updateFlags,
        ::std::shared_ptr<::BlockActor> blockEntity,
        ::ActorBlockSyncMessage const*  syncMsg,
        ::BlockChangeContext const&     changeSourceContext
    );

    MCAPI bool setBlockAndRetainCompatibleBlockActor(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI bool setBlockSimple(::BlockPos const& pos, ::Block const& block);

    MCAPI void updateConnectionsAt(::BlockPos const& pos);

    MCAPI void updateNeighborsAt(::BlockPos const& pos);

    MCAPI void updateNeighborsAtExceptFromFacing(::BlockPos const& pos, int skipFacing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool containsAnyLiquid(::IConstBlockSource const&, ::AABB const&);

    MCNAPI static bool doesIntersect(
        ::IConstBlockSource const&,
        ::AABB const&,
        ::GetCollisionShapeInterface const&,
        std::vector<AABB>&,
        bool
    );

    MCNAPI static ::Block const& getEmptyBlock();

    MCNAPI static bool isEmptyBlock(::Block const&);

    MCNAPI static bool isEmptyWaterBlock(::Block const&);
#else // @header-generator platform
    MCAPI static bool containsAnyLiquid(::IConstBlockSource const& region, ::AABB const& box);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ChunkSource&, bool, bool);

    MCNAPI void* $ctor(::Level&, ::Dimension&, ::ChunkSource&, bool, bool, bool);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Level&       level,
        ::Dimension&   dimension,
        ::ChunkSource& source,
        bool           publicSource,
        bool           allowUnpopulatedChunks,
        bool           allowClientTickingChanges
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(::BlockPos const&, uint) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::BlockSource> $getWeakRef();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Level& $getLevel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockActor const* $getBlockEntity(::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Dimension& $getDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD ::Dimension const& $getDimensionConst() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getLiquidBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::DimensionType $getDimensionId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBlock(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $shouldFireEvents(::LevelChunk const& c) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $containsAnyLiquid(::AABB const&) const;
#else // @header-generator platform
    MCAPI bool $isInstaticking(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const;
#else // @header-generator platform
    MCAPI void $addListener(::BlockSourceListener& l);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInWall(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI void $removeListener(::BlockSourceListener& l);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isUnderWater(::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::LevelChunk* $getChunk(int x, int z) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Material const& $getMaterial(int, int, int) const;
#else // @header-generator platform
    MCAPI ::LevelChunk* $getChunk(::ChunkPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Material const& $getMaterial(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::LevelChunk* $getChunkAt(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBorderBlock(::BlockPos const) const;

    MCNAPI bool $hasChunk(::ChunkPos const&, bool) const;

    MCNAPI bool $hasChunksAt(::AABB const&, bool) const;

    MCNAPI bool $hasChunksAt(::BlockPos const&, int, bool) const;

    MCNAPI bool $hasChunksAt(::Bounds const&, bool) const;

    MCNAPI ::DimensionType $getDimensionId() const;

    MCNAPI bool $shouldFireEvents(::LevelChunk const&) const;

    MCNAPI void $fetchAABBs(std::vector<AABB>&, ::AABB const&, bool) const;

    MCNAPI void $fetchCollisionShapes(
        std::vector<AABB>&,
        ::AABB const&,
        bool,
        ::optional_ref<const GetCollisionShapeInterface>,
        std::vector<AABB>*
#else // @header-generator platform
    MCAPI short $getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fetchCollisionShapesAndBlocks(
        std::vector<BlockSourceVisitor::CollisionShape>&,
        ::AABB const&,
        bool,
        ::optional_ref<const GetCollisionShapeInterface>,
        std::vector<AABB>*
    ) const;
#else // @header-generator platform
    MCAPI short $getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AABB
    $getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const;
#else // @header-generator platform
    MCAPI short $getHeight(::brstd::function_ref<bool(::Block const&)> const& type, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBrightness(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI short $getHeight(::brstd::function_ref<bool(::Block const&)> const& type, int x, int z) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<BlockSource> $getWeakRef();
#else // @header-generator platform
    MCAPI ::Material const& $getMaterial(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addListener(::BlockSourceListener&);
#else // @header-generator platform
    MCAPI ::Material const& $getMaterial(int x, int y, int z) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeListener(::BlockSourceListener&);
#else // @header-generator platform
    MCAPI short $getMaxHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<gsl::not_null<Actor*>>
    $fetchEntities(::ActorType, ::AABB const&, ::Actor const*, std::function<bool(Actor*)>);
#else // @header-generator platform
    MCAPI short $getMinHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<gsl::not_null<Actor*>> $fetchEntities(::Actor const*, ::AABB const&, bool, bool);
#else // @header-generator platform
    MCAPI bool $hasBorderBlock(::BlockPos const pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&);
#else // @header-generator platform
    MCAPI float $getBrightness(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setExtraBlock(::BlockPos const&, ::Block const&, int);

    MCNAPI bool $removeBlock(::BlockPos const&, ::BlockChangeContext const&);

    MCNAPI short $getMinHeight() const;

    MCNAPI short $getMaxHeight() const;

    MCNAPI ::Dimension& $getDimension() const;

    MCNAPI ::Dimension const& $getDimensionConst() const;

    MCNAPI ::LevelChunk* $getChunkAt(::BlockPos const&) const;

    MCNAPI ::LevelChunk* $getChunk(::ChunkPos const&) const;

    MCNAPI ::LevelChunk* $getChunk(int, int) const;

    MCNAPI ::Level& $getLevel();

    MCNAPI ::ILevel& $getILevel() const;

    MCNAPI ::LevelSeed64 $getLevelSeed64() const;

    MCNAPI short $getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const;

    MCNAPI short $getAboveTopSolidBlock(int, int, bool, bool) const;

    MCNAPI short $getHeight(::brstd::function_ref<bool(const Block&)> const&, int, int) const;

    MCNAPI short $getHeight(::brstd::function_ref<bool(const Block&)> const&, ::BlockPos const&) const;

    MCNAPI std::vector<AABB>& $fetchAABBs(::AABB const&, bool);

    MCNAPI std::vector<AABB>&
           $fetchCollisionShapes(::AABB const&, bool, std::optional<const EntityContext>, std::vector<AABB>*);

    MCNAPI ::HitResult $clip(::ClipParameters const&) const;

    MCNAPI ::HitResult $clip(
        ::Vec3 const&,
        ::Vec3 const&,
        bool,
        ::ShapeType,
        int,
        bool,
        bool,
        ::Actor*,
        std::function<bool(const BlockSource&, const Block&, bool)> const&,
        bool
    ) const;

    MCNAPI ::ChunkSource& $getChunkSource();

    MCNAPI bool $isSolidBlockingBlock(int, int, int) const;

    MCNAPI bool $isSolidBlockingBlock(::BlockPos const&) const;

    MCNAPI bool $areChunksFullyLoaded(::BlockPos const&, int) const;

    MCNAPI bool $mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3);

    MCNAPI bool $canDoBlockDrops(::Actor const*) const;

    MCNAPI bool $canDoContainedItemDrops(::Actor const*) const;

    MCNAPI bool $isInstaticking(::BlockPos const&) const;

    MCNAPI bool $checkBlockDestroyPermissions(::Actor&, ::BlockPos const&, ::ItemStackBase const&, bool);

    MCNAPI bool $checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool);

    MCNAPI void $postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*);

    MCNAPI void $fireBlockChanged(
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::BlockChangedEventTarget,
        ::ActorBlockSyncMessage const*,
        ::Actor*
#else // @header-generator platform
    MCAPI bool $mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireBlockEntityChanged(::BlockActor&);
#else // @header-generator platform
    MCAPI bool $canDoBlockDrops(::Actor const* instigatingActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $blockEvent(::BlockPos const&, int, int);
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $canDoContainedItemDrops(::Actor const* instigatingActor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI bool $hasChunk(::ChunkPos const& pos, bool serverSideOnly) const;

    MCAPI bool $hasChunksAt(::Bounds const& bounds, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::BlockPos const& pos, int r, bool ignoreClientChunk) const;

    MCAPI bool $hasChunksAt(::AABB const& bb, bool ignoreClientChunk) const;

    MCAPI bool $areChunksFullyLoaded(::BlockPos const& pos, int r) const;

    MCAPI bool $containsAnyLiquid(::AABB const& box) const;

    MCAPI bool $containsMaterial(::AABB const& box, ::SharedTypes::v1_26_20::MaterialType material) const;

    MCAPI void $blockEvent(::BlockPos const& pos, int b0, int b1);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> $fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    );

    MCAPI void
    $fetchAABBs(::std::vector<::AABB>& shapes, ::AABB const& intersectTestBox, bool withUnloadedChunks) const;

    MCAPI ::std::vector<::AABB>& $fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks);

    MCAPI ::std::vector<::AABB>& $fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    );

    MCAPI void $fetchCollisionShapes(
        ::std::vector<::AABB>&                             shapes,
        ::AABB const&                                      intersectTestBox,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity,
        ::std::vector<::AABB>*                             tempShapes
    ) const;

    MCAPI void $fetchCollisionShapesAndBlocks(
        ::std::vector<::BlockSourceVisitor::CollisionShape>& shapes,
        ::AABB const&                                        intersectTestBox,
        bool                                                 withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const>   entity,
        ::std::vector<::AABB>*                               tempShapes
    ) const;

    MCAPI ::AABB $getTallestCollisionShape(
        ::AABB const&                                      intersectTestBox,
        float*                                             actualSurfaceOffset,
        bool                                               withUnloadedChunks,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::HitResult $clip(
        ::Vec3 const&                                                            A,
        ::Vec3 const&                                                            B,
        bool                                                                     checkAgainstLiquid,
        ::ShapeType                                                              shapeType,
        int                                                                      maxDistance,
        bool                                                                     ignoreBorderBlocks,
        bool                                                                     fullOnly,
        ::Actor*                                                                 actor,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock,
        bool                                                                     stopOnFirstLiquidHit
    ) const;

    MCAPI ::HitResult $clip(::ClipParameters const& parameters) const;

    MCAPI bool $isInWall(::Vec3 const& pos) const;

    MCAPI bool $isUnderWater(::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $fireBlockChanged(
        ::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        ::Block const&                 oldBlock,
        int                            flags,
        ::BlockChangedEventTarget      eventTarget,
        ::ActorBlockSyncMessage const* syncMsg,
        ::Actor*                       source
    );

    MCAPI void $fireBlockEntityChanged(::BlockActor& te);

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos, uint layer) const;

    MCFOLD ::BlockActor const* $getBlockEntity(::BlockPos const& pos) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getLiquidBlock(::BlockPos const& pos) const;

    MCAPI bool $hasBlock(::BlockPos const& pos) const;

    MCAPI bool $setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    );

    MCAPI bool $setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI bool $removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext);

    MCAPI bool $isSolidBlockingBlock(int x, int y, int z) const;

    MCAPI bool $isSolidBlockingBlock(::BlockPos const& p) const;

    MCFOLD ::ILevel& $getILevel() const;

    MCAPI ::LevelSeed64 $getLevelSeed64() const;

    MCFOLD ::ChunkSource& $getChunkSource();

    MCAPI bool $checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI bool $checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    );

    MCAPI void $postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    );


#endif // @header-generator platform
    // NOLINTEND
};

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
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/IBlockSource.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/TickingQueueType.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Biome;
class BlockActor;
class BlockChangeContext;
class BlockDescriptor;
class BlockSourceListener;
class BlockTickingQueue;
class BlockType;
class BlockVolume;
class BoundingBox;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class GetCollisionShapeInterface;
class HitResult;
class HitboxComponent;
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
struct ActorUniqueID;
struct BiomeIdLatticeBatch;
struct Bounds;
struct Brightness;
struct ClipParameters;
struct DimensionType;
struct Tick;
struct WellKnownBiomeTags;
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

class BlockSource : public ::IBlockSource,
                    public ::EnableGetWeakRef<BlockSource>,
                    public ::std::enable_shared_from_this<BlockSource> {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockSource();

    virtual ::Block const& getBlock(::BlockPos const&, uint) const;

    virtual ::Block const& getBlock(::BlockPos const&) const;

    virtual ::BlockActor const* getBlockEntity(::BlockPos const&) const;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const;

    virtual ::Block const& getLiquidBlock(::BlockPos const&) const;

    virtual bool hasBlock(::BlockPos const&) const;

    virtual bool containsAnyLiquid(::AABB const&) const;

    virtual bool containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const;

    virtual bool isInWall(::Vec3 const&) const;

    virtual bool isUnderWater(::BlockPos const&, ::Block const&) const;

    virtual ::Material const& getMaterial(int, int, int) const;

    virtual ::Material const& getMaterial(::BlockPos const&) const;

    virtual bool hasBorderBlock(::BlockPos const) const;

    virtual bool hasChunk(::ChunkPos const&, bool) const;

    virtual bool hasChunksAt(::AABB const&, bool) const;

    virtual bool hasChunksAt(::BlockPos const&, int, bool) const;

    virtual bool hasChunksAt(::Bounds const&, bool) const;

    virtual ::DimensionType getDimensionId() const;

    virtual bool shouldFireEvents(::LevelChunk const&) const;

    virtual void fetchAABBs(std::vector<AABB>&, ::AABB const&, bool) const;

    virtual void fetchCollisionShapes(std::vector<AABB>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const;

    virtual void fetchCollisionShapesAndBlocks(std::vector<BlockSourceVisitor::CollisionShape>&, ::AABB const&, bool, ::optional_ref<const GetCollisionShapeInterface>, std::vector<AABB>*) const;

    virtual ::AABB getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual float getBrightness(::BlockPos const&) const;

    virtual ::WeakRef<BlockSource> getWeakRef();

    virtual void addListener(::BlockSourceListener&);

    virtual void removeListener(::BlockSourceListener&);

    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::ActorType, ::AABB const&, ::Actor const*, std::function<bool (Actor*)>);

    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::Actor const*, ::AABB const&, bool, bool);

    virtual bool setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&);

    virtual bool setExtraBlock(::BlockPos const&, ::Block const&, int);

    virtual bool removeBlock(::BlockPos const&, ::BlockChangeContext const&);

    virtual short getMinHeight() const;

    virtual short getMaxHeight() const;

    virtual ::Dimension& getDimension() const;

    virtual ::Dimension const& getDimensionConst() const;

    virtual ::Dimension& getDimension();

    virtual ::LevelChunk* getChunkAt(::BlockPos const&) const;

    virtual ::LevelChunk* getChunk(::ChunkPos const&) const;

    virtual ::LevelChunk* getChunk(int, int) const;

    virtual ::Level& getLevel();

    virtual ::ILevel& getILevel() const;

    virtual ::LevelSeed64 getLevelSeed64() const;

    virtual short getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const;

    virtual short getAboveTopSolidBlock(int, int, bool, bool) const;

    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, int, int) const;

    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, ::BlockPos const&) const;

    virtual std::vector<AABB>& fetchAABBs(::AABB const&, bool);

    virtual std::vector<AABB>& fetchCollisionShapes(::AABB const&, bool, std::optional<const EntityContext>, std::vector<AABB>*);

    virtual ::HitResult clip(::ClipParameters const&) const;

    virtual ::HitResult clip(::Vec3 const&, ::Vec3 const&, bool, ::ShapeType, int, bool, bool, ::Actor*, std::function<bool (const BlockSource&, const Block&, bool)> const&, bool) const;

    virtual ::ChunkSource& getChunkSource();

    virtual bool isSolidBlockingBlock(int, int, int) const;

    virtual bool isSolidBlockingBlock(::BlockPos const&) const;

    virtual bool areChunksFullyLoaded(::BlockPos const&, int) const;

    virtual bool mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3);

    virtual bool canDoBlockDrops(::Actor const*) const;

    virtual bool canDoContainedItemDrops(::Actor const*) const;

    virtual bool isInstaticking(::BlockPos const&) const;

    virtual bool checkBlockDestroyPermissions(::Actor&, ::BlockPos const&, ::ItemStackBase const&, bool);

    virtual bool checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool);

    virtual void postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*);

    virtual void fireBlockChanged(::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::BlockChangedEventTarget, ::ActorBlockSyncMessage const*, ::Actor*);

    virtual void fireBlockEntityChanged(::BlockActor&);

    virtual void blockEvent(::BlockPos const&, int, int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI void _fetchEntityHelper(
        ::WeakEntityRef const&,
        ::gsl::span<gsl::not_null<const Actor*>> const&,
        ::AABB const&,
        bool,
        std::function<bool(Actor*)>
    );

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
    );

    MCNAPI bool findNextTopSolidBlockAbove(::BlockPos&);

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
    );

    MCNAPI bool setBlockAndRetainCompatibleBlockActor(::BlockPos const&, ::Block const&, int);

    MCNAPI bool setBlockNoUpdate(::BlockPos const&, ::Block const&);

    MCNAPI bool setBlockSimple(::BlockPos const&, ::Block const&);

    MCNAPI void setBorderBlock(::BlockPos const&, bool);

    MCNAPI bool setExtraBlockSimple(::BlockPos const&, ::Block const&);

    MCNAPI void setGrassColor(int, ::BlockPos const&, int);

    MCNAPI void setIsPersistentBlockSource();

    MCNAPI bool setLiquidBlock(::BlockPos const&, ::Block const&, bool, int);

    MCNAPI void setRandomTickingQueue(::BlockTickingQueue&);

    MCNAPI void setTickingQueue(::BlockTickingQueue&);

    MCNAPI void setWaterColor(int, ::BlockPos const&, int);

    MCNAPI ::Biome const* tryGetBiome(::BlockPos const&) const;

    MCNAPI void updateConnectionsAt(::BlockPos const&);

    MCNAPI void updateNeighborsAt(::BlockPos const&);

    MCNAPI void updateNeighborsAtExceptFromFacing(::BlockPos const&, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkSource&, bool, bool);

    MCNAPI void* $ctor(::Level&, ::Dimension&, ::ChunkSource&, bool, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getBlock(::BlockPos const&, uint) const;

    MCNAPI ::Block const& $getBlock(::BlockPos const&) const;

    MCNAPI ::BlockActor const* $getBlockEntity(::BlockPos const&) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const&) const;

    MCNAPI ::Block const& $getLiquidBlock(::BlockPos const&) const;

    MCNAPI bool $hasBlock(::BlockPos const&) const;

    MCNAPI bool $containsAnyLiquid(::AABB const&) const;

    MCNAPI bool $containsMaterial(::AABB const&, ::SharedTypes::v1_26_20::MaterialType) const;

    MCNAPI bool $isInWall(::Vec3 const&) const;

    MCNAPI bool $isUnderWater(::BlockPos const&, ::Block const&) const;

    MCNAPI ::Material const& $getMaterial(int, int, int) const;

    MCNAPI ::Material const& $getMaterial(::BlockPos const&) const;

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
    ) const;

    MCNAPI void $fetchCollisionShapesAndBlocks(
        std::vector<BlockSourceVisitor::CollisionShape>&,
        ::AABB const&,
        bool,
        ::optional_ref<const GetCollisionShapeInterface>,
        std::vector<AABB>*
    ) const;

    MCNAPI ::AABB
    $getTallestCollisionShape(::AABB const&, float*, bool, ::optional_ref<const GetCollisionShapeInterface>) const;

    MCNAPI float $getBrightness(::BlockPos const&) const;

    MCNAPI ::WeakRef<BlockSource> $getWeakRef();

    MCNAPI void $addListener(::BlockSourceListener&);

    MCNAPI void $removeListener(::BlockSourceListener&);

    MCNAPI ::gsl::span<gsl::not_null<Actor*>>
    $fetchEntities(::ActorType, ::AABB const&, ::Actor const*, std::function<bool(Actor*)>);

    MCNAPI ::gsl::span<gsl::not_null<Actor*>> $fetchEntities(::Actor const*, ::AABB const&, bool, bool);

    MCNAPI bool
    $setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&);

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
    );

    MCNAPI void $fireBlockEntityChanged(::BlockActor&);

    MCNAPI void $blockEvent(::BlockPos const&, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

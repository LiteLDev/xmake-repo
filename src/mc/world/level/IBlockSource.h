#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/vanilla_components/IConstBlockSource.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockChangeContext;
class BlockPos;
class BlockSource;
class BlockSourceListener;
class ChunkPos;
class ChunkSource;
class Dimension;
class EntityContext;
class GameEvent;
class HitResult;
class ILevel;
class ItemStackBase;
class Level;
class LevelChunk;
class LevelSeed64;
class Vec3;
struct ActorBlockSyncMessage;
struct ClipParameters;
// clang-format on

class IBlockSource : public ::IConstBlockSource {
public:
    // IBlockSource inner types define
    using Listener = ::BlockSourceListener;

#if defined(LL_PLAT_A) // @header-generator platform
    using ListenerVector = std::vector<BlockSourceListener*>;
#else // @header-generator platform
    using ListenerVector = ::std::vector<::BlockSourceListener*>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::WeakRef<BlockSource> getWeakRef() = 0;
#else // @header-generator platform
    virtual ::std::vector<::AABB>& fetchAABBs(::AABB const& intersectTestBox, bool withUnloadedChunks) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addListener(::BlockSourceListener&) = 0;
#else // @header-generator platform
    virtual ::std::vector<::AABB>& fetchCollisionShapes(
        ::AABB const&                          intersectTestBox,
        bool                                   withUnloadedChunks,
        ::std::optional<::EntityContext const> entity,
        ::std::vector<::AABB>*                 tempShapes
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeListener(::BlockSourceListener&) = 0;
#else // @header-generator platform
    virtual ::WeakRef<::BlockSource> getWeakRef() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::ActorType, ::AABB const&, ::Actor const*, std::function<bool (Actor*)>) = 0;
#else // @header-generator platform
    virtual void addListener(::BlockSourceListener& l) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<gsl::not_null<Actor*>> fetchEntities(::Actor const*, ::AABB const&, bool, bool) = 0;
#else // @header-generator platform
    virtual void removeListener(::BlockSourceListener& l) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setBlock(::BlockPos const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangeContext const&) = 0;
#else // @header-generator platform
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const* except, ::AABB const& bb, bool useHitbox, bool getDisplayEntities) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setExtraBlock(::BlockPos const&, ::Block const&, int) = 0;
#else // @header-generator platform
    virtual ::gsl::span<::gsl::not_null<::Actor*>> fetchEntities(
        ::ActorType                     entityTypeId,
        ::AABB const&                   bb,
        ::Actor const*                  except,
        ::std::function<bool(::Actor*)> selector
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool removeBlock(::BlockPos const&, ::BlockChangeContext const&) = 0;
#else // @header-generator platform
    virtual bool setBlock(
        ::BlockPos const&              pos,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg,
        ::BlockChangeContext const&    changeSourceContext
    ) = 0;

    virtual bool setExtraBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) = 0;

    virtual bool removeBlock(::BlockPos const& pos, ::BlockChangeContext const& changeSourceContext) = 0;
#endif // @header-generator platform

    virtual short getMinHeight() const = 0;

    virtual short getMaxHeight() const = 0;

    virtual ::Dimension& getDimension() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension const& getDimensionConst() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::Dimension& getDimension() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunkAt(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual ::Dimension const& getDimensionConst() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(::ChunkPos const&) const = 0;
#else // @header-generator platform
    virtual ::LevelChunk* getChunkAt(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LevelChunk* getChunk(int, int) const = 0;
#else // @header-generator platform
    virtual ::LevelChunk* getChunk(int x, int z) const = 0;

    virtual ::LevelChunk* getChunk(::ChunkPos const& pos) const = 0;
#endif // @header-generator platform

    virtual ::Level& getLevel() = 0;

    virtual ::ILevel& getILevel() const = 0;

    virtual ::LevelSeed64 getLevelSeed64() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const = 0;
#else // @header-generator platform
    virtual short getAboveTopSolidBlock(int x, int z, bool includeWater, bool includeLeaves) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getAboveTopSolidBlock(int, int, bool, bool) const = 0;
#else // @header-generator platform
    virtual short getAboveTopSolidBlock(
        ::BlockPos const& pos,
        bool              includeWater,
        bool              includeLeaves,
        bool              iteratePastInitialBlocking
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, int, int) const = 0;
#else // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, ::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool (const Block&)> const&, ::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual short getHeight(::brstd::function_ref<bool(::Block const&)> const& type, int x, int z) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<AABB>& fetchAABBs(::AABB const&, bool) = 0;
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
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<AABB>& fetchCollisionShapes(::AABB const&, bool, std::optional<const EntityContext>, std::vector<AABB>*) = 0;

    virtual ::HitResult clip(::ClipParameters const&) const = 0;

    virtual ::HitResult clip(::Vec3 const&, ::Vec3 const&, bool, ::ShapeType, int, bool, bool, ::Actor*, std::function<bool (const BlockSource&, const Block&, bool)> const&, bool) const = 0;
#else // @header-generator platform
    virtual ::HitResult clip(::ClipParameters const& parameters) const = 0;
#endif // @header-generator platform

    virtual ::ChunkSource& getChunkSource() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlockingBlock(int, int, int) const = 0;
#else // @header-generator platform
    virtual bool isSolidBlockingBlock(::BlockPos const& p) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSolidBlockingBlock(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool isSolidBlockingBlock(int x, int y, int z) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool areChunksFullyLoaded(::BlockPos const&, int) const = 0;
#else // @header-generator platform
    virtual bool areChunksFullyLoaded(::BlockPos const& pos, int r) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::Block const&, ::BlockPos const&, uchar, ::Actor*, bool, ::Vec3) = 0;
#else // @header-generator platform
    virtual bool mayPlace(
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             face,
        ::Actor*          placer,
        bool              ignoreEntities,
        ::Vec3            clickPos
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDoBlockDrops(::Actor const*) const = 0;
#else // @header-generator platform
    virtual bool canDoBlockDrops(::Actor const* instigatingActor) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canDoContainedItemDrops(::Actor const*) const = 0;
#else // @header-generator platform
    virtual bool canDoContainedItemDrops(::Actor const* instigatingActor) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInstaticking(::BlockPos const&) const = 0;
#else // @header-generator platform
    virtual bool isInstaticking(::BlockPos const& pos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkBlockDestroyPermissions(::Actor&, ::BlockPos const&, ::ItemStackBase const&, bool) = 0;
#else // @header-generator platform
    virtual bool checkBlockDestroyPermissions(
        ::Actor&               entity,
        ::BlockPos const&      pos,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkBlockPermissions(::Actor&, ::BlockPos const&, uchar, ::ItemStackBase const&, bool) = 0;
#else // @header-generator platform
    virtual bool checkBlockPermissions(
        ::Actor&               entity,
        ::BlockPos const&      blockPos,
        uchar                  face,
        ::ItemStackBase const& item,
        bool                   generateParticle
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postGameEvent(::Actor*, ::GameEvent const&, ::BlockPos const&, ::Block const*) = 0;
#else // @header-generator platform
    virtual void postGameEvent(
        ::Actor*           source,
        ::GameEvent const& gameEvent,
        ::BlockPos const&  originPos,
        ::Block const*     affectedBlock
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBlockChanged(::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::BlockChangedEventTarget, ::ActorBlockSyncMessage const*, ::Actor*) = 0;
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
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireBlockEntityChanged(::BlockActor&) = 0;
#else // @header-generator platform
    virtual void fireBlockEntityChanged(::BlockActor& te) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void blockEvent(::BlockPos const&, int, int) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void blockEvent(::BlockPos const& pos, int b0, int b1) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

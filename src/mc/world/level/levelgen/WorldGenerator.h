#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"
#include "mc/deps/core/utility/buffer_span.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeArea;
class BiomeSource;
class BlockPos;
class BlockSource;
class BlockVolume;
class BlockVolumeTarget;
class BoundingBox;
class Dimension;
class HashedString;
class LevelChunk;
class Random;
class StructureFeature;
class StructureFeatureRegistry;
namespace br::worldgen { class ChunkAccessor; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct ChunkStructureAccess; }
namespace br::worldgen { struct Structure; }
// clang-format on

class WorldGenerator : public ::ChunkSource, public ::IPreliminarySurfaceProvider {
public:
    // WorldGenerator inner types declare
    // clang-format off
    struct BlockVolumeDimensions;
    // clang-format on

    // WorldGenerator inner types define
    struct BlockVolumeDimensions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mWidth;
        ::ll::TypedStorage<4, 4, uint> mDepth;
        ::ll::TypedStorage<4, 4, uint> mHeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<StructureFeatureRegistry>> mStructureFeatureRegistry;
    ::ll::TypedStorage<4, 40, std::mutex>                               mCreateStructuresAndVisitedPositionsMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable>                  mStructureInstanceWaitVar;
    ::ll::TypedStorage<4, 4, std::atomic<int>>                          mActiveStructureInstanceCreateCount;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>>             mVisitedPositions;
    ::ll::UntypedStorage<4, 4>                                          mThreadLocalHeightmapProvider;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StructureFeatureRegistry>> mStructureFeatureRegistry;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mCreateStructuresAndVisitedPositionsMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>                    mStructureInstanceWaitVar;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                            mActiveStructureInstanceCreateCount;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>             mVisitedPositions;
    ::ll::TypedStorage<4, 4, ::Bedrock::Threading::InstancedThreadLocalValue<::br::worldgen::ChunkAccessor*>>
        mThreadLocalHeightmapProvider;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorldGenerator();
#else // @header-generator platform
    virtual ~WorldGenerator() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;
#else // @header-generator platform
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    virtual bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
#else // @header-generator platform
    virtual bool findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const&);
#else // @header-generator platform
    virtual ::StructureFeature* getStructureFeatureOfType(::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;
#else // @header-generator platform
    virtual void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);
#else // @header-generator platform
    virtual void prepareHeights(
        ::BlockVolume&        box,
        ::ChunkPos const&     chunkPos,
        ::std::vector<short>* ZXheights,
        bool                  factorInBeardsAndShavers
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureFeature* getStructureFeatureOfType(::HashedString) const;

    virtual void garbageCollectBlueprints(::buffer_span<ChunkPos>);

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool) = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;
#else // @header-generator platform
    virtual ::BiomeArea getBiomeArea(::BoundingBox const& area, uint scale) const = 0;
#endif // @header-generator platform

    virtual ::BiomeSource const& getBiomeSource() const = 0;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    virtual ::BlockPos findSpawnPosition() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    virtual void
    postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random) /*override*/;

    virtual void postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const /*override*/;

    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const /*override*/;
#endif // @header-generator platform

    virtual void debugRender();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void propagateCombinedChunkSource(::ChunkSource*);
#else // @header-generator platform
    virtual void propagateCombinedChunkSource(::ChunkSource* chunkSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const = 0;
#else // @header-generator platform
    virtual void decorateWorldGenLoadChunk(
        ::Biome const&       biome,
        ::LevelChunk&        lc,
        ::BlockVolumeTarget& target,
        ::Random&            random,
        ::ChunkPos const&    pos
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual void decorateWorldGenPostProcess(
        ::Biome const& biome,
        ::LevelChunk&  lc,
        ::BlockSource& source,
        ::Random&      random
    ) const = 0;

    virtual ::std::shared_ptr<::br::worldgen::StructureInstance>
    _tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WorldGenerator(::Dimension&);
#else // @header-generator platform
    MCAPI explicit WorldGenerator(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addHardcodedSpawnAreas(::LevelChunk&);
#else // @header-generator platform
    MCAPI
    WorldGenerator(::Dimension& dimension, ::std::unique_ptr<::StructureFeatureRegistry> structureFeatureRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<short> computeChunkHeightMap(::ChunkPos const&);

    MCNAPI ::StructureFeatureRegistry& getStructureFeatureRegistry() const;

    MCNAPI void postProcessStructureFeatures(::BlockSource&, ::Random&, int, int);

    MCNAPI void postProcessStructures(::BlockSource&, ::Random&, int, int);

    MCNAPI void preProcessStructures(::Dimension&, ::ChunkPos const&, ::BiomeSource const&);

    MCNAPI void prepareStructureFeatureBlueprints(
        ::Dimension&,
        ::ChunkPos const&,
        ::BiomeSource const&,
        ::IPreliminarySurfaceProvider const&
#else // @header-generator platform
    MCAPI bool _tryGenerateStructure(
        ::br::worldgen::Structure const&      structure,
        ::ChunkPos const&                     chunkPos,
        ::br::worldgen::ChunkStructureAccess& structureAccess
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void waitForStructures();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void addHardcodedSpawnAreas(::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& TICKING_QUEUE_PASS_LIMIT();
#else // @header-generator platform
    MCAPI ::std::vector<short> computeChunkHeightMap(::ChunkPos const& pos);

    MCAPI void postProcessStructureFeatures(::BlockSource& region, ::Random& random, int chunkX, int chunkZ);

    MCAPI void postProcessStructures(::BlockSource& region, ::Random&, int chunkX, int chunkZ);

    MCAPI void preProcessStructures(::Dimension& dimension, ::ChunkPos const& cp, ::BiomeSource const& biomeSource);

    MCAPI void prepareStructureFeatureBlueprints(
        ::Dimension&                         dimension,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceProvider
    );

#ifdef LL_PLAT_C
    MCAPI void tick();
#endif

    MCAPI void waitForStructures();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&);
#else // @header-generator platform
    MCAPI void* $ctor(::Dimension& dimension);

    MCAPI void* $ctor(::Dimension& dimension, ::std::unique_ptr<::StructureFeatureRegistry> structureFeatureRegistry);
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
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;
#else // @header-generator platform
    MCAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    MCAPI bool $isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);
#else // @header-generator platform
    MCAPI bool $findNearestStructureFeature(
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::StructureFeature* $getStructureFeatureOfType(::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;
#else // @header-generator platform
    MCAPI void $garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureFeature* $getStructureFeatureOfType(::HashedString) const;
#else // @header-generator platform
    MCAPI void $postProcessMobsAt(::BlockSource& region, ::BoundingBox const& chunkBB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $garbageCollectBlueprints(::buffer_span<ChunkPos>);
#else // @header-generator platform
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4> worldQuartPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
#else // @header-generator platform
    MCFOLD void $debugRender();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $debugRender();
#else // @header-generator platform
    MCFOLD void $propagateCombinedChunkSource(::ChunkSource* chunkSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $propagateCombinedChunkSource(::ChunkSource*);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance>
    $_tryGetOrLoadStructureInstanceAt(::ChunkPos const& cp, ::br::worldgen::Structure const& structure);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForIPreliminarySurfaceProvider();

    MCNAPI static void** $vftableForChunkSource();
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"
#include "mc/deps/core/utility/buffer_span.h"
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<StructureFeatureRegistry>> mStructureFeatureRegistry;
    ::ll::TypedStorage<4, 40, std::mutex>                               mCreateStructuresAndVisitedPositionsMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable>                  mStructureInstanceWaitVar;
    ::ll::TypedStorage<4, 4, std::atomic<int>>                          mActiveStructureInstanceCreateCount;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>>             mVisitedPositions;
    ::ll::UntypedStorage<4, 4>                                          mThreadLocalHeightmapProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldGenerator();

    virtual void postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;

    virtual void postProcessMobsAt(::BlockSource&, int, int, ::Random&);

    virtual std::shared_ptr<br::worldgen::StructureInstance> _tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);

    virtual ::HashedString findStructureFeatureTypeAt(::BlockPos const&);

    virtual bool isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;

    virtual bool findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);

    virtual ::StructureFeature* getStructureFeatureOfType(::HashedString) const;

    virtual void garbageCollectBlueprints(::buffer_span<ChunkPos>);

    virtual void prepareHeights(::BlockVolume&, ::ChunkPos const&, std::vector<short>*, bool) = 0;

    virtual ::BiomeArea getBiomeArea(::BoundingBox const&, uint) const = 0;

    virtual ::BiomeSource const& getBiomeSource() const = 0;

    virtual ::WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    virtual ::BlockPos findSpawnPosition() const = 0;

    virtual std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    virtual void debugRender();

    virtual void propagateCombinedChunkSource(::ChunkSource*);

    virtual void decorateWorldGenLoadChunk(::Biome const&, ::LevelChunk&, ::BlockVolumeTarget&, ::Random&, ::ChunkPos const&) const = 0;

    virtual void decorateWorldGenPostProcess(::Biome const&, ::LevelChunk&, ::BlockSource&, ::Random&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldGenerator(::Dimension&);

    MCNAPI void addHardcodedSpawnAreas(::LevelChunk&);

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
    );

    MCNAPI void waitForStructures();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& TICKING_QUEUE_PASS_LIMIT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postProcessMobsAt(::BlockSource&, ::BoundingBox const&) const;

    MCNAPI void $postProcessMobsAt(::BlockSource&, int, int, ::Random&);

    MCNAPI std::shared_ptr<br::worldgen::StructureInstance>
           $_tryGetOrLoadStructureInstanceAt(::ChunkPos const&, ::br::worldgen::Structure const&);

    MCNAPI ::HashedString $findStructureFeatureTypeAt(::BlockPos const&);

    MCNAPI bool $isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;

    MCNAPI bool
    $findNearestStructureFeature(::HashedString, ::BlockPos const&, ::BlockPos&, bool, std::optional<HashedString>);

    MCNAPI ::StructureFeature* $getStructureFeatureOfType(::HashedString) const;

    MCNAPI void $garbageCollectBlueprints(::buffer_span<ChunkPos>);

    MCNAPI std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;

    MCNAPI void $debugRender();

    MCNAPI void $propagateCombinedChunkSource(::ChunkSource*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

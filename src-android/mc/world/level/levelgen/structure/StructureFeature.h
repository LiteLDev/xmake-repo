#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BiomeSource;
class BlockPos;
class BlockSource;
class BoundingBox;
class Dimension;
class IPreliminarySurfaceProvider;
class LevelChunk;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class StructureFeature {
public:
    // StructureFeature inner types define
    using StructureMap = std::unordered_map<ChunkPos, std::unique_ptr<StructureStart>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                                                mStructureFeatureType;
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::unique_ptr<StructureStart>>> mCachedStructures;
    ::ll::UntypedStorage<1, 144>                                                             mCacheMutex;
    ::ll::TypedStorage<8, 40, std::unordered_set<ChunkPos>>                                  mVisitedPositions;
    ::ll::TypedStorage<4, 4, uint>                                                           mRadius;
    ::ll::TypedStorage<4, 4, int>                                                            mXScale;
    ::ll::TypedStorage<4, 4, int>                                                            mZScale;
    ::ll::TypedStorage<4, 40, std::mutex>              mCreateBlueprintsAndVisitedPositionsMutex;
    ::ll::TypedStorage<4, 48, std::condition_variable> mBlueprintWaitVar;
    ::ll::TypedStorage<4, 4, std::atomic<int>>         mActiveBlueprintCreateCount;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>        mBlueprintsFinished;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructureFeature();

    virtual bool shouldAddHardcodedSpawnAreas() const;

    virtual bool shouldPostProcessMobs() const;

    virtual ::gsl::span<const BiomeIdType> getRequiredBiomes() const;

    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);

    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&) = 0;

    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&) = 0;

    virtual ::StructureStart* getStructureAt(int, int, int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureFeature(uint, ::HashedString);

    MCNAPI void addHardcodedSpawnAreas(::LevelChunk&);

    MCNAPI ::BlockPos chunkStartAtSurfaceLevel(::IPreliminarySurfaceProvider const&, ::ChunkPos, int const);

    MCNAPI void
    createBlueprints(::Dimension&, ::ChunkPos const&, ::BiomeSource const&, ::IPreliminarySurfaceProvider const&);

    MCNAPI std::vector<ChunkPos> findFarAwayStructures(::buffer_span<ChunkPos>, uint);

    MCNAPI void foreachIntersectingStructureStart(::BoundingBox const&, std::function<void(StructureStart&)>);

    MCNAPI void garbageCollectBlueprints(::buffer_span<ChunkPos>, uint);

    MCNAPI bool isInsideBoundingFeature(int, int, int);

    MCNAPI bool postProcess(::BlockSource&, ::Random&, int, int);

    MCNAPI void postProcessMobsAt(::BlockSource&, int, int, ::Random&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool findNearestFeaturePositionBySpacing(
        ::Dimension&,
        ::IPreliminarySurfaceProvider const&,
        ::StructureFeature&,
        std::optional<HashedString> const&,
        ::BiomeSource const&,
        ::BlockPos const&,
        ::BlockPos&,
        int,
        int,
        int,
        bool,
        int,
        bool
    );

    MCNAPI static std::pair<const BlockPos, const Biome*>
    getBiomeForFeatureGeneration(::BiomeSource const&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);

    MCNAPI static ::ChunkPos getChunkPosInSpace(::ChunkPos const&, ::Random&, uint, int, int, int, bool);

    MCNAPI static void setRandomSeedFor(::Random&, int, int, int, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, ::HashedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddHardcodedSpawnAreas() const;

    MCNAPI bool $shouldPostProcessMobs() const;

    MCNAPI ::gsl::span<const BiomeIdType> $getRequiredBiomes() const;

    MCNAPI bool $getNearestGeneratedFeature(
        ::Dimension&,
        ::BiomeSource const&,
        ::BlockPos const&,
        ::BlockPos&,
        ::IPreliminarySurfaceProvider const&,
        bool,
        std::optional<HashedString> const&
    );

    MCNAPI ::StructureStart* $getStructureAt(int, int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

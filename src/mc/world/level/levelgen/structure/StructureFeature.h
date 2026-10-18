#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Biome;
class BiomeRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class BiomeSource;
class BlockPos;
class BlockSource;
class BoundingBox;
class Dimension;
class IPreliminarySurfaceProvider;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelChunk;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class StructureFeature {
public:
    // StructureFeature inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StructureMap = std::unordered_map<ChunkPos, std::unique_ptr<StructureStart>>;
#else // @header-generator platform
    using StructureMap = ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::StructureStart>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mStructureFeatureType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::unique_ptr<::StructureStart>>> mCachedStructures;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                                    mCacheMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ChunkPos>>                                      mVisitedPositions;
    ::ll::TypedStorage<4, 4, uint>                                                                   mRadius;
    ::ll::TypedStorage<4, 4, int>                                                                    mXScale;
    ::ll::TypedStorage<4, 4, int>                                                                    mZScale;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCreateBlueprintsAndVisitedPositionsMutex;
    ::ll::TypedStorage<8, 72, ::std::condition_variable>   mBlueprintWaitVar;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>           mActiveBlueprintCreateCount;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>          mBlueprintsFinished;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructureFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~StructureFeature();

    virtual bool shouldAddHardcodedSpawnAreas() const;

    virtual bool shouldPostProcessMobs() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const BiomeIdType> getRequiredBiomes() const;
#else // @header-generator platform
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getNearestGeneratedFeature(::Dimension&, ::BiomeSource const&, ::BlockPos const&, ::BlockPos&, ::IPreliminarySurfaceProvider const&, bool, std::optional<HashedString> const&);
#else // @header-generator platform
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFeatureChunk(::BiomeSource const&, ::Random&, ::ChunkPos const&, uint, ::IPreliminarySurfaceProvider const&, ::Dimension const&) = 0;
#else // @header-generator platform
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    pos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<StructureStart> createStructureStart(::Dimension&, ::BiomeSource const&, ::Random&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureStart* getStructureAt(int, int, int);
    // clang-format on
#else // @header-generator platform
    virtual ::StructureStart* getStructureAt(int cellX, int cellY, int cellZ);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureFeature(uint, ::HashedString);
#else // @header-generator platform
    MCAPI StructureFeature(uint seed, ::HashedString structureFeatureType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addHardcodedSpawnAreas(::LevelChunk&);
#else // @header-generator platform
    MCAPI void createBlueprints(
        ::Dimension&                         dimension,
        ::ChunkPos const&                    cp,
        ::BiomeSource const&                 biomeSource,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos chunkStartAtSurfaceLevel(::IPreliminarySurfaceProvider const&, ::ChunkPos, int const);
#else // @header-generator platform
    MCAPI void foreachIntersectingStructureStart(::BoundingBox const& bb, ::std::function<void(::StructureStart&)> fn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    createBlueprints(::Dimension&, ::ChunkPos const&, ::BiomeSource const&, ::IPreliminarySurfaceProvider const&);
#else // @header-generator platform
    MCAPI void garbageCollectBlueprints(::buffer_span<::ChunkPos> activeChunks, uint safetyBorder);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ChunkPos> findFarAwayStructures(::buffer_span<ChunkPos>, uint);

    MCNAPI void foreachIntersectingStructureStart(::BoundingBox const&, std::function<void(StructureStart&)>);

    MCNAPI void garbageCollectBlueprints(::buffer_span<ChunkPos>, uint);

    MCNAPI bool isInsideBoundingFeature(int, int, int);

    MCNAPI bool postProcess(::BlockSource&, ::Random&, int, int);

    MCNAPI void postProcessMobsAt(::BlockSource&, int, int, ::Random&);
#else // @header-generator platform
    MCAPI void postProcessMobsAt(::BlockSource& region, int chunkWestBlock, int chunkNorthBlock, ::Random& random);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static bool findNearestFeaturePositionBySpacing(
        ::Dimension&                           dimension,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        ::StructureFeature&                    feature,
        ::std::optional<::HashedString> const& biomeTag,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            result,
        int                                    featureSpacing,
        int                                    minFeatureSeparation,
        int                                    randomSalt,
        bool                                   tiltedSpacing,
        int                                    maxSearchRadius,
        bool                                   mustBeInNewChunks
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::pair<const BlockPos, const Biome*>
    getBiomeForFeatureGeneration(::BiomeSource const&, ::ChunkPos const&, ::IPreliminarySurfaceProvider const&);

    MCNAPI static ::ChunkPos getChunkPosInSpace(::ChunkPos const&, ::Random&, uint, int, int, int, bool);

    MCNAPI static void setRandomSeedFor(::Random&, int, int, int, uint);
#else // @header-generator platform
    MCAPI static ::ChunkPos getChunkPosInSpace(
        ::ChunkPos const& cp,
        ::Random&         random,
        uint              levelSeed,
        int               spacing,
        int               separation,
        int               salt,
        bool              tiltedSpacing
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, ::HashedString);
#else // @header-generator platform
    MCAPI void* $ctor(uint seed, ::HashedString structureFeatureType);
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
    MCNAPI bool $shouldAddHardcodedSpawnAreas() const;
#else // @header-generator platform
    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldPostProcessMobs() const;
#else // @header-generator platform
    MCFOLD bool $shouldPostProcessMobs() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const BiomeIdType> $getRequiredBiomes() const;
#else // @header-generator platform
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getNearestGeneratedFeature(
        ::Dimension&,
        ::BiomeSource const&,
        ::BlockPos const&,
        ::BlockPos&,
        ::IPreliminarySurfaceProvider const&,
        bool,
        std::optional<HashedString> const&
#else // @header-generator platform
    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureStart* $getStructureAt(int, int, int);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::StructureStart* $getStructureAt(int cellX, int cellY, int cellZ);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

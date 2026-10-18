#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/ChunkPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v1/BeardAndShaverDescription.h"
#include "mc/world/level/levelgen/v1/BeardDescription.h"
#include "mc/world/level/levelgen/v1/BuryDescription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BeardAndShaverDescription;
class BeardDescription;
#endif // @header-generator platform
class BlockPos;
class BoundingBox;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BuryDescription;
#endif // @header-generator platform
struct BeardKernel;
// clang-format on

class FeatureTerrainAdjustments {
public:
    // FeatureTerrainAdjustments inner types declare
    // clang-format off
    struct Descriptions;
    // clang-format on

    // FeatureTerrainAdjustments inner types define
    struct Descriptions {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BeardDescription, std::weak_ptr<bool>>>> mBeardifiers;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BeardAndShaverDescription, std::weak_ptr<bool>>>>
                                                                                                mBeardAndShavers;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BuryDescription, std::weak_ptr<bool>>>> mBurys;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BeardDescription, ::std::weak_ptr<bool>>>> mBeardifiers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BeardAndShaverDescription, ::std::weak_ptr<bool>>>>
            mBeardAndShavers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BuryDescription, ::std::weak_ptr<bool>>>> mBurys;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Descriptions(::FeatureTerrainAdjustments::Descriptions const&);

        MCNAPI ::FeatureTerrainAdjustments::Descriptions& operator=(::FeatureTerrainAdjustments::Descriptions&&);

        MCNAPI ~Descriptions();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::FeatureTerrainAdjustments::Descriptions const&);
#else // @header-generator platform
        MCAPI ~Descriptions();
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
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using TerrainAdjustmentToken = std::shared_ptr<bool>;
#else // @header-generator platform
    using TerrainAdjustmentToken = ::std::shared_ptr<bool>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, FeatureTerrainAdjustments::Descriptions>> mDescriptionsToProcess;
    ::ll::UntypedStorage<1, 144> mMutex;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::FeatureTerrainAdjustments::Descriptions>>
                                                  mDescriptionsToProcess;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<bool> _insertDescriptions(
        std::vector<ChunkPos> const&,
        std::function<void(FeatureTerrainAdjustments::Descriptions&, std::weak_ptr<bool>)>&&
#else // @header-generator platform
    MCAPI ::std::shared_ptr<bool> _insertDescriptions(
        ::std::vector<::ChunkPos> const&                                                           intersectingChunks,
        ::std::function<void(::FeatureTerrainAdjustments::Descriptions&, ::std::weak_ptr<bool>)>&& modifyFn
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FeatureTerrainAdjustments::Descriptions at(::ChunkPos const&);
#else // @header-generator platform
    MCAPI ::FeatureTerrainAdjustments::Descriptions at(::ChunkPos const& chunkPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void garbageCollectDescriptions();
#else // @header-generator platform
    MCAPI void garbageCollectDescriptions();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<bool> setBeardAndShaver(::BoundingBox const&, int, float, float);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<bool>
    setBeardAndShaver(::BoundingBox const& bb, int deltaY, float minBeardWidth, float maxBeardWidth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<bool> setBeardifier(::BoundingBox const&, int);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<bool> setBeardifier(::BoundingBox const& bb, int deltaY);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<bool> setBury(::BoundingBox const&);

    MCNAPI ~FeatureTerrainAdjustments();
#else // @header-generator platform
    MCAPI ::std::shared_ptr<bool> setBury(::BoundingBox const& bb);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float
    calculateContribution(::FeatureTerrainAdjustments::Descriptions const&, ::BlockPos const&, float const);

    MCNAPI static ::BeardKernel& getBeardKernel();

    MCNAPI static bool shouldDoTerrainAdjustments(::FeatureTerrainAdjustments::Descriptions const&);
#else // @header-generator platform
    MCAPI static float calculateContribution(
        ::FeatureTerrainAdjustments::Descriptions const& descriptions,
        ::BlockPos const&                                currentPos,
        float                                            noiseValue
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BeardKernel& mBeardKernel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::BeardKernel& mBeardKernel();
#endif // @header-generator platform
    // NOLINTEND
};

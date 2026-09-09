#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/v1/BeardAndShaverDescription.h"
#include "mc/world/level/levelgen/v1/BeardDescription.h"
#include "mc/world/level/levelgen/v1/BuryDescription.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
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
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BeardDescription, std::weak_ptr<bool>>>> mBeardifiers;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BeardAndShaverDescription, std::weak_ptr<bool>>>>
                                                                                                mBeardAndShavers;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<BuryDescription, std::weak_ptr<bool>>>> mBurys;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Descriptions(::FeatureTerrainAdjustments::Descriptions const&);

        MCNAPI ::FeatureTerrainAdjustments::Descriptions& operator=(::FeatureTerrainAdjustments::Descriptions&&);

        MCNAPI ~Descriptions();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::FeatureTerrainAdjustments::Descriptions const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using TerrainAdjustmentToken = std::shared_ptr<bool>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, FeatureTerrainAdjustments::Descriptions>> mDescriptionsToProcess;
    ::ll::UntypedStorage<1, 144> mMutex;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<bool> _insertDescriptions(
        std::vector<ChunkPos> const&,
        std::function<void(FeatureTerrainAdjustments::Descriptions&, std::weak_ptr<bool>)>&&
    );

    MCNAPI ::FeatureTerrainAdjustments::Descriptions at(::ChunkPos const&);

    MCNAPI void garbageCollectDescriptions();

    MCNAPI std::shared_ptr<bool> setBeardAndShaver(::BoundingBox const&, int, float, float);

    MCNAPI std::shared_ptr<bool> setBeardifier(::BoundingBox const&, int);

    MCNAPI std::shared_ptr<bool> setBury(::BoundingBox const&);

    MCNAPI ~FeatureTerrainAdjustments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float
    calculateContribution(::FeatureTerrainAdjustments::Descriptions const&, ::BlockPos const&, float const);

    MCNAPI static ::BeardKernel& getBeardKernel();

    MCNAPI static bool shouldDoTerrainAdjustments(::FeatureTerrainAdjustments::Descriptions const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BeardKernel& mBeardKernel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

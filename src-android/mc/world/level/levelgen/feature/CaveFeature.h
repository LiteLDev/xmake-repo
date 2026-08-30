#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/cave_feature_utils/CarvingParameters.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BoundingBox;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
struct WorldGenContext;
namespace CaveFeatureUtils { struct CarverConfiguration; }
// clang-format on

class CaveFeature : public ::IFeature {
public:
    // CaveFeature inner types declare
    // clang-format off
    struct CachedMetaData;
    // clang-format on

    // CaveFeature inner types define
    struct CachedMetaData {
    public:
        // CachedMetaData inner types declare
        // clang-format off
        struct CarveEllipsoidParams;
        // clang-format on

        // CachedMetaData inner types define
        struct CarveEllipsoidParams {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 12, ::Vec3 const>                                mStartPos;
            ::ll::TypedStorage<4, 4, float const>                                  mHorizontalRadius;
            ::ll::TypedStorage<4, 4, float const>                                  mVerticalRadius;
            ::ll::TypedStorage<4, 24, ::CaveFeatureUtils::CarvingParameters const> mCarvingParameters;
            ::ll::TypedStorage<4, 4, int const>                                    mCurrentStep;
            ::ll::TypedStorage<4, 4, int const>                                    mTotalSteps;
            ::ll::TypedStorage<4, 4, float const>                                  mThickness;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, std::atomic<uint>> mUseCount;
        ::ll::TypedStorage<8, 24, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>> mCarveEllipsoidParamsVector;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Block const*> mFillWithBlock;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mWidthMod;
    ::ll::TypedStorage<4, 4, int> mSkipCarveChance;
    ::ll::TypedStorage<4, 4, int> mHeightLimit;
    ::ll::TypedStorage<4, 8, ::FloatRange> mYScale;
    ::ll::TypedStorage<4, 8, ::FloatRange> mHorizontalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange> mVerticalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloorLevel;
    ::ll::TypedStorage<8, 24, std::string const> VALID_PASS;
    ::ll::TypedStorage<4, 4, float const> X_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> Y_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> STEEP_FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, int const> STEEP_CHANCE;
    ::ll::TypedStorage<4, 4, int const> TUNNEL_SKIP_CHANCE;
    ::ll::TypedStorage<4, 4, int const> CAVE_COUNT_BASE_FACTOR;
    ::ll::TypedStorage<4, 4, int const> ROOM_CARVE_CHANCE;
    ::ll::TypedStorage<4, 4, int const> MAX_NUM_TUNNELS_ADDED_ON_ROOM_CARVE;
    ::ll::TypedStorage<1, 1, bool> mCacheEnabled;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::unordered_map<int, std::shared_ptr<CaveFeature::CachedMetaData>>>> mCachedMetaDataMap;
    ::ll::TypedStorage<4, 40, std::mutex> mCacheMutex;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mPlaceCount;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CaveFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;

    virtual bool isValidPlacement(std::string const&);

    virtual void addRoom(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;

    virtual void addTunnel(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, float, float, float, int, int, float, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;

    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::BoundingBox const&, float, float, ::CaveFeatureUtils::CarvingParameters const&) const;

    virtual void addFeature(::IBlockWorldGenAPI&, ::ChunkPos const&, ::Random&, ::ChunkPos const&, ::RenderParams&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CaveFeature();

    MCNAPI bool carveEllipsoid(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        float,
        float const,
        ::CaveFeatureUtils::CarvingParameters const&
    ) const;

    MCNAPI float getWidthModifier(::RenderParams&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldSkipCarving(float const, float const, float const, float const, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;

    MCNAPI bool $isValidPlacement(std::string const&);

    MCNAPI void $addRoom(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        ::RenderParams&,
        ::CaveFeatureUtils::CarvingParameters const&,
        std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&
    ) const;

    MCNAPI void $addTunnel(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        float,
        float,
        float,
        int,
        int,
        float,
        ::RenderParams&,
        ::CaveFeatureUtils::CarvingParameters const&,
        std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&
    ) const;

    MCNAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        ::BoundingBox const&,
        float,
        float,
        ::CaveFeatureUtils::CarvingParameters const&
    ) const;

    MCNAPI void $addFeature(
        ::IBlockWorldGenAPI&,
        ::ChunkPos const&,
        ::Random&,
        ::ChunkPos const&,
        ::RenderParams&,
        std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

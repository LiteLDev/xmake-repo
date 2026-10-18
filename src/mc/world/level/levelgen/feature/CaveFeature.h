#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
struct WorldGenContext;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<4, 4, std::atomic<uint>> mUseCount;
        ::ll::TypedStorage<8, 24, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>> mCarveEllipsoidParamsVector;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mUseCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>>
            mCarveEllipsoidParamsVector;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>       mFillWithBlock;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>    mWidthMod;
    ::ll::TypedStorage<4, 4, int>                  mSkipCarveChance;
    ::ll::TypedStorage<4, 4, int>                  mHeightLimit;
    ::ll::TypedStorage<4, 8, ::FloatRange>         mYScale;
    ::ll::TypedStorage<4, 8, ::FloatRange>         mHorizontalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange>         mVerticalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange>         mFloorLevel;
    ::ll::TypedStorage<8, 32, ::std::string const> VALID_PASS;
    ::ll::TypedStorage<4, 4, float const>          X_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const>          Y_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const>          STEEP_FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const>          FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, int const>            STEEP_CHANCE;
    ::ll::TypedStorage<4, 4, int const>            TUNNEL_SKIP_CHANCE;
    ::ll::TypedStorage<4, 4, int const>            CAVE_COUNT_BASE_FACTOR;
    ::ll::TypedStorage<4, 4, int const>            ROOM_CARVE_CHANCE;
    ::ll::TypedStorage<4, 4, int const>            MAX_NUM_TUNNELS_ADDED_ON_ROOM_CARVE;
    ::ll::TypedStorage<1, 1, bool>                 mCacheEnabled;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<int, ::std::unordered_map<int, ::std::shared_ptr<::CaveFeature::CachedMetaData>>>>
                                                           mCachedMetaDataMap;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCacheMutex;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>          mPlaceCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CaveFeature();
#else // @header-generator platform
    virtual ~CaveFeature() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidPlacement(std::string const&);
#else // @header-generator platform
    virtual bool isValidPlacement(::std::string const& pass) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addRoom(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;
#else // @header-generator platform
    virtual void addRoom(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTunnel(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, float, float, float, int, int, float, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;
#else // @header-generator platform
    virtual void addTunnel(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        float                                                               thickness,
        float                                                               horizontalRotation,
        float                                                               verticalRotation,
        int                                                                 step,
        int                                                                 dist,
        float                                                               yScale,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::BoundingBox const&, float, float, ::CaveFeatureUtils::CarvingParameters const&) const;
#else // @header-generator platform
    virtual bool carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&,
        ::ChunkPos const&                            chunkPos,
        ::Vec3 const&                                startPos,
        ::BoundingBox const&                         volume,
        float                                        rad,
        float                                        yRad,
        ::CaveFeatureUtils::CarvingParameters const& carvingParameters
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addFeature(::IBlockWorldGenAPI&, ::ChunkPos const&, ::Random&, ::ChunkPos const&, ::RenderParams&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;
    // clang-format on
#else // @header-generator platform
    virtual void addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CaveFeature();
#else // @header-generator platform
    MCAPI CaveFeature();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool carveEllipsoid(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        float,
        float const,
        ::CaveFeatureUtils::CarvingParameters const&
#else // @header-generator platform
    MCAPI bool carveEllipsoid(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        float                                          horizontalRadius,
        float const                                    verticalRadius,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI float getWidthModifier(::RenderParams&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldSkipCarving(float const, float const, float const, float const, float const);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
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
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidPlacement(std::string const&);
#else // @header-generator platform
    MCAPI bool $isValidPlacement(::std::string const& pass);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addRoom(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        ::RenderParams&,
        ::CaveFeatureUtils::CarvingParameters const&,
        std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&
#else // @header-generator platform
    MCAPI void $addRoom(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $addTunnel(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        float                                                               thickness,
        float                                                               horizontalRotation,
        float                                                               verticalRotation,
        int                                                                 step,
        int                                                                 dist,
        float                                                               yScale,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&,
        ::CaveFeatureUtils::CarverConfiguration const&,
#else // @header-generator platform
    MCAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
#endif // @header-generator platform
        ::Random&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::ChunkPos const&,
        ::Vec3 const&,
        ::BoundingBox const&,
        float,
        float,
        ::CaveFeatureUtils::CarvingParameters const&
#else // @header-generator platform
        ::ChunkPos const&                            chunkPos,
        ::Vec3 const&                                startPos,
        ::BoundingBox const&                         volume,
        float                                        rad,
        float                                        yRad,
        ::CaveFeatureUtils::CarvingParameters const& carvingParameters
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addFeature(
        ::IBlockWorldGenAPI&,
        ::ChunkPos const&,
        ::Random&,
        ::ChunkPos const&,
        ::RenderParams&,
        std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&
#else // @header-generator platform
    MCAPI void $addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

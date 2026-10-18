#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BoundingBox;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class Vec3;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class UnderwaterCaveFeature : public ::CaveFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mAirReplacementBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~UnderwaterCaveFeature();

    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::BoundingBox const&, float, float, ::CaveFeatureUtils::CarvingParameters const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool carveEllipsoidVolume(
        ::IBlockWorldGenAPI& target,
        ::CaveFeatureUtils::CarverConfiguration const&,
        ::Random&                                    random,
        ::ChunkPos const&                            pos,
        ::Vec3 const&                                startPos,
        ::BoundingBox const&                         volume,
        float                                        rad,
        float                                        yRad,
        ::CaveFeatureUtils::CarvingParameters const& carveValues
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&,
#else // @header-generator platform
    MCAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI& target,
#endif // @header-generator platform
        ::CaveFeatureUtils::CarverConfiguration const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        ::BoundingBox const&,
        float,
        float,
        ::CaveFeatureUtils::CarvingParameters const&
#else // @header-generator platform
        ::Random&                                    random,
        ::ChunkPos const&                            pos,
        ::Vec3 const&                                startPos,
        ::BoundingBox const&                         volume,
        float                                        rad,
        float                                        yRad,
        ::CaveFeatureUtils::CarvingParameters const& carveValues
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

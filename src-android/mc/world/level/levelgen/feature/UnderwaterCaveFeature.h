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
    // clang-format off
    virtual ~UnderwaterCaveFeature();

    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::BoundingBox const&, float, float, ::CaveFeatureUtils::CarvingParameters const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

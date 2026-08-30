#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/levelgen/feature/CaveFeature.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class NetherCaveFeature : public ::CaveFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3 const> EMPTY_VEC;
    ::ll::TypedStorage<4, 4, int const>     HELL_CAVE_COUNT_BASE_FACTOR;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherCaveFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;

    virtual void addRoom(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;

    virtual void addTunnel(::IBlockWorldGenAPI&, ::CaveFeatureUtils::CarverConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, float, float, float, int, int, float, ::RenderParams&, ::CaveFeatureUtils::CarvingParameters const&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;

    virtual void addFeature(::IBlockWorldGenAPI&, ::ChunkPos const&, ::Random&, ::ChunkPos const&, ::RenderParams&, std::vector<CaveFeature::CachedMetaData::CarveEllipsoidParams>&) const;
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
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;

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

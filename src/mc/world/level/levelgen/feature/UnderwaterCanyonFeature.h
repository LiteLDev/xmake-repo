#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CanyonFeature.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class BiomeSource;
class BlockType;
class BlockVolume;
class ChunkPos;
class Random;
class Vec3;
struct WorldGenContext;
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class UnderwaterCanyonFeature : public ::CanyonFeature {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    UnderwaterCanyonFeature();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual bool _carve(::BlockVolume&, ::BiomeSource const&, ::CanyonFeatureUtils::CanyonConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::Vec3 const&, int, int, int, int, int, int, float, float, ::gsl::span<const float>, ::WorldGenContext const&, ::BiomeRegistry const&) const;
#else // @header-generator platform
    virtual bool _isDiggable(::BlockType const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isDiggable(::BlockType const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UnderwaterCanyonFeature(short);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(short);
#else // @header-generator platform
    virtual bool _carve(
        ::BlockVolume&       blocks,
        ::BiomeSource const& localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
        ::Random&                random,
        ::ChunkPos const&        pos,
        ::Vec3 const&            startPos,
        ::Vec3 const&            originalStartPos,
        int                      x0,
        int                      x1,
        int                      y0,
        int                      y1,
        int                      z0,
        int                      z1,
        float                    horizontalRadius,
        float                    verticalRadius,
        ::gsl::span<float const> widthRandomization,
        ::WorldGenContext const&,
        ::BiomeRegistry const& biomeRegistry
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_carve(
        ::BlockVolume&,
        ::BiomeSource const&,
#else // @header-generator platform
    MCAPI bool $_isDiggable(::BlockType const& block) const;

    MCAPI bool $_carve(
        ::BlockVolume&       blocks,
        ::BiomeSource const& localBiomeSource,
#endif // @header-generator platform
        ::CanyonFeatureUtils::CanyonConfiguration const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Random&,
        ::ChunkPos const&,
        ::Vec3 const&,
        ::Vec3 const&,
        int,
        int,
        int,
        int,
        int,
        int,
        float,
        float,
        ::gsl::span<const float>,
#else // @header-generator platform
        ::Random&                random,
        ::ChunkPos const&        pos,
        ::Vec3 const&            startPos,
        ::Vec3 const&            originalStartPos,
        int                      x0,
        int                      x1,
        int                      y0,
        int                      y1,
        int                      z0,
        int                      z1,
        float                    horizontalRadius,
        float                    verticalRadius,
        ::gsl::span<float const> widthRandomization,
#endif // @header-generator platform
        ::WorldGenContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::BiomeRegistry const&
#else // @header-generator platform
        ::BiomeRegistry const& biomeRegistry
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isDiggable(::BlockType const&) const;
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

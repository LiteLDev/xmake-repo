#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class CanyonFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short const> mSeaLevel;
    ::ll::TypedStorage<1, 1, bool>        mAllowMegaCanyons;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CanyonFeature();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual bool _carve(::BlockVolume&, ::BiomeSource const&, ::CanyonFeatureUtils::CanyonConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::Vec3 const&, int, int, int, int, int, int, float, float, ::gsl::span<const float>, ::WorldGenContext const&, ::BiomeRegistry const&) const;
#else // @header-generator platform
    virtual bool _carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&,
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
        ::WorldGenContext const& context,
        ::BiomeRegistry const&   biomeRegistry
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isDiggable(::BlockType const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool _isDiggable(::BlockType const& block) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CanyonFeature(short);

    MCNAPI void _addFeature(
        ::BlockVolume&,
        ::BiomeSource const&,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
        ::ChunkPos const&,
        ::Random&,
        int,
        int,
        ::WorldGenContext const&,
        ::BiomeRegistry const&
#else // @header-generator platform
    MCAPI void _addFeature(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::ChunkPos const&                                pos,
        ::Random&                                        random,
        int                                              chunkX,
        int                                              chunkZ,
        ::WorldGenContext const&                         context,
        ::BiomeRegistry const&                           biomeRegistry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void apply(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::BiomeSource const&,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
        ::Random&,
        uint,
        ::WorldGenContext const&,
        ::BiomeRegistry const&
#else // @header-generator platform
    MCAPI void apply(
        ::BlockVolume&                                   blocks,
        ::ChunkPos const&                                pos,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
        ::Random&                                        random,
        uint                                             levelSeed,
        ::WorldGenContext const&                         context,
        ::BiomeRegistry const&                           biomeRegistry
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(short);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_carve(
        ::BlockVolume&,
        ::BiomeSource const&,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
#else // @header-generator platform
    MCAPI bool $_carve(
        ::BlockVolume&                                   blocks,
        ::BiomeSource const&                             localBiomeSource,
        ::CanyonFeatureUtils::CanyonConfiguration const& canyonConfig,
#endif // @header-generator platform
        ::Random&,
#if defined(LL_PLAT_A) // @header-generator platform
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
        ::WorldGenContext const&,
        ::BiomeRegistry const&
#else // @header-generator platform
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
        ::WorldGenContext const& context,
        ::BiomeRegistry const&   biomeRegistry
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isDiggable(::BlockType const&) const;
#else // @header-generator platform
    MCAPI bool $_isDiggable(::BlockType const& block) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

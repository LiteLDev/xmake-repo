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
    // prevent constructor by default
    CanyonFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual bool _carve(::BlockVolume&, ::BiomeSource const&, ::CanyonFeatureUtils::CanyonConfiguration const&, ::Random&, ::ChunkPos const&, ::Vec3 const&, ::Vec3 const&, int, int, int, int, int, int, float, float, ::gsl::span<const float>, ::WorldGenContext const&, ::BiomeRegistry const&) const;

    virtual bool _isDiggable(::BlockType const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI void apply(
        ::BlockVolume&,
        ::ChunkPos const&,
        ::BiomeSource const&,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
        ::Random&,
        uint,
        ::WorldGenContext const&,
        ::BiomeRegistry const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(short);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_carve(
        ::BlockVolume&,
        ::BiomeSource const&,
        ::CanyonFeatureUtils::CanyonConfiguration const&,
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
        ::WorldGenContext const&,
        ::BiomeRegistry const&
    ) const;

    MCNAPI bool $_isDiggable(::BlockType const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

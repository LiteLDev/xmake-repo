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
    // prevent constructor by default
    UnderwaterCanyonFeature();

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
    MCNAPI explicit UnderwaterCanyonFeature(short);
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"

// auto generated forward declare list
// clang-format off
class LevelSeed64;
class PerlinSimplexNoise;
class Random;
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class LegacyMesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 64, std::array<BlockColor, 64>>         mColorBands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mPillarNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mPillarRoofNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mBandsNoise;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LegacyMesaSurfaceBuilder();

    virtual void initBuilder(::LevelSeed64);

    virtual void initBiomeSurface(::SurfaceBuilderData&) const;

    virtual bool isBestBuilder(::SurfaceBuilderData const&) const;

    virtual void buildSurfaceAt(::ISurfaceBuilder::GlobalParameters const&, ::ISurfaceBuilder::SurfaceBuilderParameters const&, ::ISurfaceBuilder::PerColumnParameters const&) const;

    virtual bool getUsesDepthValue() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockColor getBand(int, int, int, ::PerlinSimplexNoise const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initBuilder(::LevelSeed64);

    MCNAPI void $initBiomeSurface(::SurfaceBuilderData&) const;

    MCNAPI bool $isBestBuilder(::SurfaceBuilderData const&) const;

    MCNAPI void $buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&,
        ::ISurfaceBuilder::SurfaceBuilderParameters const&,
        ::ISurfaceBuilder::PerColumnParameters const&
    ) const;

    MCNAPI bool $getUsesDepthValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders

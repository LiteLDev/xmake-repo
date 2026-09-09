#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
class LevelSeed64;
class PerlinSimplexNoise;
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class SwampSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>                      mWaterBlock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mPuddleNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampSurfaceBuilder& operator=(SwampSurfaceBuilder const&);
    SwampSurfaceBuilder(SwampSurfaceBuilder const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SwampSurfaceBuilder();

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
    MCNAPI SwampSurfaceBuilder();
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

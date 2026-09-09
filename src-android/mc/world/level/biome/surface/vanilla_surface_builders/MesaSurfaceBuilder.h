#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class LevelSeed64;
class MesaSurfaceBuilderNoises;
class Random;
class SurfaceBuilderData;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 192, std::array<BlockColor, 192>>             mColorBands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MesaSurfaceBuilderNoises>> mNoises;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MesaSurfaceBuilder();

    virtual void initBuilder(::LevelSeed64);

    virtual void initBiomeSurface(::SurfaceBuilderData&) const;

    virtual bool isBestBuilder(::SurfaceBuilderData const&) const;

    virtual void buildSurfaceAt(::ISurfaceBuilder::GlobalParameters const&, ::ISurfaceBuilder::SurfaceBuilderParameters const&, ::ISurfaceBuilder::PerColumnParameters const&) const;

    virtual bool getUsesDepthValue() const;
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

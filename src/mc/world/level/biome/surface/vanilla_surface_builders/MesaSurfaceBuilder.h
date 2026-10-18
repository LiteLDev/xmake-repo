#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"
#include "mc/world/level/block/BlockColor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MesaSurfaceBuilderNoises.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockVolume;
#else // @header-generator platform
#endif // @header-generator platform
class LevelSeed64;
class MesaSurfaceBuilderNoises;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class SurfaceBuilderData;
#if defined(LL_PLAT_A) // @header-generator platform
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 192, std::array<BlockColor, 192>>             mColorBands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MesaSurfaceBuilderNoises>> mNoises;
#else // @header-generator platform
    ::ll::TypedStorage<1, 192, ::std::array<::BlockColor, 192>>             mColorBands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MesaSurfaceBuilderNoises>> mNoises;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MesaSurfaceBuilder();
#else // @header-generator platform
    virtual void initBuilder(::LevelSeed64 levelSeed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initBuilder(::LevelSeed64);
#else // @header-generator platform
    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initBiomeSurface(::SurfaceBuilderData&) const;
#else // @header-generator platform
    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBestBuilder(::SurfaceBuilderData const&) const;
#else // @header-generator platform
    virtual void buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildSurfaceAt(::ISurfaceBuilder::GlobalParameters const&, ::ISurfaceBuilder::SurfaceBuilderParameters const&, ::ISurfaceBuilder::PerColumnParameters const&) const;

    virtual bool getUsesDepthValue() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool getUsesDepthValue() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initBuilder(::LevelSeed64);
#else // @header-generator platform
    MCAPI void $initBuilder(::LevelSeed64 levelSeed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initBiomeSurface(::SurfaceBuilderData&) const;
#else // @header-generator platform
    MCFOLD void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBestBuilder(::SurfaceBuilderData const&) const;
#else // @header-generator platform
    MCFOLD bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&,
        ::ISurfaceBuilder::SurfaceBuilderParameters const&,
        ::ISurfaceBuilder::PerColumnParameters const&
#else // @header-generator platform
    MCAPI void $buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getUsesDepthValue() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $getUsesDepthValue() const;
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

} // namespace VanillaSurfaceBuilders

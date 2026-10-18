#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class NoiseGradientSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64> mLevelSeed;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~NoiseGradientSurfaceBuilder();
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
        ::ISurfaceBuilder::GlobalParameters const&,
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
#ifdef LL_PLAT_S
    MCAPI void $initBuilder(::LevelSeed64 levelSeed);
#else // LL_PLAT_C
    MCFOLD void $initBuilder(::LevelSeed64 levelSeed);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initBiomeSurface(::SurfaceBuilderData&) const;
#else // @header-generator platform
    MCAPI void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBestBuilder(::SurfaceBuilderData const&) const;
#else // @header-generator platform
    MCAPI bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $buildSurfaceAt(
#else // @header-generator platform
    MCAPI void $buildSurfaceAt(
#endif // @header-generator platform
        ::ISurfaceBuilder::GlobalParameters const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::ISurfaceBuilder::SurfaceBuilderParameters const&,
        ::ISurfaceBuilder::PerColumnParameters const&
#else // @header-generator platform
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

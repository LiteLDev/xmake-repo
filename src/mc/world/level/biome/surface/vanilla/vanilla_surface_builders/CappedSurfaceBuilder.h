#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockVolume;
#else // @header-generator platform
#endif // @header-generator platform
class LevelSeed64;
class PerlinNoise;
#if defined(LL_PLAT_A) // @header-generator platform
class Pos;
#else // @header-generator platform
#endif // @header-generator platform
class SurfaceBuilderData;
// clang-format on

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on

    // CappedSurfaceBuilder inner types define
    class MaterialHelper {
    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~MaterialHelper();
#else // @header-generator platform
        virtual ~MaterialHelper() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isFoundationBlock(::Block const&) const;
#else // @header-generator platform
        virtual bool isFoundationBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isWaterBlock(::Block const&) const;
#else // @header-generator platform
        virtual bool isWaterBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isLavaBlock(::Block const&) const;
#else // @header-generator platform
        virtual bool isLavaBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isSolidBlock(::Block const&) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual bool isSolidBlock(::Block const& block) const;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isFoundationBlock(::Block const&) const;
#else // @header-generator platform
        MCAPI bool $isFoundationBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isWaterBlock(::Block const&) const;
#else // @header-generator platform
        MCAPI bool $isWaterBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isLavaBlock(::Block const&) const;
#else // @header-generator platform
        MCAPI bool $isLavaBlock(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isSolidBlock(::Block const&) const;
#else // @header-generator platform
        MCAPI bool $isSolidBlock(::Block const& block) const;


#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mLevelSeed;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinNoise>> mBeachNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper>> mMaterialHelper;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                             mLevelSeed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinNoise>> mBeachNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper>>
        mMaterialHelper;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CappedSurfaceBuilder();
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
    // member functions
    // NOLINTBEGIN
    MCNAPI CappedSurfaceBuilder();
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
    MCAPI void $initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBestBuilder(::SurfaceBuilderData const&) const;
#else // @header-generator platform
    MCAPI bool $isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const;
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
#else // @header-generator platform
    MCFOLD bool $getUsesDepthValue() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSurfaceBuilders

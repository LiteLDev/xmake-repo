#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockVolume;
class HeightmapWrapper;
class LevelSeed64;
class PerlinSimplexNoise;
class Random;
class SurfaceBuilderData;
struct MountainAttributes;
struct SurfaceMaterialAdjustmentAttributes;
// clang-format on

class ISurfaceBuilder {
public:
    // ISurfaceBuilder inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SurfaceBuilderParameters;
    struct PerColumnParameters;
#else // @header-generator platform
#endif // @header-generator platform
    struct GlobalParameters;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PerColumnParameters;
    struct SurfaceBuilderParameters;
#endif // @header-generator platform
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy : int {
#if defined(LL_PLAT_A) // @header-generator platform
        LOCAL  = 0,
        GLOBAL = 1,
    };

    struct SurfaceBuilderParameters {
    public:
        // SurfaceBuilderParameters inner types define
        using GetTemperatureCallback = std::function<float(const BlockPos&, short)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::SurfaceBuilderData const*>                   mSurfaceBuilderData;
        ::ll::TypedStorage<8, 8, ::ISurfaceBuilder const*>                      mSurfaceBuilder;
        ::ll::TypedStorage<8, 8, ::MountainAttributes const*>                   mMountainAttributes;
        ::ll::TypedStorage<8, 8, ::SurfaceMaterialAdjustmentAttributes const*>  mSurfaceMaterialAdjustmentAttributes;
        ::ll::TypedStorage<8, 48, std::function<float(const BlockPos&, short)>> mGetTemperatureCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceBuilderParameters& operator=(SurfaceBuilderParameters const&);
        SurfaceBuilderParameters(SurfaceBuilderParameters const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SurfaceBuilderParameters(::Biome const&, ::SurfaceBuilderData const*);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Biome const&, ::SurfaceBuilderData const*);
        // NOLINTEND
    };

    struct PerColumnParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockVolume&>                mBlocks;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>             mPos;
        ::ll::TypedStorage<4, 4, float>                         mDepthValue;
        ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const> mHeightRange;
        ::ll::TypedStorage<8, 8, ::HeightmapWrapper const&>     mPreWorldGenHeightmap;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerColumnParameters& operator=(PerColumnParameters const&);
        PerColumnParameters(PerColumnParameters const&);
#else // @header-generator platform
        Local  = 0,
        Global = 1,
#endif // @header-generator platform
    };

    struct GlobalParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Random&>                                   mRandom;
        ::ll::TypedStorage<8, 8, ::PerlinSimplexNoise const&>                 mMaterialAdjNoise;
        ::ll::TypedStorage<4, 4, ::ISurfaceBuilder::WaterLevelStrategy const> mWaterLevelStrategy;
        ::ll::TypedStorage<2, 2, short>                                       mSeaLevel;
        ::ll::TypedStorage<1, 1, bool const>                                  mUseCCOrLater;
        // NOLINTEND

    public:
        // prevent constructor by default
        GlobalParameters& operator=(GlobalParameters const&);
        GlobalParameters(GlobalParameters const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        GlobalParameters();
    };

    struct PerColumnParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockVolume&>                mBlocks;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>             mPos;
        ::ll::TypedStorage<4, 4, float>                         mDepthValue;
        ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const> mHeightRange;
        ::ll::TypedStorage<8, 8, ::HeightmapWrapper const&>     mPreWorldGenHeightmap;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerColumnParameters& operator=(PerColumnParameters const&);
        PerColumnParameters(PerColumnParameters const&);
        PerColumnParameters();
    };

    struct SurfaceBuilderParameters {
    public:
        // SurfaceBuilderParameters inner types define
        using GetTemperatureCallback = ::std::function<float(::BlockPos const&, short)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::SurfaceBuilderData const*>                  mSurfaceBuilderData;
        ::ll::TypedStorage<8, 8, ::ISurfaceBuilder const*>                     mSurfaceBuilder;
        ::ll::TypedStorage<8, 8, ::MountainAttributes const*>                  mMountainAttributes;
        ::ll::TypedStorage<8, 8, ::SurfaceMaterialAdjustmentAttributes const*> mSurfaceMaterialAdjustmentAttributes;
        ::ll::TypedStorage<8, 64, ::std::function<float(::BlockPos const&, short)>> mGetTemperatureCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceBuilderParameters();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI
        GlobalParameters(::Random&, ::PerlinSimplexNoise const&, ::ISurfaceBuilder::WaterLevelStrategy, short, bool);
#else // @header-generator platform
        MCAPI SurfaceBuilderParameters(::Biome const& biome, ::SurfaceBuilderData const* surfaceBuilderData);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::Random&, ::PerlinSimplexNoise const&, ::ISurfaceBuilder::WaterLevelStrategy, short, bool);
#else // @header-generator platform
        MCAPI void* $ctor(::Biome const& biome, ::SurfaceBuilderData const* surfaceBuilderData);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ISurfaceBuilder();
#else // @header-generator platform
    virtual ~ISurfaceBuilder() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initBuilder(::LevelSeed64) = 0;
#else // @header-generator platform
    virtual void initBuilder(::LevelSeed64 levelSeed) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initBiomeSurface(::SurfaceBuilderData&) const = 0;
#else // @header-generator platform
    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBestBuilder(::SurfaceBuilderData const&) const = 0;
#else // @header-generator platform
    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void buildSurfaceAt(::ISurfaceBuilder::GlobalParameters const&, ::ISurfaceBuilder::SurfaceBuilderParameters const&, ::ISurfaceBuilder::PerColumnParameters const&) const = 0;
#else // @header-generator platform
    virtual void buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
    ) const = 0;
#endif // @header-generator platform

    virtual bool getUsesDepthValue() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

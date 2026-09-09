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
    struct SurfaceBuilderParameters;
    struct PerColumnParameters;
    struct GlobalParameters;
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy : int {
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        GlobalParameters(::Random&, ::PerlinSimplexNoise const&, ::ISurfaceBuilder::WaterLevelStrategy, short, bool);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Random&, ::PerlinSimplexNoise const&, ::ISurfaceBuilder::WaterLevelStrategy, short, bool);
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ISurfaceBuilder();

    virtual void initBuilder(::LevelSeed64) = 0;

    virtual void initBiomeSurface(::SurfaceBuilderData&) const = 0;

    virtual bool isBestBuilder(::SurfaceBuilderData const&) const = 0;

    virtual void buildSurfaceAt(::ISurfaceBuilder::GlobalParameters const&, ::ISurfaceBuilder::SurfaceBuilderParameters const&, ::ISurfaceBuilder::PerColumnParameters const&) const = 0;

    virtual bool getUsesDepthValue() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

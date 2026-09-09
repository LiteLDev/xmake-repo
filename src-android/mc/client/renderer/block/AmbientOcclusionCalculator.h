#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/AOBlockData.h"
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockTessellatorCache;
struct BrightnessPair;
struct PrecompCache;
// clang-format on

class AmbientOcclusionCalculator {
public:
    // AmbientOcclusionCalculator inner types declare
    // clang-format off
    struct AocConfiguration;
    // clang-format on

    // AmbientOcclusionCalculator inner types define
    struct AocConfiguration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mBakeFaceShading;
        ::ll::TypedStorage<1, 1, bool> mBrightShadingForEmissiveBlocks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                          mTintSides;
    ::ll::TypedStorage<1, 1, bool>                          mDoSeasons;
    ::ll::TypedStorage<1, 1, bool>                          mTouchEdge;
    ::ll::TypedStorage<4, 24, float[6]>                     mFaceShading;
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache&>      mCache;
    ::ll::TypedStorage<4, 12, ::BlockPos const>             mCenterPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                mCenterBlock;
    ::ll::TypedStorage<4, 16, ::mce::Color>                 mBaseColor;
    ::ll::TypedStorage<8, 8, ::BrightnessPair*>             mOutputLightTexturePositons;
    ::ll::TypedStorage<8, 8, ::mce::Color*>                 mOutputColors;
    ::ll::TypedStorage<8, 624, std::array<AOBlockData, 26>> mAOBlockCacheData;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientOcclusionCalculator& operator=(AmbientOcclusionCalculator const&);
    AmbientOcclusionCalculator(AmbientOcclusionCalculator const&);
    AmbientOcclusionCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AmbientOcclusionCalculator(
        ::BlockPos const&,
        ::Block const&,
        ::BlockTessellatorCache&,
        ::AmbientOcclusionCalculator::AocConfiguration const&
    );

    MCNAPI ::PrecompCache _getCache();

    MCNAPI void calculate(uchar);

    MCNAPI void calculateBoxAverage(bool);

    MCNAPI void calculateWithCache(uchar);

    MCNAPI ::mce::Color getShadingForFace(uchar) const;

    MCNAPI bool isTranslucent(::BlockPos const&);

    MCNAPI void setBaseColor(::mce::Color const&);

    MCNAPI void setOutputColors(::mce::Color*);

    MCNAPI void setOutputLightTexturePositions(::BrightnessPair*);

    MCNAPI void setSeasons(bool);

    MCNAPI void setTintSides(bool);

    MCNAPI void setTouchEdge(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockPos const&,
        ::Block const&,
        ::BlockTessellatorCache&,
        ::AmbientOcclusionCalculator::AocConfiguration const&
    );
    // NOLINTEND
};

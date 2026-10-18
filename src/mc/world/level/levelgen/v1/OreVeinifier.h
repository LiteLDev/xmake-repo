#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/NoiseCellInterpolator.h"

// auto generated forward declare list
// clang-format off
class Block;
class OreVeinifierNoises;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class OreVeinifier {
public:
    // OreVeinifier inner types declare
    // clang-format off
    struct OreVein;
    // clang-format on

    // OreVeinifier inner types define
    struct OreVein {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> oreBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> rawOreBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> fillerBlock;
        ::ll::TypedStorage<4, 4, int const>      minY;
        ::ll::TypedStorage<4, 4, int const>      maxY;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using InterpolatorArray = std::array<NoiseCellInterpolator*, 3>;
#else // @header-generator platform
    using InterpolatorArray = ::std::array<::NoiseCellInterpolator*, 3>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4100>                            mVeininessNoise;
    ::ll::UntypedStorage<4, 4100>                            mVeinNoiseA;
    ::ll::UntypedStorage<4, 4100>                            mVeinNoiseB;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>       mVeininessNoiseInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>       mVeinNoiseInterpolatorA;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>       mVeinNoiseInterpolatorB;
    ::ll::TypedStorage<8, 8, ::OreVeinifierNoises const&>    mNoiseSource;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const> mCopperVein;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const> mIronVein;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeininessNoise;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeinNoiseA;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mVeinNoiseB;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeininessNoiseInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeinNoiseInterpolatorA;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mVeinNoiseInterpolatorB;
    ::ll::TypedStorage<8, 8, ::OreVeinifierNoises const&>                       mNoiseSource;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const>                    mCopperVein;
    ::ll::TypedStorage<8, 32, ::OreVeinifier::OreVein const>                    mIronVein;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OreVeinifier& operator=(OreVeinifier const&);
    OreVeinifier(OreVeinifier const&);
    OreVeinifier();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit OreVeinifier(::OreVeinifierNoises const&);
#else // @header-generator platform
    MCAPI explicit OreVeinifier(::OreVeinifierNoises const& noiseSource);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::OreVeinifierNoises const&);
#else // @header-generator platform
    MCAPI void* $ctor(::OreVeinifierNoises const& noiseSource);
#endif // @header-generator platform
    // NOLINTEND
};

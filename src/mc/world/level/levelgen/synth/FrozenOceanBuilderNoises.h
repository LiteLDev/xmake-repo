#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class FrozenOceanBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 56>                                         mIcebergPillarNoise;
    ::ll::UntypedStorage<8, 56>                                         mIcebergSurfaceNoise;
    ::ll::UntypedStorage<8, 56>                                         mIcebergPillarRoofNoise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mIcebergPillarNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mIcebergSurfaceNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
                                                                        mIcebergPillarRoofNoise;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FrozenOceanBuilderNoises& operator=(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FrozenOceanBuilderNoises();
#else // @header-generator platform
    MCAPI ~FrozenOceanBuilderNoises();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

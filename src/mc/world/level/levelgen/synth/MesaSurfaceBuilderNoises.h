#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class MesaSurfaceBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 56> mClayBandsOffsetNoise;
    ::ll::UntypedStorage<8, 56> mSurfaceNoise;
    ::ll::UntypedStorage<8, 56> mPillarNoise;
    ::ll::UntypedStorage<8, 56> mPillarRoofNoise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mClayBandsOffsetNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSurfaceNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarRoofNoise;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MesaSurfaceBuilderNoises& operator=(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MesaSurfaceBuilderNoises();
#else // @header-generator platform
    MCAPI ~MesaSurfaceBuilderNoises();
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

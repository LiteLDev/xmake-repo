#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
// clang-format on

class FrozenOceanBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                                         mIcebergPillarNoise;
    ::ll::UntypedStorage<8, 56>                                         mIcebergSurfaceNoise;
    ::ll::UntypedStorage<8, 56>                                         mIcebergPillarRoofNoise;
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    FrozenOceanBuilderNoises& operator=(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises(FrozenOceanBuilderNoises const&);
    FrozenOceanBuilderNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FrozenOceanBuilderNoises();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
// clang-format on

class MesaSurfaceBuilderNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mClayBandsOffsetNoise;
    ::ll::UntypedStorage<8, 56> mSurfaceNoise;
    ::ll::UntypedStorage<8, 56> mPillarNoise;
    ::ll::UntypedStorage<8, 56> mPillarRoofNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBuilderNoises& operator=(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises(MesaSurfaceBuilderNoises const&);
    MesaSurfaceBuilderNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MesaSurfaceBuilderNoises();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

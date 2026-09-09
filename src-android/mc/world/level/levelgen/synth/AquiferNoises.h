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

class AquiferNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                                         mBarrierNoise;
    ::ll::UntypedStorage<8, 56>                                         mFluidLevelFloodednessNoise;
    ::ll::UntypedStorage<8, 56>                                         mLavaNoise;
    ::ll::UntypedStorage<8, 56>                                         mFluidLevelSpreadNoise;
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mPositionalRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    AquiferNoises& operator=(AquiferNoises const&);
    AquiferNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AquiferNoises();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

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

class OreVeinifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56>                                         mVeininessNoiseSource;
    ::ll::UntypedStorage<8, 56>                                         mVeinNoiseSourceA;
    ::ll::UntypedStorage<8, 56>                                         mVeinNoiseSourceB;
    ::ll::UntypedStorage<8, 56>                                         mGapNoiseSource;
    ::ll::TypedStorage<8, 24, ::XoroshiroPositionalRandomFactory const> mPositionalRandomFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    OreVeinifierNoises& operator=(OreVeinifierNoises const&);
    OreVeinifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OreVeinifierNoises();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

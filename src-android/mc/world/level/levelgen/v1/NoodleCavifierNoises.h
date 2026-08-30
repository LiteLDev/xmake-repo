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

class NoodleCavifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mToggleNoiseSource;
    ::ll::UntypedStorage<8, 56> mThicknessNoiseSource;
    ::ll::UntypedStorage<8, 56> mRidgeANoiseSource;
    ::ll::UntypedStorage<8, 56> mRidgeBNoiseSource;
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifierNoises& operator=(NoodleCavifierNoises const&);
    NoodleCavifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NoodleCavifierNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NoodleCavifierNoises make(::XoroshiroPositionalRandomFactory const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

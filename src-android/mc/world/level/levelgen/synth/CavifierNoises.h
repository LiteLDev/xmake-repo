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

class CavifierNoises {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mPillarNoiseSource;
    ::ll::UntypedStorage<8, 56> mPillarRarenessModulator;
    ::ll::UntypedStorage<8, 56> mPillarThicknessModulator;
    ::ll::UntypedStorage<8, 56> mSpaghetti2DNoiseSource;
    ::ll::UntypedStorage<8, 56> mSpaghetti2DElevationModulator;
    ::ll::UntypedStorage<8, 56> mSpaghetti2DRarityModulator;
    ::ll::UntypedStorage<8, 56> mSpaghetti2DThicknessModulator;
    ::ll::UntypedStorage<8, 56> mSpaghetti3DNoiseSource1;
    ::ll::UntypedStorage<8, 56> mSpaghetti3DNoiseSource2;
    ::ll::UntypedStorage<8, 56> mSpaghetti3DRarityModulator;
    ::ll::UntypedStorage<8, 56> mSpaghetti3DThicknessModulator;
    ::ll::UntypedStorage<8, 56> mSpaghettiRoughnessNoise;
    ::ll::UntypedStorage<8, 56> mSpaghettiRoughnessModulator;
    ::ll::UntypedStorage<8, 56> mBigEntranceNoiseSource;
    ::ll::UntypedStorage<8, 56> mLayerNoiseSource;
    ::ll::UntypedStorage<8, 56> mCheeseNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    CavifierNoises& operator=(CavifierNoises const&);
    CavifierNoises();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CavifierNoises(::CavifierNoises const&);

    MCNAPI ~CavifierNoises();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CavifierNoises make(::XoroshiroPositionalRandomFactory const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CavifierNoises const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

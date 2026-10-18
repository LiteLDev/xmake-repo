#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class XoroshiroPositionalRandomFactory;
#if defined(LL_PLAT_A) // @header-generator platform
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CavifierNoises {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarRarenessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mPillarThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DElevationModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DRarityModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti2DThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DNoiseSource1;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DNoiseSource2;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DRarityModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghetti3DThicknessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghettiRoughnessNoise;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mSpaghettiRoughnessModulator;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mBigEntranceNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mLayerNoiseSource;
    ::ll::TypedStorage<8, 56, ::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>> const>
        mCheeseNoise;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::CavifierNoises make(::XoroshiroPositionalRandomFactory const& randomFactory);
#endif // @header-generator platform
    // NOLINTEND
};

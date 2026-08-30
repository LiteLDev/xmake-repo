#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/NoiseCellInterpolator.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class NoodleCavifierNoises;
class Vec3;
// clang-format on

class NoodleCavifier {
public:
    // NoodleCavifier inner types define
    using InterpolatorArray = std::array<NoiseCellInterpolator*, 4>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NoodleCavifierNoises const&> mNoises;
    ::ll::TypedStorage<2, 2, short const>                   mNoodlesMinHeight;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>      mToggleInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>      mThicknessInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>      mRidgeAInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>      mRidgeBInterpolator;
    ::ll::UntypedStorage<4, 4100>                           mToggleNoiseBuffer;
    ::ll::UntypedStorage<4, 4100>                           mThicknessNoiseBuffer;
    ::ll::UntypedStorage<4, 4100>                           mRidgeANoiseBuffer;
    ::ll::UntypedStorage<4, 4100>                           mRidgeBNoiseBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NoodleCavifier(::NoodleCavifierNoises const&, short);

    MCNAPI float cavify(float, ::BlockPos const&) const;

    MCNAPI void fillNoiseAtPos(::Vec3 const&, int, float const);

    MCNAPI std::array<NoiseCellInterpolator*, 4> getInterpolators(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NoodleCavifierNoises const&, short);
    // NOLINTEND
};

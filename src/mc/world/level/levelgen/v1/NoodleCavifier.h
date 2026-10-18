#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/NoiseCellInterpolator.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class NoodleCavifierNoises;
class Vec3;
// clang-format on

class NoodleCavifier {
public:
    // NoodleCavifier inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using InterpolatorArray = std::array<NoiseCellInterpolator*, 4>;
#else // @header-generator platform
    using InterpolatorArray = ::std::array<::NoiseCellInterpolator*, 4>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::NoodleCavifierNoises const&>                     mNoises;
    ::ll::TypedStorage<2, 2, short const>                                       mNoodlesMinHeight;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mToggleInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mThicknessInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mRidgeAInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mRidgeBInterpolator;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mToggleNoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mThicknessNoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mRidgeANoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mRidgeBNoiseBuffer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NoodleCavifier(::NoodleCavifierNoises const&, short);

    MCNAPI float cavify(float, ::BlockPos const&) const;

    MCNAPI void fillNoiseAtPos(::Vec3 const&, int, float const);

    MCNAPI std::array<NoiseCellInterpolator*, 4> getInterpolators(int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NoodleCavifierNoises const&, short);
#else // @header-generator platform
    MCAPI void fillNoiseAtPos(::Vec3 const& worldPos, int bufferIndex, float noiseValue);
#endif // @header-generator platform
    // NOLINTEND
};

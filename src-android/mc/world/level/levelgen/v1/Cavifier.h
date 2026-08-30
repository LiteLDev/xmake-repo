#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CavifierNoises;
class Vec3;
// clang-format on

class Cavifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CavifierNoises const&> mCavifierNoises;
    ::ll::TypedStorage<4, 4, float>                   mMinCellY;
    ::ll::TypedStorage<4, 4, float>                   mDensityBoost;
    // NOLINTEND

public:
    // prevent constructor by default
    Cavifier& operator=(Cavifier const&);
    Cavifier(Cavifier const&);
    Cavifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Cavifier(::CavifierNoises const&, float const, float const);

    MCNAPI float _getPillars(::Vec3 const) const;

    MCNAPI float _getSpaghetti2d(::Vec3 const) const;

    MCNAPI float _getSpaghetti3D(::Vec3 const) const;

    MCNAPI float cavify(::Vec3 const, int const, float const) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CavifierNoises const&, float const, float const);
    // NOLINTEND
};

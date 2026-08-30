#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Matrix;
// clang-format on

struct MolangMatrix {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mMatrix;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangMatrix const& getDefaultErrorValue();
    // NOLINTEND
};

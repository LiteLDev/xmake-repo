#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/density/DensityFunctionPtr.h"

class DensityFunctionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DensityFunctionPtr>> mFunctions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DensityFunctionRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

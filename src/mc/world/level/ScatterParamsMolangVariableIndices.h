#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

struct ScatterParamsMolangVariableIndices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginXIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginYIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>    mVariableOriginZIndex;
    ::ll::TypedStorage<2, 6, ::MolangVariableIndex[3]> mVariableWorldIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScatterParamsMolangVariableIndices();
#else // @header-generator platform
    MCAPI ScatterParamsMolangVariableIndices();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

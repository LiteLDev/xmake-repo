#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableMap.h"

struct AtomicEntityMolangVariablesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariableMap;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityMolangVariablesComponent& operator=(AtomicEntityMolangVariablesComponent const&);
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class MolangVariableMap;
#else // @header-generator platform
#endif // @header-generator platform
struct MolangEvalParams;
// clang-format on

struct MolangContextVariableMapWithCleanup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MolangEvalParams&> mEvalParams;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangContextVariableMapWithCleanup& operator=(MolangContextVariableMapWithCleanup const&);
    MolangContextVariableMapWithCleanup(MolangContextVariableMapWithCleanup const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MolangContextVariableMapWithCleanup();
#endif // @header-generator platform
};

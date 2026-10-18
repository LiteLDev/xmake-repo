#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangArrayVariable : public ::MolangHashStringVariable<MolangArrayVariable> {
public:
    // prevent constructor by default
    MolangArrayVariable();
};
#else // @header-generator platform
struct MolangArrayVariable : public ::MolangHashStringVariable<::MolangArrayVariable> {};
#endif // @header-generator platform

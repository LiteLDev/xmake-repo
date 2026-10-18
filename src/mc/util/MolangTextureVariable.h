#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangTextureVariable : public ::MolangHashStringVariable<MolangTextureVariable> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangTextureVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct MolangTextureVariable : public ::MolangHashStringVariable<::MolangTextureVariable> {};
#endif // @header-generator platform

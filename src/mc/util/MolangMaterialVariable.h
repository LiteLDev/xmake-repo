#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangMaterialVariable : public ::MolangHashStringVariable<MolangMaterialVariable> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangMaterialVariable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct MolangMaterialVariable : public ::MolangHashStringVariable<::MolangMaterialVariable> {};
#endif // @header-generator platform

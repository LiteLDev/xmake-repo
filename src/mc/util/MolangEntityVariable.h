#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct MolangEntityVariable : public ::MolangHashStringVariable<MolangEntityVariable> {
#else // @header-generator platform
struct MolangEntityVariable : public ::MolangHashStringVariable<::MolangEntityVariable> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex> mMolangVariableIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangEntityVariable();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MolangEntityVariable(::HashedString);
#else // @header-generator platform
    MCAPI explicit MolangEntityVariable(::HashedString value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString);
#else // @header-generator platform
    MCAPI void* $ctor(::HashedString value);
#endif // @header-generator platform
    // NOLINTEND
};

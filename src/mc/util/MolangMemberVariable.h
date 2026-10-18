#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
#else // @header-generator platform
#endif // @header-generator platform
struct MolangScriptArg;
#if defined(LL_PLAT_A) // @header-generator platform
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct MolangMemberVariable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::UntypedStorage<8, 88>               mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mData;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mData;
#endif
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MolangMemberVariable();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MolangMemberVariable();
#else // @header-generator platform
    MCAPI ~MolangMemberVariable();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

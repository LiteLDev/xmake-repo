#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ScriptInvalidPathError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkef83ea;
    ::ll::UntypedStorage<8, 32> mUnk58afb9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptInvalidPathError& operator=(ScriptInvalidPathError const&);
    ScriptInvalidPathError(ScriptInvalidPathError const&);
#endif // @header-generator platform
    ScriptInvalidPathError();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptInvalidPathError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

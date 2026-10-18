#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

#endif // @header-generator platform
namespace ScriptModuleDiagnostics {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptSentryAlreadyInitializedError : public ::Scripting::BaseError {};
#else // @header-generator platform
struct ScriptSentryAlreadyInitializedError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSentryAlreadyInitializedError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ScriptModuleDiagnostics

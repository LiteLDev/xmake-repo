#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCommandError : public ::Scripting::BaseError {
public:
    // ScriptCommandError inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ErrorType : uint {
#else // @header-generator platform
    enum class ErrorType : int {
#endif // @header-generator platform
        Parsing   = 0,
        Executing = 1,
    };

public:
    // prevent constructor by default
    ScriptCommandError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCommandError(std::string, ::MCRESULT const&);
#else // @header-generator platform
    MCAPI ScriptCommandError(::std::string message, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCommandError(std::string, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType);
#else // @header-generator platform
    MCAPI ScriptCommandError(::std::string messages, ::MCRESULT const& result);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::MCRESULT const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string message, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string messages, ::MCRESULT const& result);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

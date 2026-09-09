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
    enum ErrorType : uint {
        Parsing   = 0,
        Executing = 1,
    };

public:
    // prevent constructor by default
    ScriptCommandError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCommandError(std::string, ::MCRESULT const&);

    MCNAPI ScriptCommandError(std::string, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::MCRESULT const&);

    MCNAPI void* $ctor(std::string, ::ScriptModuleMinecraft::ScriptCommandError::ErrorType);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

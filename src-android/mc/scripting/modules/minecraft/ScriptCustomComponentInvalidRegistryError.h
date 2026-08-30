#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomComponentRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentInvalidRegistryError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptCustomComponentInvalidRegistryError();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const&);

    MCNAPI static ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validateV1(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

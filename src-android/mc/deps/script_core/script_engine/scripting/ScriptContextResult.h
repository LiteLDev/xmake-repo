#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleResolveResult.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptContext.h"

namespace Scripting {

struct ScriptContextResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::optional<Scripting::ScriptContext>> context;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              missingRuntimeName;
    ::ll::TypedStorage<8, 120, ::Scripting::ModuleResolveResult>       resolveResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptContextResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

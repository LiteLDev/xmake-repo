#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { class IScriptSentryPlugin; }
namespace ScriptModuleDiagnostics { class ScriptSentrySession; }
namespace ScriptModuleDiagnostics { struct ScriptSentryAlreadyInitializedError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentry {
public:
    // ScriptSentry inner types define
    using InitResultT = ::Scripting::
        Result<void, ScriptModuleDiagnostics::ScriptSentryAlreadyInitializedError, Scripting::InvalidArgumentError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleDiagnostics::IScriptSentryPlugin>>  mScriptPlugin;
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics

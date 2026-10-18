#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleDiagnostics { class IScriptSentryPlugin; }
namespace ScriptModuleDiagnostics { class ScriptSentrySession; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleDiagnostics { struct ScriptSentryAlreadyInitializedError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ClassBinding; }
#endif // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptSentry inner types define
    using InitResultT = ::Scripting::
        Result<void, ScriptModuleDiagnostics::ScriptSentryAlreadyInitializedError, Scripting::InvalidArgumentError>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleDiagnostics::IScriptSentryPlugin>>  mScriptPlugin;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk7775fc;
    ::ll::UntypedStorage<8, 8>  mUnk5a47a0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentry& operator=(ScriptSentry const&);
    ScriptSentry(ScriptSentry const&);
    ScriptSentry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics

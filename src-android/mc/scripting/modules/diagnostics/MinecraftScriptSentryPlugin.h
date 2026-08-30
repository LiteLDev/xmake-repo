#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/IScriptSentryPlugin.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
// clang-format on

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryPlugin : public ::ScriptModuleDiagnostics::IScriptSentryPlugin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptPlugin&> mPlugin;
    ::ll::TypedStorage<8, 24, std::string>    mPlatformName;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptSentryPlugin& operator=(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin();
};

} // namespace ScriptModuleDiagnostics

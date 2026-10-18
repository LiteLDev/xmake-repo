#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/diagnostics/IScriptSentryPlugin.h"

// auto generated forward declare list
// clang-format off
class ScriptPlugin;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScriptSentryLogger;
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleDiagnostics {

class MinecraftScriptSentryPlugin : public ::ScriptModuleDiagnostics::IScriptSentryPlugin {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptPlugin&> mPlugin;
    ::ll::TypedStorage<8, 24, std::string>    mPlatformName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk8c3ac7;
    ::ll::UntypedStorage<8, 32> mUnk23c0ab;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScriptSentryPlugin& operator=(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin(MinecraftScriptSentryPlugin const&);
    MinecraftScriptSentryPlugin();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftScriptSentryPlugin() /*override*/ = default;

    virtual void setSentryLogger(::std::unique_ptr<::ScriptSentryLogger> sentryLogger) /*override*/;

    virtual ::std::string const& getPlatformName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftScriptSentryPlugin(::ScriptPlugin& plugin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptPlugin& plugin);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setSentryLogger(::std::unique_ptr<::ScriptSentryLogger> sentryLogger);

    MCNAPI ::std::string const& $getPlatformName() const;


    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleDiagnostics

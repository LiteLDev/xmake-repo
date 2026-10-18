#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class MinecraftCommands;
class ScriptCommandOutput;
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
// clang-format on

class DeferredScriptCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptCommandOutput>> mScriptCommandOutput;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandContext>>      mCommandContext;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>      mScope;
    ::ll::UntypedStorage<8, 80>                                    mPromise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptCommandOutput>> mScriptCommandOutput;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandContext>>      mCommandContext;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>          mScope;
    ::ll::TypedStorage<
        8,
        80,
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError>>
        mPromise;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredScriptCommand();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeferredScriptCommand();
#else // @header-generator platform
    virtual ~DeferredScriptCommand() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::MinecraftCommands&);
#else // @header-generator platform
    virtual void execute(::MinecraftCommands& commands) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DeferredScriptCommand(
        std::unique_ptr<ScriptCommandOutput>,
        std::unique_ptr<CommandContext>,
        ::Scripting::WeakLifetimeScope,
#else // @header-generator platform
    MCAPI DeferredScriptCommand(
        ::std::unique_ptr<::ScriptCommandOutput> scriptCommandOutput,
        ::std::unique_ptr<::CommandContext>      commandContext,
        ::Scripting::WeakLifetimeScope           scope,
#endif // @header-generator platform
        ::Scripting::Promise<
#if defined(LL_PLAT_A) // @header-generator platform
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
            ScriptModuleMinecraft::ScriptCommandError>
#else // @header-generator platform
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError> promise
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<ScriptCommandOutput>,
        std::unique_ptr<CommandContext>,
        ::Scripting::WeakLifetimeScope,
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::ScriptCommandOutput> scriptCommandOutput,
        ::std::unique_ptr<::CommandContext>      commandContext,
        ::Scripting::WeakLifetimeScope           scope,
#endif // @header-generator platform
        ::Scripting::Promise<
#if defined(LL_PLAT_A) // @header-generator platform
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
            ScriptModuleMinecraft::ScriptCommandError>
#else // @header-generator platform
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError> promise
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::MinecraftCommands&);
#else // @header-generator platform
    MCAPI void $execute(::MinecraftCommands& commands);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

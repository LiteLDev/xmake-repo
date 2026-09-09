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
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptCommandOutput>> mScriptCommandOutput;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandContext>>      mCommandContext;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>      mScope;
    ::ll::UntypedStorage<8, 80>                                    mPromise;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredScriptCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredScriptCommand();

    virtual void execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredScriptCommand(
        std::unique_ptr<ScriptCommandOutput>,
        std::unique_ptr<CommandContext>,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Promise<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
            ScriptModuleMinecraft::ScriptCommandError>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<ScriptCommandOutput>,
        std::unique_ptr<CommandContext>,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::Promise<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
            ScriptModuleMinecraft::ScriptCommandError>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

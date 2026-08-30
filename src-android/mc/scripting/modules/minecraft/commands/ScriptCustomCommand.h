#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace ScriptModuleMinecraft { class CommandClosureStorage; }
namespace ScriptModuleMinecraft { class ParamStorageBase; }
namespace ScriptModuleMinecraft { class ScriptCustomCommandOrigin; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraft::CommandClosureStorage>>         mClosureStorage;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleMinecraft::ParamStorageBase>>> mParamStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptCustomCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommand(
        std::shared_ptr<ScriptModuleMinecraft::CommandClosureStorage>,
        std::vector<std::unique_ptr<ScriptModuleMinecraft::ParamStorageBase>>&&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool* getParamStorageIsSet(::Command*, int);

    MCNAPI static void* getParamStorageValue(::Command*, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::CommandClosureStorage>,
        std::vector<std::unique_ptr<ScriptModuleMinecraft::ParamStorageBase>>&&
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
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

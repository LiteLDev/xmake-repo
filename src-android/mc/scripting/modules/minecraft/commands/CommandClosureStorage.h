#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandResult.h"

namespace ScriptModuleMinecraft {

class CommandClosureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104>                                                      mClosure;
    ::ll::TypedStorage<8, 120, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandClosureStorage();
};

} // namespace ScriptModuleMinecraft

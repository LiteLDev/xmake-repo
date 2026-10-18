#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandResult.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraft {

class CommandClosureStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 104>                                                      mClosure;
    ::ll::TypedStorage<8, 120, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        104,
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>>
                                                                                      mClosure;
    ::ll::TypedStorage<8, 136, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CommandClosureStorage();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft

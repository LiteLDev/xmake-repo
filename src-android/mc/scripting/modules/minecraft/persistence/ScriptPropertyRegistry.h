#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<ServerLevel>> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPropertyRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptPropertyRegistry(::ServerLevel&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerLevel&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

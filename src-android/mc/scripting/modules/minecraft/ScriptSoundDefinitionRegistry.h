#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptSoundDefinition; }
namespace ScriptModuleMinecraft { struct ScriptSoundDefinitionFilter; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSoundDefinitionRegistry
: public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptSoundDefinitionRegistry> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundDefinitionRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSoundDefinitionRegistry(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope const&, ::gsl::not_null<ServerLevel*>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

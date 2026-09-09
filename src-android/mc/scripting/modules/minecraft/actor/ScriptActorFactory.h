#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _processCreatedHandle(
        ::Actor const&,
        ::Scripting::WeakLifetimeScope const&,
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>&
    );

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>
    getHandle(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>
    getHandle(::Actor const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

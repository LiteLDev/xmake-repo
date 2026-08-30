#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptWorld; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWorld>>
    findHandle(::Scripting::WeakLifetimeScope&, ::ServerLevel&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWorld> getHandle(
        ::Scripting::WeakLifetimeScope&,
        ::ServerLevel&,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

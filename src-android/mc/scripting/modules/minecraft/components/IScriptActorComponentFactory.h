#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptActorComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptActorComponentFactory() = default;

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActorComponent> createComponent(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&, std::string const&) = 0;

    virtual bool hasComponent(::WeakEntityRef) const = 0;

    virtual std::vector<Scripting::ClassBinding> bind() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

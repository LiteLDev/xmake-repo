#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemComponentFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptItemComponentFactory();

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemComponent> createComponent(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, ::Scripting::WeakLifetimeScope const&) const = 0;

    virtual std::vector<Scripting::ClassBinding> bind() const = 0;

    virtual bool canAddOn(::ScriptModuleMinecraft::ScriptItemStack&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

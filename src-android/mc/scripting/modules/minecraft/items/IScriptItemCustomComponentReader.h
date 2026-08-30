#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptCustomComponentParameters; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentReader {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScriptItemCustomComponentReader();

    virtual std::vector<std::string_view> getValidComponentsForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>) const = 0;

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCustomComponentParameters> const& tryGetCustomComponentParametersForItem(::Scripting::WeakTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>, std::string_view, ::Scripting::WeakLifetimeScope const&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

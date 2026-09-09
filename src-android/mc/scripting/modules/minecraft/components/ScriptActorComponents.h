#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace ScriptModuleMinecraft { class IScriptActorComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorComponents {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptActorComponentFactory>>> mNativeFactories;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorComponents();

    MCNAPI std::vector<std::string_view> getSupportedComponentIds(::WeakRef<EntityContext>) const;

    MCNAPI std::shared_ptr<ScriptModuleMinecraft::IScriptActorComponentFactory> const&
           tryGetFactory(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(
        ::Scripting::ModuleBindingBuilder&,
        ::Scripting::Version const&,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&,
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorComponents> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

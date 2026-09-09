#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemComponent; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptItemComponentFactory>>> mNativeFactories;
    ::ll::UntypedStorage<1, 16> mCustomComponentReader;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemComponents(::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentReader>);

    MCNAPI void bind(
        ::Scripting::ModuleBindingBuilder&,
        ::Scripting::Version const&,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentReader>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

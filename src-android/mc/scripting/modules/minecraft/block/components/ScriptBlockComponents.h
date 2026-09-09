#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class IScriptBlockComponentFactory; }
namespace ScriptModuleMinecraft { class IScriptBlockCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockComponents {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::shared_ptr<ScriptModuleMinecraft::IScriptBlockComponentFactory>>> mNativeFactories;
    ::ll::UntypedStorage<1, 16> mCustomComponentReader;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockComponents(::WeakRef<const ScriptModuleMinecraft::IScriptBlockCustomComponentReader>);

    MCNAPI std::vector<std::string_view> getSupportedComponentIds(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation> const&,
        bool
    ) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponent(std::string_view, ::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, bool) const;

    MCNAPI std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>>
    tryCreateComponentV010(std::string_view, ::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(
        ::Scripting::ModuleBindingBuilder&,
        ::Scripting::Version const&,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&,
        std::shared_ptr<ScriptModuleMinecraft::ScriptBlockComponents> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<const ScriptModuleMinecraft::IScriptBlockCustomComponentReader>);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

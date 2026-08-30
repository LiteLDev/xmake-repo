#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerBindingModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mImportRestricted;
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mLevel;
    ::ll::UntypedStorage<1, 16>              mItemCustomComponentRegistry;
    ::ll::UntypedStorage<1, 16>              mBlockCustomComponentRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinecraftServerBindingModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerBindingModuleFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftServerBindingModuleFactory(
        ::ServerLevel*,
        ::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>,
        ::WeakRef<const ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>,
        bool
    );

    MCNAPI void _addVersions();

    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&,
        std::optional<Scripting::ContextConfig> const&,
        bool,
        std::vector<std::string> const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerLevel*,
        ::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>,
        ::WeakRef<const ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>,
        bool
    );
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

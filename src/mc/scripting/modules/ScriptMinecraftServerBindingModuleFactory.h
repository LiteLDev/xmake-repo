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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerBindingModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           mImportRestricted;
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mLevel;
    ::ll::UntypedStorage<1, 16>              mItemCustomComponentRegistry;
    ::ll::UntypedStorage<1, 16>              mBlockCustomComponentRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkb4ef81;
    ::ll::UntypedStorage<8, 8>  mUnk52d2a7;
    ::ll::UntypedStorage<8, 16> mUnk6c2f68;
    ::ll::UntypedStorage<8, 16> mUnk7524c9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptMinecraftServerBindingModuleFactory& operator=(ScriptMinecraftServerBindingModuleFactory const&);
    ScriptMinecraftServerBindingModuleFactory(ScriptMinecraftServerBindingModuleFactory const&);
#endif // @header-generator platform
    ScriptMinecraftServerBindingModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptMinecraftServerBindingModuleFactory();
#else // @header-generator platform
    virtual ~ScriptMinecraftServerBindingModuleFactory() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftServerBindingModuleFactory(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ServerLevel*,
        ::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>,
        ::WeakRef<const ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>,
        bool
#else // @header-generator platform
        ::ServerLevel*                                                                level,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry const>  itemCustomComponentRegistry,
        ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry const> blockCustomComponentRegistry,
        bool                                                                          importRestricted
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addVersions();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding _generateBindings(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::ModuleBindingBuilder&,
        std::optional<Scripting::ContextConfig> const&,
        bool,
        std::vector<std::string> const&
#else // @header-generator platform
        ::Scripting::ModuleBindingBuilder&                 moduleBuilder,
        ::std::optional<::Scripting::ContextConfig> const& contextConfig,
        bool                                               allowUntagged,
        ::std::vector<::std::string> const&                additionalTags
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version);
#else // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& ModuleName();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ServerLevel*,
        ::WeakRef<const ScriptModuleMinecraft::IScriptItemCustomComponentRegistry>,
        ::WeakRef<const ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>,
        bool
#else // @header-generator platform
        ::ServerLevel*                                                                level,
        ::WeakRef<::ScriptModuleMinecraft::IScriptItemCustomComponentRegistry const>  itemCustomComponentRegistry,
        ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry const> blockCustomComponentRegistry,
        bool                                                                          importRestricted
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

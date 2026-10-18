#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentRegistry; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel*> mLevel;
    ::ll::UntypedStorage<1, 16>              mItemCustomComponentRegistry;
    ::ll::UntypedStorage<1, 16>              mBlockCustomComponentRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2bf29c;
    ::ll::UntypedStorage<8, 16> mUnkebd543;
    ::ll::UntypedStorage<8, 16> mUnkcb6454;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptMinecraftModuleFactory& operator=(ScriptMinecraftModuleFactory const&);
    ScriptMinecraftModuleFactory(ScriptMinecraftModuleFactory const&);
#endif // @header-generator platform
    ScriptMinecraftModuleFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptMinecraftModuleFactory();
#else // @header-generator platform
    virtual ~ScriptMinecraftModuleFactory() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptMinecraftModuleFactory(::ServerLevel*);
#else // @header-generator platform
    MCNAPI explicit ScriptMinecraftModuleFactory(::ServerLevel* level);
#endif // @header-generator platform

    MCNAPI void _addVersions();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding _generateBindings(::Scripting::ModuleBindingBuilder&, std::string const&);
#else // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder& moduleBuilder, ::std::string const& versionPath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID getModuleUUID();
#else // @header-generator platform
    MCNAPI static ::std::string getModuleName(::Scripting::Version version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(std::vector<Scripting::Version>);
#else // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::std::vector<::Scripting::Version> versions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version);
#else // @header-generator platform
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor(::Scripting::Version version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& LegacyModuleName();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static char const*& ModuleName();

    MCNAPI static ::mce::UUID const& ModuleUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerLevel*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ServerLevel* level);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

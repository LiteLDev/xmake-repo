#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct Version; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IGameplayUserManagerConnector*> mUserManagerConnector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk14071d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptMinecraftServerUIBindingsModuleFactory& operator=(ScriptMinecraftServerUIBindingsModuleFactory const&);
    ScriptMinecraftServerUIBindingsModuleFactory(ScriptMinecraftServerUIBindingsModuleFactory const&);
#endif // @header-generator platform
    ScriptMinecraftServerUIBindingsModuleFactory();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerUIBindingsModuleFactory();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptMinecraftServerUIBindingsModuleFactory(::IGameplayUserManagerConnector*);
#else // @header-generator platform
    MCNAPI explicit ScriptMinecraftServerUIBindingsModuleFactory(::IGameplayUserManagerConnector* userManagerConnector);
#endif // @header-generator platform

    MCNAPI void _addVersions();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding
    _generateBindings(::Scripting::ModuleBindingBuilder&, bool, std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&  moduleBuilder,
        bool                                allowUntagged,
        ::std::vector<::std::string> const& allowedTags
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version);

    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(std::vector<Scripting::Version>);
#else // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor(::Scripting::Version version);
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IGameplayUserManagerConnector*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::IGameplayUserManagerConnector* userManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

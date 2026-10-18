#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_factory/scripting/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ModuleDescriptor; }
namespace mce { class UUID; }
// clang-format on

class ScriptMinecraftServerUIPrivateBindingsModuleFactory : public ::Scripting::GenericModuleBindingFactory {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptMinecraftServerUIPrivateBindingsModuleFactory();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMinecraftServerUIPrivateBindingsModuleFactory();

    MCNAPI void _addVersions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ModuleDependency makeModuleDependencyFor();
#else // @header-generator platform
    MCNAPI static ::Scripting::ModuleDescriptor makeModuleDescriptorFor();
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
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ClassBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#include "mc/deps/script_core/binding_type/scripting/EnumBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ErrorBinding.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/InterfaceBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ObjectFactory.h"
#include "mc/deps/script_core/binding_type/scripting/TypeMapData.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TypeMapData; }
// clang-format on
#endif // @header-generator platform

namespace Scripting {

struct ModuleBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>            descriptor;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDependency>> moduleDependencies;
    ::ll::TypedStorage<8, 24, std::string>                              javaScript;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ClassBinding>>     classBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::InterfaceBinding>> interfaceBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ErrorBinding>>     errorBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding>>      enumBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>  functionBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ObjectFactory>>    objectFactories;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>  constants;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::TypeMapData>>      typeMaps;
    ::ll::TypedStorage<1, 1, bool>                                      importRestricted;
    ::ll::TypedStorage<1, 1, bool>                                      requireDynamicImport;
#else // @header-generator platform
    ::ll::TypedStorage<8, 96, ::Scripting::ModuleDescriptor>                descriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleDependency>> moduleDependencies;
    ::ll::TypedStorage<8, 32, ::std::string>                                javaScript;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ClassBinding>>     classBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::InterfaceBinding>> interfaceBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ErrorBinding>>     errorBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::EnumBinding>>      enumBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::FunctionBinding>>  functionBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ObjectFactory>>    objectFactories;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ConstantFactory>>  constants;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::TypeMapData>>      typeMaps;
    ::ll::TypedStorage<1, 1, bool>                                          importRestricted;
    ::ll::TypedStorage<1, 1, bool>                                          requireDynamicImport;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ModuleBinding& operator=(ModuleBinding const&);
    ModuleBinding(ModuleBinding const&);
    ModuleBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleBinding(::Scripting::ModuleBinding&&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ModuleBinding(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::string&&                              javaScript_
    );
#endif // @header-generator platform

    MCNAPI ~ModuleBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleBinding&&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void* $ctor(
        ::Scripting::ModuleDescriptor                descriptor_,
        ::std::vector<::Scripting::ModuleDependency> dependencies_,
        ::std::string&&                              javaScript_
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

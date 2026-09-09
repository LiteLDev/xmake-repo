#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ClassBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#include "mc/deps/script_core/binding_type/scripting/EnumBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ErrorBinding.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/InterfaceBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ObjectFactory.h"
#include "mc/deps/script_core/binding_type/scripting/TypeMapData.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"

namespace Scripting {

struct ModuleBinding {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ModuleBinding(::Scripting::ModuleBinding&&);

    MCNAPI ~ModuleBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleBinding&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

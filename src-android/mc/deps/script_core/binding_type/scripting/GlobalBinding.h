#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ClassBinding.h"
#include "mc/deps/script_core/binding_type/scripting/EnumBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ErrorBinding.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/InterfaceBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ObjectFactory.h"

namespace Scripting {

struct GlobalBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ClassBinding>>     classBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::InterfaceBinding>> interfaceBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ErrorBinding>>     errorBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding>>      enumBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>  functionBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ObjectFactory>>    objectFactories;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalBinding& operator=(GlobalBinding const&);
    GlobalBinding(GlobalBinding const&);
    GlobalBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GlobalBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

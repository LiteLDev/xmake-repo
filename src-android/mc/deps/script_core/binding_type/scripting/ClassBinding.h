#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct IteratorBinding; }
// clang-format on

namespace Scripting {

struct ClassBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                 name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                           type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                           baseType;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>     constructors;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::IteratorBinding>> iterator;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>     functions;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>>     properties;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>     constants;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>              requiredRuntimeConditions;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>              missingRuntimeConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    ClassBinding(ClassBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding const&);

    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding&&);
    // NOLINTEND
};

} // namespace Scripting

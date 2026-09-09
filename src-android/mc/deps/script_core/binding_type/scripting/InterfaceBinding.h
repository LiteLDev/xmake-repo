#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

namespace Scripting {

struct InterfaceBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       baseType;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> properties;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>          requiredRuntimeConditions;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>          missingRuntimeConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InterfaceBinding(::Scripting::InterfaceBinding const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::InterfaceBinding const&);
    // NOLINTEND
};

} // namespace Scripting

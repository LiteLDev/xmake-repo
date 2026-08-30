#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct ErrorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       type;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>> constructors;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> properties;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ErrorBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

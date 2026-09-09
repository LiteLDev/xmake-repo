#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ArgumentDetails.h"

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>             type;
    ::ll::TypedStorage<8, 280, ::Scripting::ArgumentDetails> details;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ArgumentBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

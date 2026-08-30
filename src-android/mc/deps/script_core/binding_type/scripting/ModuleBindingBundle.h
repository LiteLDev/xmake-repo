#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/GlobalBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"

namespace Scripting {

struct ModuleBindingBundle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleBinding>> modules;
    ::ll::TypedStorage<8, 144, ::Scripting::GlobalBinding>           globals;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModuleBindingBundle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

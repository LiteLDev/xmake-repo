#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Scripting::QuickJS {

class RegisteredInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::InterfaceBinding const&>     interfaceBinding;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> combinedProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredInterface& operator=(RegisteredInterface const&);
    RegisteredInterface(RegisteredInterface const&);
    RegisteredInterface();
};

} // namespace Scripting::QuickJS

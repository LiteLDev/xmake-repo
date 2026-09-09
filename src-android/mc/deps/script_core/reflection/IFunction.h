#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

namespace Scripting::Reflection {

class IFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::Privilege>          privilege;
    ::ll::TypedStorage<4, 4, uint>                            defaultArgCount;
    ::ll::TypedStorage<4, 4, uint>                            injectedArgCount;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions> missingRuntimeConditions;
    // NOLINTEND
};

} // namespace Scripting::Reflection

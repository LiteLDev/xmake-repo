#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting::QuickJS {

class RegisteredError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::ErrorBinding const&> errorBinding;
    ::ll::TypedStorage<4, 4, uint>                             jsClassId;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredError& operator=(RegisteredError const&);
    RegisteredError(RegisteredError const&);
    RegisteredError();
};

} // namespace Scripting::QuickJS

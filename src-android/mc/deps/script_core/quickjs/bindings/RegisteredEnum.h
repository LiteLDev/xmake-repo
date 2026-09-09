#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Scripting::QuickJS {

class RegisteredEnum {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::EnumBinding const&> enumBinding;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredEnum& operator=(RegisteredEnum const&);
    RegisteredEnum(RegisteredEnum const&);
    RegisteredEnum();
};

} // namespace Scripting::QuickJS

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Scripting::QuickJS {

class RegisteredClass {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding const&> classBinding;
    ::ll::TypedStorage<4, 4, uint>                             jsClassId;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredClass& operator=(RegisteredClass const&);
    RegisteredClass(RegisteredClass const&);
    RegisteredClass();
};

} // namespace Scripting::QuickJS

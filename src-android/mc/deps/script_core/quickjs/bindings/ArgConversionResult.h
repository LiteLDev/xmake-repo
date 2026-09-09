#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/bindings/ArgConversionHint.h"

// auto generated forward declare list
// clang-format off
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

struct ArgConversionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                       jsValue;
    ::ll::TypedStorage<4, 4, ::Scripting::QuickJS::ArgConversionHint> hint;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgConversionResult();
};

} // namespace Scripting::QuickJS

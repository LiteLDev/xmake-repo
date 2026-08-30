#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct JSRuntime;
// clang-format on

namespace Scripting::QuickJS {

class DebuggerExceptionSupressor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::JSRuntime*> mJsRuntime;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerExceptionSupressor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DebuggerExceptionSupressor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS

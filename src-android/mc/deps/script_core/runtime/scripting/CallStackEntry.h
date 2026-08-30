#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CallStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> functionName;
    ::ll::TypedStorage<8, 24, std::string> fileName;
    ::ll::TypedStorage<4, 4, int>          lineNumber;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStackEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CallStackEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::CallStackEntry FromBacktrace(std::string_view);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

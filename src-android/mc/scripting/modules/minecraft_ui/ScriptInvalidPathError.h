#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

struct ScriptInvalidPathError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInvalidPathError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptInvalidPathError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct UnsupportedAPIError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    UnsupportedAPIError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UnsupportedAPIError(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND
};

} // namespace Scripting

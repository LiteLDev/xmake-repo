#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/InvalidArgumentErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct InvalidArgumentError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::InvalidArgumentErrorType> type;
    ::ll::TypedStorage<4, 4, int>                                   index;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidArgumentError(std::string const&, int);

    MCNAPI InvalidArgumentError(std::string const&, ::Scripting::InvalidArgumentErrorType, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);

    MCNAPI void* $ctor(std::string const&, ::Scripting::InvalidArgumentErrorType, int);
    // NOLINTEND
};

} // namespace Scripting

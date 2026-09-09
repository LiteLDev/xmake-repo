#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct ContainerSizeOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> maxSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSizeOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerSizeOutOfBoundsError(std::string const&, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, uint);
    // NOLINTEND
};

} // namespace Scripting

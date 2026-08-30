#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct RuntimeConditionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    RuntimeConditionError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RuntimeConditionError(::Scripting::RuntimeConditions const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const&, std::string const&);
    // NOLINTEND
};

} // namespace Scripting

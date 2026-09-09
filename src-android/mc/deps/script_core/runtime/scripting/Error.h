#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace Scripting {

struct Error : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    Error();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Error(::Scripting::BaseError const&);

    MCNAPI void overrideName(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::BaseError const&);
    // NOLINTEND
};

} // namespace Scripting

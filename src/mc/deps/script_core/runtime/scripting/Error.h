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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Error(::Scripting::BaseError const&);

    MCNAPI void overrideName(std::string const&);
#else // @header-generator platform
    MCNAPI explicit Error(::std::string const& message_);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::BaseError const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& message_);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

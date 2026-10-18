#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct UnsupportedAPIError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    UnsupportedAPIError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit UnsupportedAPIError(std::string const&);
#else // @header-generator platform
    MCNAPI explicit UnsupportedAPIError(::std::string const& msg);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& msg);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

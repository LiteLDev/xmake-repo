#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ErrorBinding; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

struct RuntimeConditionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    RuntimeConditionError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RuntimeConditionError(::Scripting::RuntimeConditions const&, std::string const&);
#else // @header-generator platform
    MCNAPI
    RuntimeConditionError(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const&, std::string const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

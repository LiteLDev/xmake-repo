#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptInvalidObservableError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptInvalidObservableError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptInvalidObservableError(std::string);
#else // @header-generator platform
    MCNAPI explicit ScriptInvalidObservableError(::std::string fieldName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string fieldName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemEnchantmentLevelOutOfBoundsError(std::string const&, std::string const&, int, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, int, int);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

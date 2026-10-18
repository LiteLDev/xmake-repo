#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/world/level/ActorValidationError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptActorSpawnError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptActorSpawnError(::ActorValidationError);
#else // @header-generator platform
    MCAPI explicit ScriptActorSpawnError(::ActorValidationError error);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorValidationError);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorValidationError error);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

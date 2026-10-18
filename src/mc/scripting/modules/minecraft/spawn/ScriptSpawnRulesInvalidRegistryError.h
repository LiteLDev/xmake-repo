#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomSpawnRulesRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptSpawnRulesInvalidRegistryError : public ::Scripting::BaseError {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSpawnRulesInvalidRegistryError();
#else // @header-generator platform
    MCAPI ScriptSpawnRulesInvalidRegistryError();
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<void, ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptSpawnRulesInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomSpawnRulesRegistry const& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

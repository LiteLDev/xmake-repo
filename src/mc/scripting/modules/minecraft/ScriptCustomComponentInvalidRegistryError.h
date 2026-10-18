#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptCustomComponentRegistry; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentInvalidRegistryError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptCustomComponentInvalidRegistryError();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCustomComponentInvalidRegistryError(::std::string const& errorMessage);
    // NOLINTEND

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validate(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::Result<void, ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validateV1(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const&);
#else // @header-generator platform
    MCAPI static ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentInvalidRegistryError>
    validateV1(::ScriptModuleMinecraft::ScriptCustomComponentRegistry const& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& errorMessage);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

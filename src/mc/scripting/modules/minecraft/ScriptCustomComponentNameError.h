#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentNameError : public ::Scripting::BaseError {
public:
    // ScriptCustomComponentNameError inner types define
    enum class Reason : int {
        Invalid             = 0,
        NoNamespace         = 1,
        DisallowedNamespace = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomComponentNameError::Reason> mReason;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptCustomComponentNameError();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ErrorBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ErrorBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptCustomComponentNameError, Scripting::EngineError>
        validate(::HashedString const&);
#else // @header-generator platform
    MCAPI static ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptCustomComponentNameError, ::Scripting::EngineError>
        validate(::HashedString const& componentName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

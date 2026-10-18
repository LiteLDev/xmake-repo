#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandError : public ::Scripting::BaseError {
public:
    // ScriptCustomCommandError inner types define
    enum class Reason : int {
        AlreadyRegistered     = 0,
        ParameterLimit        = 1,
        RegistryInvalid       = 2,
        RegistryReadOnly      = 3,
        NamespaceMismatch     = 4,
        EnumDependencyMissing = 5,
        UnexpectedEnumName    = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandError::Reason> mReason;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptCustomCommandError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommandError(::ScriptModuleMinecraft::ScriptCustomCommandError::Reason, std::string const&);
    // NOLINTEND

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandError::Reason, std::string const&);
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

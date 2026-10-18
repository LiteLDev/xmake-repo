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

struct ScriptTickingAreaError : public ::Scripting::BaseError {
public:
    // ScriptTickingAreaError inner types define
    enum class Reason : int {
        OverChunkLimit          = 0,
        UnknownIdentifier       = 1,
        SideLengthExceeded      = 2,
        IdentifierAlreadyExists = 3,
#if defined(LL_PLAT_A) // @header-generator platform
        _Invalid                = 4,
#else // @header-generator platform
        Invalid                 = 4,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptTickingAreaError::Reason> mReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaError();

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTickingAreaError(
        ::std::string const&                                    message,
        ::ScriptModuleMinecraft::ScriptTickingAreaError::Reason reason
    );
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
    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& message, ::ScriptModuleMinecraft::ScriptTickingAreaError::Reason reason);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

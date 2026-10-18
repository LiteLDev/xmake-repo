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

struct ScriptBookError : public ::Scripting::BaseError {
public:
    // ScriptBookError inner types define
    enum class Reason : uchar {
        ExceedsMaxPageLength = 0,
        ExceedsMaxPages      = 1,
        ExceedsTitleLength   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptBookError::Reason> mErrorReason;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBookError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptBookError(std::string_view, ::ScriptModuleMinecraft::ScriptBookError::Reason);
#else // @header-generator platform
    MCAPI ScriptBookError(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);
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
    MCNAPI static ::Scripting::EnumBinding bindReasonEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindReasonEnum();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, ::ScriptModuleMinecraft::ScriptBookError::Reason);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view name, ::ScriptModuleMinecraft::ScriptBookError::Reason reason);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft

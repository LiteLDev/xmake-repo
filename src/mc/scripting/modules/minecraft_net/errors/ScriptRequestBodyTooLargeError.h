#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptRequestBodyTooLargeError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mProvidedBytes;
    ::ll::TypedStorage<4, 4, uint> mMaxBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk1f4563;
    ::ll::UntypedStorage<4, 4> mUnkdca007;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptRequestBodyTooLargeError& operator=(ScriptRequestBodyTooLargeError const&);
    ScriptRequestBodyTooLargeError(ScriptRequestBodyTooLargeError const&);
#endif // @header-generator platform
    ScriptRequestBodyTooLargeError();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptRequestBodyTooLargeError(uint providedBytes, uint maxBytes);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint providedBytes, uint maxBytes);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptInternalWebSocketError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::error_code> mError;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk90fcdc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInternalWebSocketError& operator=(ScriptInternalWebSocketError const&);
    ScriptInternalWebSocketError(ScriptInternalWebSocketError const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInternalWebSocketError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet

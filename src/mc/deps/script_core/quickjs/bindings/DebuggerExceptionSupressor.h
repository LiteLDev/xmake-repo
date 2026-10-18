#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct JSRuntime;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class DebuggerExceptionSupressor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::JSRuntime*> mJsRuntime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf439d7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DebuggerExceptionSupressor& operator=(DebuggerExceptionSupressor const&);
    DebuggerExceptionSupressor(DebuggerExceptionSupressor const&);
#endif // @header-generator platform
    DebuggerExceptionSupressor();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DebuggerExceptionSupressor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS

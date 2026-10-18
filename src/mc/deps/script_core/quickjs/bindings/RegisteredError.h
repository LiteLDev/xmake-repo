#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class RegisteredError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::ErrorBinding const&> errorBinding;
    ::ll::TypedStorage<4, 4, uint>                             jsClassId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcae6c0;
    ::ll::UntypedStorage<4, 4> mUnkf80800;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredError& operator=(RegisteredError const&);
    RegisteredError(RegisteredError const&);
    RegisteredError();
};

} // namespace Scripting::QuickJS

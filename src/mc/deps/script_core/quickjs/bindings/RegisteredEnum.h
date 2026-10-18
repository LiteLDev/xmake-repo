#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class RegisteredEnum {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::EnumBinding const&> enumBinding;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk351904;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredEnum& operator=(RegisteredEnum const&);
    RegisteredEnum(RegisteredEnum const&);
    RegisteredEnum();
};

} // namespace Scripting::QuickJS

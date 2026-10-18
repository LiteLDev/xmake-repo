#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class RegisteredClass {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding const&> classBinding;
    ::ll::TypedStorage<4, 4, uint>                             jsClassId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk323ac2;
    ::ll::UntypedStorage<4, 4> mUnk9fa8e5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RegisteredClass& operator=(RegisteredClass const&);
    RegisteredClass(RegisteredClass const&);
    RegisteredClass();
};

} // namespace Scripting::QuickJS

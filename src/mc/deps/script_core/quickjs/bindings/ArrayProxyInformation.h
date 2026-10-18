#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/reflection/ReturnPolicy.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct ArrayProxyInformation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::Reflection::ReturnPolicy> returnPolicy;
    ::ll::TypedStorage<1, 1, bool>                                  membersAreConst;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk712260;
    ::ll::UntypedStorage<1, 1> mUnkc4dce3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ArrayProxyInformation& operator=(ArrayProxyInformation const&);
    ArrayProxyInformation(ArrayProxyInformation const&);
    ArrayProxyInformation();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS

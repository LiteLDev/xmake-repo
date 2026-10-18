#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSValue;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct AnyAndJSValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::entt::meta_any> any;
    ::ll::UntypedStorage<8, 24>                 jsValue;
    ::ll::TypedStorage<8, 8, ::JSContext*>      ctx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk4b7841;
    ::ll::UntypedStorage<8, 24> mUnk98c9ab;
    ::ll::UntypedStorage<8, 8>  mUnkaff2a7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AnyAndJSValue& operator=(AnyAndJSValue const&);
    AnyAndJSValue(AnyAndJSValue const&);
    AnyAndJSValue();
};

} // namespace Scripting

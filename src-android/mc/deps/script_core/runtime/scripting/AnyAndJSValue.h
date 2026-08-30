#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSValue;
// clang-format on

namespace Scripting {

struct AnyAndJSValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::entt::meta_any> any;
    ::ll::UntypedStorage<8, 24>                 jsValue;
    ::ll::TypedStorage<8, 8, ::JSContext*>      ctx;
    // NOLINTEND

public:
    // prevent constructor by default
    AnyAndJSValue& operator=(AnyAndJSValue const&);
    AnyAndJSValue(AnyAndJSValue const&);
    AnyAndJSValue();
};

} // namespace Scripting

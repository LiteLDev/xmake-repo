#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/bindings/ArgConversionHint.h"

// auto generated forward declare list
// clang-format off
struct JSValue;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct ArgConversionResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                       jsValue;
    ::ll::TypedStorage<4, 4, ::Scripting::QuickJS::ArgConversionHint> hint;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc57c4f;
    ::ll::UntypedStorage<4, 4>  mUnkd779cf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ArgConversionResult& operator=(ArgConversionResult const&);
    ArgConversionResult(ArgConversionResult const&);
#endif // @header-generator platform
    ArgConversionResult();
};

} // namespace Scripting::QuickJS

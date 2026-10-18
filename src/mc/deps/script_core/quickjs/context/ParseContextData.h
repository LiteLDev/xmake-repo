#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/context/ParseContext.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct ParseContextData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::QuickJS::ParseContext const> context;
    ::ll::TypedStorage<8, 16, ::entt::meta_type const>                 type;
    ::ll::TypedStorage<4, 8, std::optional<uint> const>                argIdx;
    ::ll::TypedStorage<8, 24, std::string const>                       argInfo;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk7b6afb;
    ::ll::UntypedStorage<8, 16> mUnk938741;
    ::ll::UntypedStorage<4, 8>  mUnk83c6bc;
    ::ll::UntypedStorage<8, 32> mUnk9dcfb9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ParseContextData& operator=(ParseContextData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ParseContextData(ParseContextData const&);
#endif // @header-generator platform
    ParseContextData();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParseContextData();
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

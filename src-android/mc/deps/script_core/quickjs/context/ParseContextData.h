#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/quickjs/context/ParseContext.h"

namespace Scripting::QuickJS {

struct ParseContextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::QuickJS::ParseContext const> context;
    ::ll::TypedStorage<8, 16, ::entt::meta_type const>                 type;
    ::ll::TypedStorage<4, 8, std::optional<uint> const>                argIdx;
    ::ll::TypedStorage<8, 24, std::string const>                       argInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ParseContextData& operator=(ParseContextData const&);
    ParseContextData();

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
};

} // namespace Scripting::QuickJS

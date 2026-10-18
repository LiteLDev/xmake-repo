#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ActorItemTintStrategy.h"
#include "mc/world/item/NoItemTintStrategy.h"

struct ItemTintStrategy {
public:
    // ItemTintStrategy inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Variant = std::variant<NoItemTintStrategy, ActorItemTintStrategy>;
#else // @header-generator platform
    using Variant = ::std::variant<::NoItemTintStrategy, ::ActorItemTintStrategy>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::variant<NoItemTintStrategy, ActorItemTintStrategy>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::variant<::NoItemTintStrategy, ::ActorItemTintStrategy>> mData;
#endif // @header-generator platform
    // NOLINTEND
};

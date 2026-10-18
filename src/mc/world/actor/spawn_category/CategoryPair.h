#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

namespace SpawnCategory {

struct CategoryPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>     name;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::string_view>   name;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> type;
    // NOLINTEND
};

} // namespace SpawnCategory

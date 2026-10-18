#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

namespace SpawnCategory {

struct Config {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>     mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::string_view>   mName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mIsFriendly;
    ::ll::TypedStorage<1, 1, bool>                  mIsPersistent;
    ::ll::TypedStorage<4, 4, int>                   mMax;
    ::ll::TypedStorage<4, 4, int>                   mDespawnDist;
    ::ll::TypedStorage<4, 4, int>                   mNoDespawnDist;
    // NOLINTEND
};

} // namespace SpawnCategory

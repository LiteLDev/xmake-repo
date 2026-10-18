#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/poi/Type.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct Registry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, Poi::TypeId, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, Poi::TypeId>>>> mStrToId;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<const Block*, Poi::TypeId, std::hash<const Block*>, std::equal_to<void>, std::allocator<std::pair<const Block*const, Poi::TypeId>>>> mBlockToId;
    ::ll::TypedStorage<8, 24, std::vector<Poi::Type>> mValues;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk873d81;
    ::ll::UntypedStorage<8, 72> mUnkd5eaad;
    ::ll::UntypedStorage<8, 24> mUnk6f9e5d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Registry& operator=(Registry const&);
    Registry(Registry const&);
    Registry();
#endif // @header-generator platform
};

} // namespace Poi

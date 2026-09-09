#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/Type.h"
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace Poi {

struct Registry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<std::string, Poi::TypeId, std::hash<std::string>, std::equal_to<void>, std::allocator<std::pair<const std::string, Poi::TypeId>>>> mStrToId;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<const Block*, Poi::TypeId, std::hash<const Block*>, std::equal_to<void>, std::allocator<std::pair<const Block*const, Poi::TypeId>>>> mBlockToId;
    ::ll::TypedStorage<8, 24, std::vector<Poi::Type>> mValues;
    // clang-format on
    // NOLINTEND
};

} // namespace Poi

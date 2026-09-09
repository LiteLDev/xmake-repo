#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/poi/TypeId.h"

namespace Poi {

class TagProvider {
public:
    // TagProvider inner types declare
    // clang-format off
    class Tag;
    // clang-format on

    // TagProvider inner types define
    class Tag {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> mId;
        ::ll::TypedStorage<8, 8, std::vector<Poi::TypeId> const*> mItems;
        ::ll::TypedStorage<8, 8, ::entt::dense_map<ulong, HashedString, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, HashedString>>> const*> mNamesMap;
        // clang-format on
        // NOLINTEND
    };

    using TagToItem = ::entt::dense_map<
        ulong,
        std::vector<Poi::TypeId>,
        std::hash<ulong>,
        std::equal_to<void>,
        std::allocator<std::pair<const ulong, std::vector<Poi::TypeId>>>>;

    using TagIdToName = ::entt::dense_map<
        ulong,
        HashedString,
        std::hash<ulong>,
        std::equal_to<void>,
        std::allocator<std::pair<const ulong, HashedString>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, std::vector<Poi::TypeId>, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, std::vector<Poi::TypeId>>>>> mTagsToItems;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, HashedString, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, HashedString>>>> mIdToName;
    // clang-format on
    // NOLINTEND
};

} // namespace Poi

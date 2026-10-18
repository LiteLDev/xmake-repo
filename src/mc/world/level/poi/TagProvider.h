#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/poi/TypeId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> mId;
        ::ll::TypedStorage<8, 8, std::vector<Poi::TypeId> const*> mItems;
        ::ll::TypedStorage<8, 8, ::entt::dense_map<ulong, HashedString, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, HashedString>>> const*> mNamesMap;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk428c06;
        ::ll::UntypedStorage<8, 8> mUnk7a422e;
        ::ll::UntypedStorage<8, 8> mUnk7c361b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    public:
        // prevent constructor by default
        Tag& operator=(Tag const&);
        Tag(Tag const&);
        Tag();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, std::vector<Poi::TypeId>, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, std::vector<Poi::TypeId>>>>> mTagsToItems;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ulong, HashedString, std::hash<ulong>, std::equal_to<void>, std::allocator<std::pair<const ulong, HashedString>>>> mIdToName;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk739f88;
    ::ll::UntypedStorage<8, 72> mUnkb1da15;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TagProvider& operator=(TagProvider const&);
    TagProvider(TagProvider const&);
    TagProvider();
#endif // @header-generator platform
};

} // namespace Poi

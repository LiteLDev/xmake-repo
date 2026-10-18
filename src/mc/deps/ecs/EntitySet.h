#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
// clang-format on

class EntitySet {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EntitySet inner types define
    using ConstIterator = std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<ulong, WeakEntityRef>, void*>*>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, WeakEntityRef>> mEntities;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkcf9ab5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool add(::EntityContext const&);
    // NOLINTEND
#else // @header-generator platform
    EntitySet(EntitySet const&);
    EntitySet();
#endif // @header-generator platform
};

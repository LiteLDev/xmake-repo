#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class EntitySet {
public:
    // EntitySet inner types define
    using ConstIterator = std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<ulong, WeakEntityRef>, void*>*>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, WeakEntityRef>> mEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool add(::EntityContext const&);
    // NOLINTEND
};

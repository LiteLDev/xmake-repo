#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

class TypeCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unique_ptr<entt::meta_type>>> mTypeCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::meta_type const& cacheType(::entt::meta_type&&);

    MCNAPI ~TypeCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::internal

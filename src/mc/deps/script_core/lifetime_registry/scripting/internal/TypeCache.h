#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

class TypeCache {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::unique_ptr<entt::meta_type>>> mTypeCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk1a4e06;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TypeCache& operator=(TypeCache const&);
    TypeCache(TypeCache const&);
    TypeCache();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_type const& cacheType(::entt::meta_type&&);
#else // @header-generator platform
    MCNAPI ::entt::meta_type const& cacheType(::entt::meta_type&& type);
#endif // @header-generator platform

    MCNAPI ~TypeCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::internal

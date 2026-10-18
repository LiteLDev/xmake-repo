#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#endif // @header-generator platform

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class Optional {};
#else // @header-generator platform
class Optional {
public:
    using storage_type = entt::constness_as_t<entt::basic_storage<T0, EntityId, std::allocator<T0>, void>, T0>;
    using value_type   = T0;

    storage_type* mEnTTStorage;
    EntityId      mEntity;
};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <class T>
struct GameRefs {
    using OwnerStorage       = std::shared_ptr<T>;
    using StackResultStorage = std::shared_ptr<T>;
    using WeakStorage        = std::weak_ptr<T>;
    using StackRef           = T;
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

class EntityContext;
template <>
struct GameRefs<EntityContext>;
template <>
struct GameRefs<EntityContext const>;
class EntityId;
template <>
struct GameRefs<EntityId>;
class IFeature;
template <>
struct GameRefs<IFeature>;
#endif // @header-generator platform

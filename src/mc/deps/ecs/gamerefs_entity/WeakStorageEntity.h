#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/StackResultStorageEntity.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
class OwnerStorageEntity;
#if defined(LL_PLAT_A) // @header-generator platform
class StackResultStorageEntity;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

class Actor;
#endif // @header-generator platform

class WeakStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16> mRegistry;
    ::ll::UntypedStorage<4, 8>  mEntity;
#else // @header-generator platform
    ::WeakRef<::EntityRegistry> mRegistry;
    ::EntityId                  mEntity;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI WeakStorageEntity();
#else // @header-generator platform
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        return StackResultStorageEntity(*this).tryUnwrap<Entity, IncludeRemoved>();
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WeakStorageEntity(::OwnerStorageEntity const&);

    MCNAPI explicit WeakStorageEntity(::StackResultStorageEntity const&);

    MCNAPI bool _isSet() const;

    MCNAPI void _reset();

    MCNAPI bool operator==(::WeakStorageEntity const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::OwnerStorageEntity const&);

    MCNAPI void* $ctor(::StackResultStorageEntity const&);
    // NOLINTEND
#else // @header-generator platform
    WeakStorageEntity()                                      = default;
    WeakStorageEntity(::WeakStorageEntity&&)                 = default;
    WeakStorageEntity(::WeakStorageEntity const&)            = default;
    WeakStorageEntity& operator=(::WeakStorageEntity&&)      = default;
    WeakStorageEntity& operator=(::WeakStorageEntity const&) = default;
#endif // @header-generator platform
};

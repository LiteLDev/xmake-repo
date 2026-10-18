#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on
#else // @header-generator platform
class Actor;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
class OwnerStorageEntity {
#else // @header-generator platform
class OwnerStorageEntity : public ::std::optional<::EntityContext> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<EntityContext>> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OwnerStorageEntity();

    MCNAPI explicit OwnerStorageEntity(::EntityRegistry&);

    MCNAPI OwnerStorageEntity(::OwnerStorageEntity&&);

    MCNAPI bool _hasValue() const;

    MCNAPI void _reset();

    MCNAPI ::OwnerStorageEntity& operator=(::OwnerStorageEntity&&);

    MCNAPI ~OwnerStorageEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::EntityRegistry&);

    MCNAPI void* $ctor(::OwnerStorageEntity&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (*this) {
            return Entity::tryGetFromEntity(const_cast<EntityContext&>(**this), IncludeRemoved);
        }
        return nullptr;
    }
#endif // @header-generator platform
};

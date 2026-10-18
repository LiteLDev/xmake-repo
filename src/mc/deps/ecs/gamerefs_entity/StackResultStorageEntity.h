#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class OwnerStorageEntity;
#else // @header-generator platform
#endif // @header-generator platform
class WeakStorageEntity;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class StackResultStorageEntity {
#else // @header-generator platform
class Actor;

class StackResultStorageEntity : public ::std::optional<::EntityContext> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<EntityContext>> mContext;
    // NOLINTEND
#else // @header-generator platform
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (*this) {
            return Entity::tryGetFromEntity(const_cast<EntityContext&>(**this), IncludeRemoved);
        }
        return nullptr;
    }

public:
    // prevent constructor by default
    StackResultStorageEntity();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StackResultStorageEntity(std::nullptr_t);

    MCNAPI explicit StackResultStorageEntity(::WeakStorageEntity const&);

    MCNAPI explicit StackResultStorageEntity(::EntityContext const&);

    MCNAPI StackResultStorageEntity(::StackResultStorageEntity&&);

    MCNAPI explicit StackResultStorageEntity(::OwnerStorageEntity const&);

    MCNAPI bool _hasValue() const;
#else // @header-generator platform
    MCAPI explicit StackResultStorageEntity(::WeakStorageEntity const& weakStorage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::nullptr_t);

    MCNAPI void* $ctor(::WeakStorageEntity const&);

    MCNAPI void* $ctor(::EntityContext const&);

    MCNAPI void* $ctor(::StackResultStorageEntity&&);

    MCNAPI void* $ctor(::OwnerStorageEntity const&);
#else // @header-generator platform
    MCAPI void* $ctor(::WeakStorageEntity const& weakStorage);
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
class EntityRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext : public ::EnableGetWeakRef<EntityContext> {
#else // @header-generator platform
class EntityContext : public ::EnableGetWeakRef<::EntityContext> {
#endif // @header-generator platform
public:
    // EntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // EntityContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Hash {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong operator()(::EntityContext const&) const;
        // NOLINTEND
    };
#else // @header-generator platform
    struct Hash {};

public:
    [[nodiscard]] inline entt::basic_registry<EntityId>& getRegistry() noexcept { return mEnTTRegistry; }

    [[nodiscard]] inline entt::basic_registry<EntityId> const& getRegistry() const noexcept { return mEnTTRegistry; }

    template <class T>
    [[nodiscard]] inline optional_ref<T const> tryGetComponent() const {
        return getRegistry().try_get<T>(mEntity);
    }

    template <class T>
    [[nodiscard]] inline optional_ref<T> tryGetComponent() {
        return const_cast<T*>(std::as_const(getRegistry()).try_get<T>(mEntity));
    }

    template <class T>
    [[nodiscard]] inline bool hasComponent() const {
        return getRegistry().all_of<T>(mEntity);
    }

    template <class T>
    inline bool removeComponent() {
        return getRegistry().remove<T>(mEntity);
    }

    template <class T, typename... Args>
    [[nodiscard]] inline T& getOrAddComponent(Args&&... args) {
        return getRegistry().get_or_emplace<T>(mEntity, std::forward<Args>(args)...);
    }

    LLNDAPI WeakEntityRef getWeakRef() const;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::EntityRegistry&>                                           mRegistry;
    ::ll::TypedStorage<8, 8, ::entt::basic_registry<EntityId, std::allocator<EntityId>>&> mEnTTRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId const>                                            mEntity;
#else // @header-generator platform
    ::EntityRegistry&                   mRegistry;
    ::entt::basic_registry<::EntityId>& mEnTTRegistry;
    ::EntityId const                    mEntity;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntityContext& operator=(EntityContext const&);
    EntityContext(EntityContext const&) = default;
#endif // @header-generator platform
    EntityContext();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityContext(::EntityRegistry&, ::StrictEntityContext const&);

    MCNAPI ::EntityId _getEntityId() const;

    MCNAPI ::EntityRegistry& _registry() const;

    MCNAPI ::WeakRef<EntityContext> getWeakRef() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::EntityContext const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityRegistry&, ::StrictEntityContext const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

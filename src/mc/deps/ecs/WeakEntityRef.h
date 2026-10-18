#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class WeakEntityRef {
#else // @header-generator platform
class WeakEntityRef : public ::WeakRef<::EntityContext> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mWeakEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WeakEntityRef(::WeakRef<EntityContext>);

    MCNAPI WeakEntityRef(::WeakEntityRef const&);

    MCNAPI bool operator!=(::WeakEntityRef) const;

    MCNAPI ::WeakEntityRef& operator=(::WeakEntityRef&&);

    MCNAPI bool operator==(::WeakRef<EntityContext>) const;

    MCNAPI bool operator==(::WeakEntityRef) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<EntityContext>);

    MCNAPI void* $ctor(::WeakEntityRef const&);
    // NOLINTEND
#else // @header-generator platform
    using Base = ::WeakRef<::EntityContext>;
    using Base::Base;
    WeakEntityRef()                                = default;
    WeakEntityRef(::WeakEntityRef&&)               = default;
    WeakEntityRef(::WeakEntityRef const&)          = default;
    WeakEntityRef& operator=(const WeakEntityRef&) = default;
    WeakEntityRef& operator=(WeakEntityRef&&)      = default;
#endif // @header-generator platform
};

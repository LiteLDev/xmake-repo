#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
class ItemStack;
#endif // @header-generator platform
// clang-format on

struct ActorItemEventAfterDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                   mActor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>             mItems;
    ::ll::UntypedStorage<8, 24>                                   mItemActors;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                mActor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>>    mSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                mItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mItemActors;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorItemEventAfterDroppedItem& operator=(ActorItemEventAfterDroppedItem const&);
    ActorItemEventAfterDroppedItem();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorItemEventAfterDroppedItem(::ActorItemEventAfterDroppedItem const&);

    MCNAPI ~ActorItemEventAfterDroppedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorItemEventAfterDroppedItem const&);
#else // @header-generator platform
    MCAPI ~ActorItemEventAfterDroppedItem();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

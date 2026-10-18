#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
// clang-format on

struct ActorItemEventBeforeDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                   mActor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>             mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorItemEventBeforeDroppedItem& operator=(ActorItemEventBeforeDroppedItem const&);
    ActorItemEventBeforeDroppedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorItemEventBeforeDroppedItem(::ActorItemEventBeforeDroppedItem&&);

    MCNAPI ~ActorItemEventBeforeDroppedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorItemEventBeforeDroppedItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActor;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>             mItems;
#endif // @header-generator platform
    // NOLINTEND
};

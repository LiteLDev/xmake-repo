#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
// clang-format on

struct ActorItemEventBeforeDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

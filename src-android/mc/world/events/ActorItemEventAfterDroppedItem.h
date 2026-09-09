#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

struct ActorItemEventAfterDroppedItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                   mActor;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>>             mItems;
    ::ll::UntypedStorage<8, 24>                                   mItemActors;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorItemEventAfterDroppedItem& operator=(ActorItemEventAfterDroppedItem const&);
    ActorItemEventAfterDroppedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorItemEventAfterDroppedItem(::ActorItemEventAfterDroppedItem const&);

    MCNAPI ~ActorItemEventAfterDroppedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorItemEventAfterDroppedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorUseItemEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>               mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const> mItemUsed;
    ::ll::TypedStorage<4, 4, ::ItemUseMethod>        mItemUseMethod;
#else // @header-generator platform
    Actor&             mActor;
    ItemInstance const mItemUsed;
    ItemUseMethod      mItemUseMethod;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&);
    ActorUseItemEvent();
#else // @header-generator platform
    ActorUseItemEvent(Actor& actor, ItemInstance const& itemUsed, ItemUseMethod itemUseMethod)
    : mActor(actor),
      mItemUsed(itemUsed),
      mItemUseMethod(itemUseMethod) {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorUseItemEvent(::ActorUseItemEvent const&);

    MCAPI ~ActorUseItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorUseItemEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

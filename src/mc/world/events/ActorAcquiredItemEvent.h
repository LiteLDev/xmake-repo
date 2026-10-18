#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorAcquiredItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::TypedStorage<8, 128, ::ItemInstance const>  mItem;
    ::ll::TypedStorage<4, 4, int>                     mAmountAcquired;
    ::ll::TypedStorage<4, 4, ::ItemAcquisitionMethod> mAcquireMethod;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>        mSecondaryActorContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>        mSecondaryActorContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorAcquiredItemEvent(ActorAcquiredItemEvent const&);
#endif // @header-generator platform
    ActorAcquiredItemEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorAcquiredItemEvent(::ActorAcquiredItemEvent const&);

    MCNAPI ~ActorAcquiredItemEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAcquiredItemEvent const&);
#else // @header-generator platform
    MCAPI ~ActorAcquiredItemEvent();
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

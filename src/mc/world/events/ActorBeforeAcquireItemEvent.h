#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemAcquisitionMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ActorBeforeAcquireItemEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::TypedStorage<8, 8, ::Actor&>                mItem;
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
    ActorBeforeAcquireItemEvent& operator=(ActorBeforeAcquireItemEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorBeforeAcquireItemEvent(ActorBeforeAcquireItemEvent const&);
#endif // @header-generator platform
    ActorBeforeAcquireItemEvent();
};

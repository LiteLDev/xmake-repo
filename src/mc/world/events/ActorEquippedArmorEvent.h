#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/item/ItemInstance.h"

struct ActorEquippedArmorEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                 mEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                 mEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance const>           mArmor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot> mSlot;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorEquippedArmorEvent& operator=(ActorEquippedArmorEvent const&);
    ActorEquippedArmorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorEquippedArmorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

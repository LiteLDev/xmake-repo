#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/events/PlayerArmorExchangeEventTriggeredLocation.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerArmorExchangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                           mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                 mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ArmorSlot>            mArmorSlot;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mOldItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                               mItem;
    ::ll::TypedStorage<4, 4, ::PlayerArmorExchangeEventTriggeredLocation> mTriggeredLocation;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerArmorExchangeEvent();
#else // @header-generator platform
    MCAPI ~PlayerArmorExchangeEvent();
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

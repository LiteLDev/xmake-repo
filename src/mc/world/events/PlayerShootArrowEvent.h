#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerShootArrowEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::UntypedStorage<1, 24>             mArrow;
    ::ll::TypedStorage<8, 152, ::ItemStack> mWeaponItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mArrowItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mArrow;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mWeaponItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mArrowItem;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&) = default;
    PlayerShootArrowEvent()                                        = default;

public:
    PlayerShootArrowEvent(
        WeakRef<EntityContext> const& player,
        WeakRef<EntityContext> const& arrow,
        ItemStack const&              weaponItem,
        ItemStack const&              arrowItem
    )
    : mPlayer(player),
      mArrow(arrow),
      mWeaponItem(weaponItem),
      mArrowItem(arrowItem) {}
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerShootArrowEvent();
#else // @header-generator platform
    MCAPI ~PlayerShootArrowEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

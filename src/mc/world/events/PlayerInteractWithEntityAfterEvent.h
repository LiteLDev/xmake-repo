#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractWithEntityAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::UntypedStorage<1, 24>             mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack> mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mAfterItem;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mTargetEntity;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mAfterItem;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerInteractWithEntityAfterEvent();
#else // @header-generator platform
    MCAPI ~PlayerInteractWithEntityAfterEvent();
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

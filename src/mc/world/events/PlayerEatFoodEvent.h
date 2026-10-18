#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerEatFoodEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack> mFoodItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerEatFoodEvent& operator=(PlayerEatFoodEvent const&);
    PlayerEatFoodEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerEatFoodEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mFoodItem;
#endif // @header-generator platform
    // NOLINTEND
};

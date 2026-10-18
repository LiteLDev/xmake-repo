#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct PlayerInputPermissionCategoryChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>          mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>          mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ClientInputLockCategory> mCategory;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 7>                          mState;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                      mState;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerInputPermissionCategoryChangeEvent& operator=(PlayerInputPermissionCategoryChangeEvent const&);
    PlayerInputPermissionCategoryChangeEvent();
#else // @header-generator platform
#endif // @header-generator platform
};

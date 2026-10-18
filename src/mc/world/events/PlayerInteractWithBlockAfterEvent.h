#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInteractWithBlockAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>       mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>         mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>       mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack> mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack> mAfterItem;
    ::ll::TypedStorage<1, 1, bool>          mIsFirstEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>                       mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mBeforeItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mAfterItem;
    ::ll::TypedStorage<1, 1, bool>                        mIsFirstEvent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerInteractWithBlockAfterEvent& operator=(PlayerInteractWithBlockAfterEvent const&);
    PlayerInteractWithBlockAfterEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerInteractWithBlockAfterEvent();
#else // @header-generator platform
    MCAPI ~PlayerInteractWithBlockAfterEvent();
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

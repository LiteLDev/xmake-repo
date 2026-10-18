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

struct PlayerInteractWithBlockBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>       mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>         mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>       mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<1, 1, bool>          mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerInteractWithBlockBeforeEvent& operator=(PlayerInteractWithBlockBeforeEvent const&);
    PlayerInteractWithBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerInteractWithBlockBeforeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mBlockLocation;
    ::ll::TypedStorage<1, 1, uchar>                       mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mFaceLocation;
    ::ll::TypedStorage<8, 152, ::ItemStack>               mItem;
    ::ll::TypedStorage<1, 1, bool>                        mIsFirstEvent;
#endif // @header-generator platform
    // NOLINTEND
};

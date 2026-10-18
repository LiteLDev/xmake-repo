#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
// clang-format on

struct PlayerDestroyBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                             mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPos;
    ::ll::TypedStorage<1, 1, uchar>                         mFace;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>     mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mBlockPos;
    ::ll::TypedStorage<1, 1, uchar>                           mFace;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&);
    PlayerDestroyBlockEvent();
#else // @header-generator platform
#endif // @header-generator platform
};

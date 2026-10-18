#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSourceHandle;
class EntityContext;
// clang-format on

struct ActorGriefingBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                   mActorContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>       mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mPos;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle>> mBlockSourceHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActorContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>>         mBlock;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mPos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle>> mBlockSourceHandle;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&);
    ActorGriefingBlockEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorGriefingBlockEvent();
#else // @header-generator platform
    MCAPI ~ActorGriefingBlockEvent();
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

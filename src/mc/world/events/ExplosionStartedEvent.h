#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
// clang-format on

struct ExplosionStartedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Dimension&>                  mDimension;
    ::ll::UntypedStorage<1, 24>                             mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mBlocks;
    ::ll::TypedStorage<8, 8, ::Dimension&>                      mDimension;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>       mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExplosionStartedEvent(ExplosionStartedEvent const&);
#endif // @header-generator platform
    ExplosionStartedEvent();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExplosionStartedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

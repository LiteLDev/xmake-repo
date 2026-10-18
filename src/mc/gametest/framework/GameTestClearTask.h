#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/gametest/ScopedGameTestTickingArea.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
class BoundingBox;
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class ITickingArea;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameTestClearTask {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>                 mBounds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ITickingArea>> mTickingArea;
    ::ll::TypedStorage<1, 1, bool>                           mChunkWasLoaded;
    ::ll::TypedStorage<1, 1, bool>                           mDone;
    ::ll::TypedStorage<8, 80, ::ScopedGameTestTickingArea>   mScopedTickingArea;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 24> mUnk5c35f4;
    ::ll::UntypedStorage<8, 16> mUnkac810e;
    ::ll::UntypedStorage<1, 1>  mUnkf34dd1;
    ::ll::UntypedStorage<1, 1>  mUnk142d9b;
    ::ll::UntypedStorage<8, 96> mUnk4af5fa;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameTestClearTask& operator=(GameTestClearTask const&);
    GameTestClearTask(GameTestClearTask const&);
#endif // @header-generator platform
    GameTestClearTask();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameTestClearTask(::Dimension&, ::BoundingBox const&);

    MCNAPI bool isDone() const;

    MCNAPI void tick();
#else // @header-generator platform
    MCNAPI GameTestClearTask(::Dimension& dimension, ::BoundingBox const& bounds);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Dimension&, ::BoundingBox const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Dimension& dimension, ::BoundingBox const& bounds);
#endif // @header-generator platform
    // NOLINTEND
};

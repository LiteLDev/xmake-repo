#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/gametest/ScopedGameTestTickingArea.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Dimension;
class ITickingArea;
// clang-format on

class GameTestClearTask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox>                 mBounds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ITickingArea>> mTickingArea;
    ::ll::TypedStorage<1, 1, bool>                           mChunkWasLoaded;
    ::ll::TypedStorage<1, 1, bool>                           mDone;
    ::ll::TypedStorage<8, 80, ::ScopedGameTestTickingArea>   mScopedTickingArea;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestClearTask();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestClearTask(::Dimension&, ::BoundingBox const&);

    MCNAPI bool isDone() const;

    MCNAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::BoundingBox const&);
    // NOLINTEND
};

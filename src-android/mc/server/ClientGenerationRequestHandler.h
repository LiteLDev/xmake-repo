#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

struct ClientGenerationRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ChunkPos, std::shared_ptr<LevelChunk>>>> mServerChunks;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                     mCenter;
    ::ll::TypedStorage<4, 4, int>                                                            mChunkRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                        mFacingDirection;
    ::ll::TypedStorage<1, 1, uchar>                                                          mPausedTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientGenerationRequestHandler& operator=(ClientGenerationRequestHandler const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientGenerationRequestHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

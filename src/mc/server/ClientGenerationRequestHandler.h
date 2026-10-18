#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ClientGenerationRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ChunkPos, std::shared_ptr<LevelChunk>>>> mServerChunks;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                     mCenter;
    ::ll::TypedStorage<4, 4, int>                                                            mChunkRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                        mFacingDirection;
    ::ll::TypedStorage<1, 1, uchar>                                                          mPausedTicks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkd8e231;
    ::ll::UntypedStorage<8, 8>  mUnkee5718;
    ::ll::UntypedStorage<4, 4>  mUnkf1db40;
    ::ll::UntypedStorage<4, 12> mUnk5915c9;
    ::ll::UntypedStorage<1, 1>  mUnk331ccc;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ClientGenerationRequestHandler& operator=(ClientGenerationRequestHandler const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
    ClientGenerationRequestHandler(ClientGenerationRequestHandler const&);
    ClientGenerationRequestHandler();
#endif // @header-generator platform
};

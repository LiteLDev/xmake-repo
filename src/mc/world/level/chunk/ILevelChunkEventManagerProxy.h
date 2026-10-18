#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class ILevelChunkEventManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ILevelChunkEventManagerProxy();
#else // @header-generator platform
    virtual ~ILevelChunkEventManagerProxy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isReadOnly(::LevelChunk const&) const = 0;
#else // @header-generator platform
    virtual bool isReadOnly(::LevelChunk const& levelChunk) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setOnChunkLoadedCalled(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual bool setOnChunkLoadedCalled(::LevelChunk& levelChunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTickingStarted(::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void onTickingStarted(::LevelChunk& levelChunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const&) const = 0;
#else // @header-generator platform
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOwnedByTickingThread(::LevelChunk const&) const = 0;
#else // @header-generator platform
    virtual bool isOwnedByTickingThread(::LevelChunk const& levelChunk) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTickingStopped(::LevelChunk&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onTickingStopped(::LevelChunk& levelChunk) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ILevelChunkEventManagerProxy.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class LevelChunkEventManagerProxy : public ::ILevelChunkEventManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelChunkEventManagerProxy();
#else // @header-generator platform
    virtual bool isReadOnly(::LevelChunk const& levelChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isReadOnly(::LevelChunk const&) const;
#else // @header-generator platform
    virtual bool setOnChunkLoadedCalled(::LevelChunk& levelChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setOnChunkLoadedCalled(::LevelChunk&);
#else // @header-generator platform
    virtual void onTickingStarted(::LevelChunk& levelChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onTickingStarted(::LevelChunk&);
#else // @header-generator platform
    virtual void setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getClosestPlayerDistanceSquared(::LevelChunk const&) const;
#else // @header-generator platform
    virtual bool isOwnedByTickingThread(::LevelChunk const& levelChunk) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOwnedByTickingThread(::LevelChunk const&) const;

    virtual void onTickingStopped(::LevelChunk&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onTickingStopped(::LevelChunk& levelChunk) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isReadOnly(::LevelChunk const&) const;
#else // @header-generator platform
    MCAPI bool $isReadOnly(::LevelChunk const& levelChunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setOnChunkLoadedCalled(::LevelChunk&);
#else // @header-generator platform
    MCAPI bool $setOnChunkLoadedCalled(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTickingStarted(::LevelChunk&);
#else // @header-generator platform
    MCAPI void $onTickingStarted(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI void $setupRedstoneCircuit(::ChunkSource& chunkSource, ::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getClosestPlayerDistanceSquared(::LevelChunk const&) const;
#else // @header-generator platform
    MCAPI int $getClosestPlayerDistanceSquared(::LevelChunk const& levelChunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isOwnedByTickingThread(::LevelChunk const&) const;
#else // @header-generator platform
    MCAPI bool $isOwnedByTickingThread(::LevelChunk const& levelChunk) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onTickingStopped(::LevelChunk&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onTickingStopped(::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

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
    virtual ~LevelChunkEventManagerProxy();

    virtual bool isReadOnly(::LevelChunk const&) const;

    virtual bool setOnChunkLoadedCalled(::LevelChunk&);

    virtual void onTickingStarted(::LevelChunk&);

    virtual void setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&);

    virtual int getClosestPlayerDistanceSquared(::LevelChunk const&) const;

    virtual bool isOwnedByTickingThread(::LevelChunk const&) const;

    virtual void onTickingStopped(::LevelChunk&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isReadOnly(::LevelChunk const&) const;

    MCNAPI bool $setOnChunkLoadedCalled(::LevelChunk&);

    MCNAPI void $onTickingStarted(::LevelChunk&);

    MCNAPI void $setupRedstoneCircuit(::ChunkSource&, ::LevelChunk&);

    MCNAPI int $getClosestPlayerDistanceSquared(::LevelChunk const&) const;

    MCNAPI bool $isOwnedByTickingThread(::LevelChunk const&) const;

    MCNAPI void $onTickingStopped(::LevelChunk&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class LevelChunk;
// clang-format on

class BlockActorLevelListener : public ::LevelListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActorLevelListener();

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    virtual void onChunkUnloaded(::LevelChunk&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockActorLevelListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);

    MCNAPI void $onChunkUnloaded(::LevelChunk&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

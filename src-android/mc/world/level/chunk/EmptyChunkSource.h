#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkViewSource;
class Dimension;
class LevelChunk;
// clang-format on

class EmptyChunkSource : public ::ChunkSource {
public:
    // prevent constructor by default
    EmptyChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyChunkSource();

    virtual bool structurePostProcessChunk(::ChunkViewSource&);

    virtual bool decorationPostProcessChunk(::ChunkViewSource&);

    virtual void loadChunk(::LevelChunk&, bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EmptyChunkSource(::Dimension*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $structurePostProcessChunk(::ChunkViewSource&);

    MCNAPI bool $decorationPostProcessChunk(::ChunkViewSource&);

    MCNAPI void $loadChunk(::LevelChunk&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

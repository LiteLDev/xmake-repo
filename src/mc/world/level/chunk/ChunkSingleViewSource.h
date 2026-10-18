#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class LevelChunk;
// clang-format on

class ChunkSingleViewSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<LevelChunk>> mLevelChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkSingleViewSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChunkSingleViewSource();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChunkSingleViewSource(std::shared_ptr<LevelChunk>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<LevelChunk>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<LevelChunk> $getExistingChunk(::ChunkPos const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ChunkSingleViewSource {};
#endif // @header-generator platform

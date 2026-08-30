#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class LevelChunk;
// clang-format on

class WorldLimitChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::Bounds> mLimitArea;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLimitChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldLimitChunkSource();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual bool isWithinWorldLimit(::ChunkPos const&) const;

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* getChunkMap();

    virtual bool canCreateViews() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldLimitChunkSource(std::unique_ptr<ChunkSource>, ::BlockPos const&, int, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>, ::BlockPos const&, int, int);
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

    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI bool $isWithinWorldLimit(::ChunkPos const&) const;

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* $getChunkMap();

    MCNAPI bool $canCreateViews() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

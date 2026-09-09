#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class LevelChunk;
struct LevelChunkFinalDeleter;
// clang-format on

class NetworkChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>>> mChunkMap;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChunkSource();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual std::shared_ptr<LevelChunk> getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* getChunkMap();

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& getStorage() const;

    virtual bool canCreateViews() const;

    virtual bool canLaunchTasks() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkChunkSource(::Dimension&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&);
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

    MCNAPI std::shared_ptr<LevelChunk> $getOrLoadChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* $getChunkMap();

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& $getStorage() const;

    MCNAPI bool $canCreateViews() const;

    MCNAPI bool $canLaunchTasks() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

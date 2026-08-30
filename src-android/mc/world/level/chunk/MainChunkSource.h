#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/ChunkSource.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
class Random;
struct LevelChunkFinalDeleter;
// clang-format on

class MainChunkSource : public ::ChunkSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>>> mChunkMap;
    // NOLINTEND

public:
    // prevent constructor by default
    MainChunkSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MainChunkSource();

    virtual std::shared_ptr<LevelChunk> getExistingChunk(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Random&);

    virtual bool isChunkKnown(::ChunkPos const&);

    virtual std::shared_ptr<LevelChunk> createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* getChunkMap();

    virtual std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& getStorage() const;

    virtual void clearDeletedEntities();

    virtual bool canCreateViews() const;

    virtual void setLevelChunk(std::shared_ptr<LevelChunk>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MainChunkSource(std::unique_ptr<ChunkSource>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ChunkSource>);
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

    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Random&);

    MCNAPI bool $isChunkKnown(::ChunkPos const&);

    MCNAPI std::shared_ptr<LevelChunk> $createNewChunk(::ChunkPos const&, ::ChunkSource::LoadMode, bool);

    MCNAPI void $acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const* $getChunkMap();

    MCNAPI std::unordered_map<ChunkPos, std::weak_ptr<LevelChunk>> const& $getStorage() const;

    MCNAPI void $clearDeletedEntities();

    MCNAPI bool $canCreateViews() const;

    MCNAPI void $setLevelChunk(std::shared_ptr<LevelChunk>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

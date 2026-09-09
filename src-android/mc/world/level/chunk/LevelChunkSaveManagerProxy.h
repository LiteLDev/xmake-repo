#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/chunk/ILevelChunkSaveManagerProxy.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class DimensionManager;
class LevelChunk;
class Random;
class Scheduler;
class TaskGroup;
class TaskResult;
// clang-format on

class LevelChunkSaveManagerProxy : public ::ILevelChunkSaveManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Random&>                                   mRandom;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManagerProxy& operator=(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelChunkSaveManagerProxy();

    virtual ::WeakRef<Dimension> getRandomDimension(::DimensionManager&) const;

    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Dimension&) const;

    virtual std::shared_ptr<LevelChunk> getChunk(::Dimension&, ::ChunkPos const&) const;

    virtual bool doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const;

    virtual bool doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const;

    virtual void saveLiveChunk(::Dimension&, ::LevelChunk&);

    virtual void queueTaskForChunkSave(::brstd::move_only_function<TaskResult()>&&);

    virtual void startLeaveGame();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelChunkSaveManagerProxy(::Random&, ::Scheduler&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Random&, ::Scheduler&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::WeakRef<Dimension> $getRandomDimension(::DimensionManager&) const;

    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Dimension&) const;

    MCNAPI std::shared_ptr<LevelChunk> $getChunk(::Dimension&, ::ChunkPos const&) const;

    MCNAPI bool $doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const;

    MCNAPI bool $doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const;

    MCNAPI void $saveLiveChunk(::Dimension&, ::LevelChunk&);

    MCNAPI void $queueTaskForChunkSave(::brstd::move_only_function<TaskResult()>&&);

    MCNAPI void $startLeaveGame();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

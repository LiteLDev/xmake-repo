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
#if defined(LL_PLAT_A) // @header-generator platform
class Scheduler;
#else // @header-generator platform
#endif // @header-generator platform
class TaskGroup;
class TaskResult;
// clang-format on

class LevelChunkSaveManagerProxy : public ::ILevelChunkSaveManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Random&>                                   mRandom;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Random&>                                       mRandom;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>> mTaskGroup;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkSaveManagerProxy& operator=(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelChunkSaveManagerProxy();
#else // @header-generator platform
    virtual ~LevelChunkSaveManagerProxy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getRandomDimension(::DimensionManager&) const;
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager& dimensionManager) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Dimension&) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension& dimension) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getChunk(::Dimension&, ::ChunkPos const&) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const;
#else // @header-generator platform
    virtual bool doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const;
#else // @header-generator platform
    virtual bool doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLiveChunk(::Dimension&, ::LevelChunk&);
#else // @header-generator platform
    virtual void saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void queueTaskForChunkSave(::brstd::move_only_function<TaskResult()>&&);
#else // @header-generator platform
    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void startLeaveGame() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakRef<Dimension> $getRandomDimension(::DimensionManager&) const;
#else // @header-generator platform
    MCAPI ::WeakRef<::Dimension> $getRandomDimension(::DimensionManager& dimensionManager) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getRandomChunk(::Dimension&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk> $getRandomChunk(::Dimension& dimension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<LevelChunk> $getChunk(::Dimension&, ::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::LevelChunk> $getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const;
#else // @header-generator platform
    MCAPI bool $doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const;
#else // @header-generator platform
    MCAPI bool $doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $saveLiveChunk(::Dimension&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI void $saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $queueTaskForChunkSave(::brstd::move_only_function<TaskResult()>&&);
#else // @header-generator platform
    MCAPI void $queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startLeaveGame();
#else // @header-generator platform
    MCAPI void $startLeaveGame();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

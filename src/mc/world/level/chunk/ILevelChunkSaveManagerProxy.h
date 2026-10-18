#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class DimensionManager;
class LevelChunk;
class TaskResult;
// clang-format on

class ILevelChunkSaveManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelChunkSaveManagerProxy() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WeakRef<Dimension> getRandomDimension(::DimensionManager&) const = 0;
#else // @header-generator platform
    virtual ::WeakRef<::Dimension> getRandomDimension(::DimensionManager& dimensionManager) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getRandomChunk(::Dimension&) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getRandomChunk(::Dimension& dimension) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<LevelChunk> getChunk(::Dimension&, ::ChunkPos const&) const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::LevelChunk> getChunk(::Dimension& dimension, ::ChunkPos const& chunkPos) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doesNonActorDataInLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;
#else // @header-generator platform
    virtual bool doesNonActorDataInLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool doesLevelChunkNeedSaving(::LevelChunk const&, int, int) const = 0;
#else // @header-generator platform
    virtual bool doesLevelChunkNeedSaving(
        ::LevelChunk const& levelChunk,
        int                 minTicksBeforeLiveSave,
        int                 maxTicksBeforeLiveSave
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void saveLiveChunk(::Dimension&, ::LevelChunk&) = 0;
#else // @header-generator platform
    virtual void saveLiveChunk(::Dimension& dimension, ::LevelChunk& levelChunk) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void queueTaskForChunkSave(::brstd::move_only_function<TaskResult()>&&) = 0;
#else // @header-generator platform
    virtual void queueTaskForChunkSave(::brstd::move_only_function<::TaskResult()>&& task) = 0;
#endif // @header-generator platform

    virtual void startLeaveGame() = 0;
    // NOLINTEND
};

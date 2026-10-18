#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerCachedBase.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class LevelBuilder;
class LevelRendererCamera;
struct ChunkVisibilityCacheElement;
struct LevelCullerResults;
// clang-format on

class LevelCullerNoneAsync : public ::LevelCullerCachedBase,
                             public ::std::enable_shared_from_this<LevelCullerNoneAsync> {
#else // @header-generator platform
class LevelCullerNoneAsync {
#endif // @header-generator platform
public:
    // LevelCullerNoneAsync inner types declare
    // clang-format off
    struct ManhattanQueueEntry;
    // clang-format on

    // LevelCullerNoneAsync inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ManhattanQueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, schar> mX;
        ::ll::TypedStorage<1, 1, schar> mY;
        ::ll::TypedStorage<1, 1, schar> mZ;
        ::ll::TypedStorage<1, 1, uchar> mPadding;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManhattanQueueEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mRenderChunksVisibleFromCullingPointSpinLock;
    ::ll::TypedStorage<8, 48, std::vector<SubChunkPos>[2]> mRenderChunksVisibleFromCullingPoint;
    ::ll::TypedStorage<8, 8, ulong> mActiveRenderChunksVisibleList;
    ::ll::TypedStorage<8, 8, ulong> mWorkingRenderChunksVisibleList;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mTasksCount;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mCullIteration;
    ::ll::TypedStorage<1, 1, bool> mCullNextFrame;
    ::ll::TypedStorage<4, 12, ::Vec3> mCullingOrigin;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mCullingOriginCP;
    ::ll::TypedStorage<1, 1, schar> mCullingOriginY;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mTaskScheduled;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentCameraForward;
    ::ll::TypedStorage<4, 12, ::Vec3> mNextCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mNextCameraForward;
    ::ll::TypedStorage<8, 48, std::queue<LevelCullerNoneAsync::ManhattanQueueEntry, std::deque<LevelCullerNoneAsync::ManhattanQueueEntry>>> mSubChunkQueue;
    ::ll::TypedStorage<4, 4, int> mStepsThisCull;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mCurrentCullDuration;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerNoneAsync();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerNoneAsync();

    virtual void handleCullingDutiesThisUpdate();

    virtual void triggerCull(bool);

    virtual void getCullerResults(std::function<void(const LevelCullerResults&)>&);

    virtual bool isBusy() const;

    virtual uint getCullIteration();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _isElementValid(::ChunkVisibilityCacheElement&, ::SubChunkPos const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleCullingDutiesThisUpdate();

    MCNAPI void $triggerCull(bool);

    MCNAPI void $getCullerResults(std::function<void(const LevelCullerResults&)>&);

    MCNAPI bool $isBusy() const;

    MCNAPI uint $getCullIteration();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ManhattanQueueEntry {};
#endif // @header-generator platform
};

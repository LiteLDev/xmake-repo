#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerCachedBase.h"
#include "mc/client/renderer/game/OccluderFace.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class LevelBuilder;
class LevelRendererCamera;
class Pos;
struct ChunkVisibilityCacheElement;
struct LevelCullerResults;
// clang-format on

class LevelCullerShadow : public ::LevelCullerCachedBase, public ::std::enable_shared_from_this<LevelCullerShadow> {
public:
    // LevelCullerShadow inner types declare
    // clang-format off
    struct ShadowQueueEntry;
    // clang-format on

    // LevelCullerShadow inner types define
    struct ShadowQueueEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short> mX;
        ::ll::TypedStorage<2, 2, short> mY;
        ::ll::TypedStorage<2, 2, short> mZ;
        ::ll::TypedStorage<4, 4, float> mProjectedDistance;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowQueueEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, ::SpinLockImpl> mRenderChunksVisibleFromCullingPointSpinLock;
    ::ll::TypedStorage<8, 48, std::vector<SubChunkPos>[2]> mRenderChunksVisibleFromCullingPoint;
    ::ll::TypedStorage<8, 48, std::vector<OccluderFace>[2]> mOccluderFaces;
    ::ll::TypedStorage<8, 8, ulong> mActiveRenderChunksVisibleList;
    ::ll::TypedStorage<8, 8, ulong> mWorkingRenderChunksVisibleList;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mTasksCount;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mCullIteration;
    ::ll::TypedStorage<4, 4, std::atomic<float>> mNextMaximumRayDeviation;
    ::ll::TypedStorage<4, 4, float> mMaximumRayDeviation;
    ::ll::TypedStorage<1, 1, bool> mCullNextFrame;
    ::ll::TypedStorage<4, 12, ::Vec3> mCullingOrigin;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mCullingOriginCP;
    ::ll::TypedStorage<4, 48, ::Bounds> mBounds;
    ::ll::TypedStorage<4, 4, float> mViewAreaDim;
    ::ll::TypedStorage<4, 4, float> mCylinderRadiusChunksSquared;
    ::ll::TypedStorage<4, 12, ::Vec3> mCameraDir;
    ::ll::TypedStorage<4, 12, ::Vec3> mCameraOrigin;
    ::ll::TypedStorage<1, 6, std::array<uchar, 6>> mVisibility;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mTaskScheduled;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentCameraTargetPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mNextCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mNextCameraTargetPos;
    ::ll::TypedStorage<8, 32, std::priority_queue<LevelCullerShadow::ShadowQueueEntry, std::vector<LevelCullerShadow::ShadowQueueEntry>, std::greater<LevelCullerShadow::ShadowQueueEntry>>> mSubChunkQueue;
    ::ll::TypedStorage<4, 4, int> mStepsThisCull;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mCurrentCullDuration;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerShadow();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerShadow();

    virtual void handleCullingDutiesThisUpdate();

    virtual void triggerCull(bool);

    virtual void getCullerResults(std::function<void(const LevelCullerResults&)>&);

    virtual bool isBusy() const;

    virtual uint getCullIteration();

    virtual ::LevelCullerShadow* asLevelCullerShadow();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addSeedChunks(::Pos const&, ::Pos const&, uchar const&);
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

    MCNAPI ::LevelCullerShadow* $asLevelCullerShadow();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

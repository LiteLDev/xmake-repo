#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerCachedBase.h"
#include "mc/client/renderer/game/LevelCullerCachedStep.h"
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

class LevelCullerDistanceField : public ::LevelCullerCachedBase,
                                 public ::std::enable_shared_from_this<LevelCullerDistanceField> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<LevelCullerCachedStep>> mNarrowPhaseHeap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                     mRenderChunksVisibleFromCullingPointSpinLock;
    ::ll::TypedStorage<8, 48, std::vector<SubChunkPos>[2]>        mRenderChunksVisibleFromCullingPoint;
    ::ll::TypedStorage<8, 8, ulong>                               mActiveRenderChunksVisibleList;
    ::ll::TypedStorage<8, 8, ulong>                               mWorldingRenderChunksVisibleList;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                   mTasksCount;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                   mCullIteration;
    ::ll::TypedStorage<1, 1, bool>                                mCullNextFrame;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mCullingOrigin;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                          mCullingOriginCP;
    ::ll::TypedStorage<4, 8, ::LevelCullerCachedStep>             mSwapTemp;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                   mTaskScheduled;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mCurrentCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mCurrentCameraForward;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mNextCameraPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mNextCameraForward;
    ::ll::TypedStorage<4, 4, int>                                 mSteps;
    ::ll::TypedStorage<4, 4, float>                               mTotalTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mCurrentCullDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerDistanceField();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerDistanceField();

    virtual void handleCullingDutiesThisUpdate();

    virtual void triggerCull(bool);

    virtual void getCullerResults(std::function<void(const LevelCullerResults&)>&);

    virtual bool isBusy() const;

    virtual uint getCullIteration();

    virtual void _prepareForCulling(std::shared_ptr<LevelRendererCamera>) = 0;

    virtual float _computeLinearDistance(::Vec3 const&) const = 0;

    virtual bool _doesRenderDistanceApply() const = 0;

    virtual bool _checkPositionAgainstBounds(::SubChunkPos const&) const = 0;

    virtual bool _checkDistanceDelta(float) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addToHeap(::LevelCullerCachedStep const&);

    MCNAPI void _adjustNeighbor(::LevelCullerCachedStep const&, uchar, ::ChunkVisibilityCacheElement&);
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
};

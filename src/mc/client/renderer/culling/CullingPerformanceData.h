#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

struct CullingPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
struct CullingPerformanceData {
#endif // @header-generator platform
public:
    // CullingPerformanceData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class AtomicCullerTimer;
#else // @header-generator platform
#endif // @header-generator platform
    class AtomicCounter;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class AtomicCullerTimer;
#endif // @header-generator platform
    // clang-format on

    // CullingPerformanceData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class AtomicCullerTimer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLastCullerTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalTime;
        ::ll::TypedStorage<4, 40, std::mutex>                                                 mCullerMutex;
        // NOLINTEND
#else // @header-generator platform
    class AtomicCounter {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void reset();

        MCNAPI void setTimer(std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);
        // NOLINTEND
    };

    class AtomicCounter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::atomic<ulong>> mCountSum;
        ::ll::TypedStorage<8, 8, std::atomic<ulong>> mLatestCount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setCounter(ulong);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         isCollectingData;
    ::ll::TypedStorage<1, 1, bool>                                         mCullerActive;
    ::ll::TypedStorage<1, 1, bool>                                         mForceRecullNow;
    ::ll::TypedStorage<1, 1, bool>                                         mContinuousRecull;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>                            mCullerToUse;
    ::ll::TypedStorage<1, 1, ::LevelCullerType>                            mShadowCullerToUse;
    ::ll::TypedStorage<8, 56, ::CullingPerformanceData::AtomicCullerTimer> mGlobalCullerTimer;
    ::ll::TypedStorage<8, 56, ::CullingPerformanceData::AtomicCullerTimer> mFrustumCullerTimer;
    ::ll::TypedStorage<8, 56, ::CullingPerformanceData::AtomicCullerTimer> mChunksQueueingForRenderingTimer;
    ::ll::TypedStorage<8, 16, ::CullingPerformanceData::AtomicCounter>     mGlobalCullerCandidatesCounter;
    ::ll::TypedStorage<8, 16, ::CullingPerformanceData::AtomicCounter>     mGlobalCullerCheckedCounter;
    ::ll::TypedStorage<8, 16, ::CullingPerformanceData::AtomicCounter>     mFrustumCullerCandidatesCounter;
    ::ll::TypedStorage<8, 16, ::CullingPerformanceData::AtomicCounter>     mPlayerChunksQueuedForRenderingCounter;
    ::ll::TypedStorage<8, 16, ::CullingPerformanceData::AtomicCounter> mDirLightShadowChunksQueuedForRenderingCounter;
    ::ll::TypedStorage<8, 272, std::array<ulong, 17>[2]>               chunkLayerCounters;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CullingPerformanceData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetRenderChunkLayerCounters();

    MCNAPI void setRenderChunkLayerCounters(ulong, ulong, ulong const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    class AtomicCullerTimer {};
#endif // @header-generator platform
};

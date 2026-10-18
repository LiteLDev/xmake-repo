#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BackgroundTaskBase;
class BackgroundWorker;
#else // @header-generator platform
#endif // @header-generator platform
class WorkerPool;
// clang-format on

class Scheduler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Scheduler inner types declare
    // clang-format off
    struct CoroutinePolicy;
    class ScopedChangeScheduler;
    // clang-format on

    // Scheduler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class MinimumTimeBudget : int {
#else // @header-generator platform
    enum class MaximumTimeBudget : int {
#endif // @header-generator platform
        Yes = 0,
        No  = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class MaximumTimeBudget : int {
#else // @header-generator platform
    enum class MinimumTimeBudget : int {
#endif // @header-generator platform
        Yes = 0,
        No  = 1,
    };

    struct CoroutinePolicy {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 64> mShouldStop;
        ::ll::UntypedStorage<8, 16> mOwningThread;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnkd19b34;
        ::ll::UntypedStorage<4, 4>  mUnk2b34eb;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        CoroutinePolicy& operator=(CoroutinePolicy const&);
        CoroutinePolicy(CoroutinePolicy const&);
#endif // @header-generator platform
        CoroutinePolicy();
    };

    class ScopedChangeScheduler {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::BackgroundWorker*> mParent;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk3a05ca;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ScopedChangeScheduler& operator=(ScopedChangeScheduler const&);
        ScopedChangeScheduler(ScopedChangeScheduler const&);
        ScopedChangeScheduler();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<Scheduler::CoroutinePolicy>> mCoroutinePolicy;
    ::ll::TypedStorage<4, 4, uint> mTotalFrames;
    ::ll::TypedStorage<4, 4, uint> mStarvedFrames;
    ::ll::TypedStorage<4, 4, uint> mPromotionFrames;
    ::ll::TypedStorage<4, 4, uint> mTargetFPS;
    ::ll::TypedStorage<4, 4, uint> mEffectiveFPS;
    ::ll::TypedStorage<4, 4, uint> mTotalRunCoroutines;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mPredictedCoroutineDuration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTotalCoroutineDuration;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorkerPool>> mCoroutinePool;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextStarveCheckTime;
    ::ll::UntypedStorage<8, 8> mThreadID;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Scheduler::CoroutinePolicy>> mCoroutinePolicy;
    ::ll::TypedStorage<4, 4, uint>                                           mTotalFrames;
    ::ll::TypedStorage<4, 4, uint>                                           mStarvedFrames;
    ::ll::TypedStorage<4, 4, uint>                                           mPromotionFrames;
    ::ll::TypedStorage<4, 4, uint>                                           mTargetFPS;
    ::ll::TypedStorage<4, 4, uint>                                           mEffectiveFPS;
    ::ll::TypedStorage<4, 4, uint>                                           mTotalRunCoroutines;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                     mPredictedCoroutineDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                     mTotalCoroutineDuration;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorkerPool>>                mCoroutinePool;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mNextStarveCheckTime;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                              mThreadID;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Scheduler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Scheduler();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~Scheduler() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Scheduler() /*override*/;
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Scheduler(std::string_view, uint);
#else // @header-generator platform
    MCAPI Scheduler(::std::string_view name, uint FPS);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void changeThread(std::__thread_id);

    MCNAPI ::WorkerPool& getCoroutinePool();

    MCNAPI void processCoroutines(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ::Scheduler::MinimumTimeBudget,
        ::Scheduler::MaximumTimeBudget
#else // @header-generator platform
    MCAPI void processCoroutines(
        ::std::chrono::nanoseconds     timeSinceSwap,
        ::Scheduler::MinimumTimeBudget ensureNonZeroRunTime,
        ::Scheduler::MaximumTimeBudget limitMaxRunTime
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queueCallback(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI std::shared_ptr<void> setCoroutinePolicy(::brstd::move_only_function<bool() const>);

    MCNAPI void setTargetFPS(uint);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<void> setCoroutinePolicy(::brstd::move_only_function<bool() const> policy);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, uint);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view name, uint FPS);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class BackgroundWorker;
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
    enum class MinimumTimeBudget : int {
        Yes = 0,
        No  = 1,
    };

    enum class MaximumTimeBudget : int {
        Yes = 0,
        No  = 1,
    };

    struct CoroutinePolicy {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mShouldStop;
        ::ll::UntypedStorage<8, 16> mOwningThread;
        // NOLINTEND

    public:
        // prevent constructor by default
        CoroutinePolicy();
    };

    class ScopedChangeScheduler {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BackgroundWorker*> mParent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    Scheduler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Scheduler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Scheduler(std::string_view, uint);

    MCNAPI void changeThread(std::__thread_id);

    MCNAPI ::WorkerPool& getCoroutinePool();

    MCNAPI void processCoroutines(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        ::Scheduler::MinimumTimeBudget,
        ::Scheduler::MaximumTimeBudget
    );

    MCNAPI void queueCallback(std::shared_ptr<BackgroundTaskBase>);

    MCNAPI std::shared_ptr<void> setCoroutinePolicy(::brstd::move_only_function<bool() const>);

    MCNAPI void setTargetFPS(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, uint);
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
};

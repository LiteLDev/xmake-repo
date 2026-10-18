#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/Scheduler.h"
#include "mc/deps/core_graphics/tasks/GroupPoolDescription.h"
#include "mc/deps/core_graphics/tasks/TaskDispatcher.h"
#include "mc/external/bgfx/InitResult.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

// auto generated forward declare list
// clang-format off
class WorkerPool;
namespace Bedrock::Threading::Burst { template<typename T0, typename T1, typename T2> class WorkQueue; }
namespace Bedrock::Threading::Burst::Strategy { class Console; }
namespace Bedrock::Threading::Burst::Strategy::Execution { class GreedyExecution; }
namespace Core { class DeferredTask; }
namespace bgfx { struct Init; }
namespace cg { template<typename T0, int T1> class TaskPoolGroupExecutionPolicy; }
namespace cg { template<typename T0, typename T1, typename T2, typename T3, typename T4> class LambdaExecutor; }
namespace cg { template<typename T0> class TaskScheduler; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::tasks {

class GraphicsTasks {
public:
    // GraphicsTasks inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct InitFinalize;
    struct InitEnd;
    struct InitBgfx;
#else // @header-generator platform
#endif // @header-generator platform
    struct InitBegin;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct InitBgfx;
    struct InitEnd;
    struct InitFinalize;
#endif // @header-generator platform
    struct InitPending;
    struct InitializationState;
    // clang-format on

    // GraphicsTasks inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class ExecutionMode : int {};

    struct InitBegin {};

    struct InitBgfx {};

    struct InitEnd {};

#endif // @header-generator platform
    struct InitFinalize {};

#if defined(LL_PLAT_A) // @header-generator platform
    struct InitEnd {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mResult;
        // NOLINTEND
    };
#else // @header-generator platform
    struct InitPending {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ExecutionMode : int {
        Immediate          = 0,
        Deferred           = 1,
        RenderThreadLocked = 2,
        Unconstrained      = 3,
    };

    struct InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<bgfx::Init>>                               mInitParameters;
        ::ll::TypedStorage<1, 1, bool>                                                       async;
        ::ll::TypedStorage<4, 8, std::optional<dragon::tasks::GraphicsTasks::ExecutionMode>> mExecutionModeOverride;
        // NOLINTEND
    };

    struct InitBegin : public ::dragon::tasks::GraphicsTasks::InitBgfx {};

    struct InitPending : public ::dragon::tasks::GraphicsTasks::InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::atomic<bool>>>             mNeedsWake;
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::atomic<bgfx::InitResult>>> mInitResult;
        // NOLINTEND
    };

    struct InitializationState : public ::std::variant<
                                     std::monostate,
                                     dragon::tasks::GraphicsTasks::InitBegin,
                                     dragon::tasks::GraphicsTasks::InitPending,
                                     dragon::tasks::GraphicsTasks::InitFinalize,
                                     dragon::tasks::GraphicsTasks::InitEnd> {
    public:
        // prevent constructor by default
        InitializationState& operator=(InitializationState const&);
        InitializationState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::optional<bool> getResult() const;
        // NOLINTEND
    };

    using InitializationVariant = std::variant<
        std::monostate,
        dragon::tasks::GraphicsTasks::InitBegin,
        dragon::tasks::GraphicsTasks::InitPending,
        dragon::tasks::GraphicsTasks::InitFinalize,
        dragon::tasks::GraphicsTasks::InitEnd>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                   mRendererThreadId;
    ::ll::TypedStorage<1, 1, bool>                                               mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                               mSkipPresenting;
    ::ll::TypedStorage<4, 4, ::dragon::tasks::GraphicsTasks::ExecutionMode>      mExecutionMode;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<WorkerPool*>>                       mRendererPool;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<WorkerPool>>>   mHelperPools;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Scheduler*>>                        mClientScheduler;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void()>>>> mPreFrameTasks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void()>>>> mRenderSettingsTasks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void()>>>> mResourceTasks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void()>>>> mRenderingTasks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<MPMCQueue<std::function<void()>>>> mRenderingPostTasks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::DeferredTask>>               mFrameContentCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::DeferredTask>>               mRenderingFrameWorker;
    ::ll::TypedStorage<8, 104, ::Scheduler>                                      mRenderingCommandScheduler;
    ::ll::UntypedStorage<8, 16>                                                  mGraphicsDispatcher;
    ::ll::UntypedStorage<8, 16>                                                  mParallelGraphicsDispatcher;
    ::ll::UntypedStorage<8, 8>                                                   mMainFrameRenderTasksQueue;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                                  mFrameCount;
    ::ll::TypedStorage<8, 8, ulong>                                              mWorkersCount;
    ::ll::TypedStorage<8, 8, std::atomic<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRenderDuration;
    // NOLINTEND
#else // @header-generator platform
    struct InitializationState {};
#endif // @header-generator platform
};

} // namespace dragon::tasks

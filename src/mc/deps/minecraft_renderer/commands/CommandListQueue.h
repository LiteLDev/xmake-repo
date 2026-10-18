#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/deps/core_graphics/tasks/GroupPoolDescription.h"
#include "mc/deps/core_graphics/tasks/TaskDispatcher.h"
#include "mc/deps/minecraft_renderer/commands/CommandListTaskContext.h"

// auto generated forward declare list
// clang-format off
class CommandListFuture;
class Scheduler;
class WorkerPool;
template<typename T0> class buffer_span_mut;
struct ThreadedFrameConstantsContainer;
namespace cg { template<typename T0, int T1> class TaskPoolGroupExecutionPolicy; }
namespace cg { template<typename T0, typename T1, typename T2, typename T3, typename T4> class LambdaExecutor; }
namespace cg { template<typename T0> class TaskScheduler; }
namespace cg::details { template<typename T0, typename T1> class SpecializedScopedFrame; }
namespace mce { class RenderDevice; }
// clang-format on

class CommandListQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CommandListTaskContext> mGlobalContext;
    ::ll::TypedStorage<1, 1, bool>                      mIsAsync;
    ::ll::UntypedStorage<8, 16>                         mDragonDispatcher;
    ::ll::UntypedStorage<8, 8>                          mDragonDispatcherScope;
    ::ll::UntypedStorage<8, 112>                        mPerThreadContextConstants;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandListQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandListQueue(
        ::mce::RenderDevice&,
        ::Scheduler&,
        ::WorkerPool*,
        ::gsl::span<std::reference_wrapper<WorkerPool>> const
    );

    MCNAPI void generateAndQueue(std::function<void(CommandListTaskContext&)>);

    MCNAPI ::CommandListFuture generateAsync(std::function<void(CommandListTaskContext&)>);

    MCNAPI bool isAsync() const;

    MCNAPI void processCommandLists();

    MCNAPI void queue(::buffer_span_mut<CommandListFuture>);

    MCNAPI void setAsync(bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::RenderDevice&, ::Scheduler&, ::WorkerPool*, ::gsl::span<std::reference_wrapper<WorkerPool>> const);
    // NOLINTEND
};
#else // @header-generator platform
class CommandListQueue {};
#endif // @header-generator platform

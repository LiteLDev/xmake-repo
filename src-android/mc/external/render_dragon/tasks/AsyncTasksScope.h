#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core_graphics/tasks/GroupPoolDescription.h"
#include "mc/deps/core_graphics/tasks/TaskDispatcher.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

// auto generated forward declare list
// clang-format off
namespace cg { template<typename T0, int T1> class TaskPoolGroupExecutionPolicy; }
namespace cg { template<typename T0, typename T1, typename T2, typename T3, typename T4> class LambdaExecutor; }
namespace cg { template<typename T0> class TaskScheduler; }
namespace cg::details { class WorkToken; }
namespace cg::details { template<typename T0, typename T1> class SpecializedScopedFrame; }
// clang-format on

namespace dragon::tasks {

class AsyncTasksScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616> mAsyncTasks;
    ::ll::UntypedStorage<1, 8>   mCompleted;
    ::ll::UntypedStorage<1, 8>   mScopedFrame;
    // NOLINTEND
};

} // namespace dragon::tasks

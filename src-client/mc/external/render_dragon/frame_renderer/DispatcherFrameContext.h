#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/deps/core_graphics/tasks/TaskDispatcher.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace cg { struct GroupPoolDescription; }
namespace cg { template<typename T0, int T1> class TaskPoolGroupExecutionPolicy; }
namespace cg { template<typename T0, typename T1, typename T2, typename T3, typename T4> class LambdaExecutor; }
namespace cg { template<typename T0> class TaskScheduler; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::framerenderer { class BgfxEncoderPool; }
namespace dragon::framerenderer { class RenderContext; }
namespace dragon::platform { class ResourcesManager; }
// clang-format on

namespace dragon::framegraph {

struct DispatcherFrameContext {
public:
    // DispatcherFrameContext inner types define
    using TGraphicsDispatcher = ::cg::TaskDispatcher<cg::TaskScheduler<cg::LambdaExecutor<
        dragon::framerenderer::RenderContext,
        cg::TaskPoolGroupExecutionPolicy<dragon::framerenderer::RenderContext, 1>,
        const std::string&,
        const std::vector<cg::GroupPoolDescription>&,
        const std::vector<std::__thread_id>&>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                          mAllocator;
    ::ll::UntypedStorage<8, 8>                                          mDispatcher;
    ::ll::TypedStorage<8, 8, ::dragon::framerenderer::BgfxEncoderPool&> mEncoderPool;
    ::ll::TypedStorage<8, 8, ::dragon::platform::ResourcesManager&>     mResourcesManager;
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource* const>  mMissingTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatcherFrameContext& operator=(DispatcherFrameContext const&);
    DispatcherFrameContext(DispatcherFrameContext const&);
    DispatcherFrameContext();
};

} // namespace dragon::framegraph
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

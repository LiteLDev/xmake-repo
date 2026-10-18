#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/fidelityfx/FSRContext.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules::fidelityfx::fsr1 {

#if defined(LL_PLAT_A) // @header-generator platform
struct FSRComputeContext : public ::dragon::framerenderer::modules::fidelityfx::fsr1::FSRContext {
public:
    // prevent constructor by default
    FSRComputeContext& operator=(FSRComputeContext const&);
    FSRComputeContext(FSRComputeContext const&);
    FSRComputeContext();
};
#else // @header-generator platform
struct FSRComputeContext {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules::fidelityfx::fsr1

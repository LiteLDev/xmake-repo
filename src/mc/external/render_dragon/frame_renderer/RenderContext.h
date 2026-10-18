#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::framerenderer { class BgfxEncoderPool; }
namespace dragon::framerenderer { class CommandContext; }
namespace dragon::platform { class ResourcesManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContext {
public:
    // RenderContext inner types define
    using SharedCommandContext = std::shared_ptr<dragon::framerenderer::CommandContext>;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<dragon::framerenderer::CommandContext> getContextForWork(
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&,
        ushort const,
        ::dragon::framerenderer::BgfxEncoderPool&,
        ::dragon::platform::ResourcesManager&,
        ::dragon::ResolvedTextureResource* const,
        std::optional<uint>
    );
    // NOLINTEND
};
#else // @header-generator platform
class RenderContext {};
#endif // @header-generator platform

} // namespace dragon::framerenderer

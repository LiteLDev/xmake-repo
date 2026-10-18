#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/render_dragon/frame_renderer/systems/BlitableEntity.h"
#include "mc/external/render_dragon/frame_renderer/systems/SortedEntity.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon::frameobject::components { struct MaterialFilter; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::frameobject::components { struct PassState; }
namespace dragon::frameobject::components { struct RenderTarget; }
namespace dragon::frameobject::components { struct Transform; }
namespace dragon::framerenderer { struct RenderTargetSortKey; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
class BlitableEntityCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mBlitableEntities;
    ::ll::UntypedStorage<8, 32> mSortedEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    BlitableEntityCollection();
};
#else // @header-generator platform
class BlitableEntityCollection {};
#endif // @header-generator platform

} // namespace dragon::framerenderer

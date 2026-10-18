#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon::framerenderer { class BlitableEntityCollection; }
namespace dragon::framerenderer { class PreparedBlitCollection; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer {

class BlitPrepareSystem {};

} // namespace dragon::framerenderer

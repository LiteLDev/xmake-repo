#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::mesh {

struct VertexBufferAllocator {
public:
    // VertexBufferAllocator inner types define
    using Handle = std::optional<
        dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>;
};

} // namespace dragon::mesh
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

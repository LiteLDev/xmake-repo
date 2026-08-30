#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::mesh {

struct IndexBufferAllocator {
public:
    // IndexBufferAllocator inner types define
    using Handle = std::optional<
        dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>;
};

} // namespace dragon::mesh

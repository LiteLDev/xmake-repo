#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class buffer_span_mut;
// clang-format on

namespace Core {

class CpuRingBufferAllocation_Buffer {
public:
    // CpuRingBufferAllocation_Buffer inner types declare
    // clang-format off
    class Buffer;
    // clang-format on

    // CpuRingBufferAllocation_Buffer inner types define
    class Buffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mBuffer;
        // NOLINTEND

    public:
        // prevent constructor by default
        Buffer();
    };

    using BufferPtr = std::shared_ptr<Core::CpuRingBufferAllocation_Buffer::Buffer>;

    using BufferEntry = ::buffer_span_mut<uchar>;

    using Ptr = std::shared_ptr<Core::CpuRingBufferAllocation_Buffer>;
};

} // namespace Core

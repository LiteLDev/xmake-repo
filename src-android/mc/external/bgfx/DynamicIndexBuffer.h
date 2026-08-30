#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/IndexBufferHandle.h"

namespace bgfx {

struct DynamicIndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::IndexBufferHandle> m_handle;
    ::ll::TypedStorage<4, 4, uint>                      m_offset;
    ::ll::TypedStorage<4, 4, uint>                      m_size;
    ::ll::TypedStorage<4, 4, uint>                      m_startIndex;
    ::ll::TypedStorage<2, 2, ushort>                    m_flags;
    // NOLINTEND
};

} // namespace bgfx

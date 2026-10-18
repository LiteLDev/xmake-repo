#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/d3d12/heap_property/Enum.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx::d3d12 {

#if defined(LL_PLAT_C) // @header-generator platform
class StagingBufferD3D12 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ID3D12Resource*>                 m_upload;
    ::ll::TypedStorage<8, 8, uint64>                            m_gpuVA;
    ::ll::TypedStorage<8, 8, uchar*>                            m_data;
    ::ll::TypedStorage<4, 4, uint>                              m_size;
    ::ll::TypedStorage<4, 4, ::bgfx::d3d12::HeapProperty::Enum> m_properties;
    // NOLINTEND
};
#else // @header-generator platform
class StagingBufferD3D12 {};
#endif // @header-generator platform

} // namespace bgfx::d3d12
#endif // @header-generator platform

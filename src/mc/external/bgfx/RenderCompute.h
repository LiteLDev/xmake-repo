#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/IndirectBufferHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderCompute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                         m_uniformBegin;
    ::ll::TypedStorage<4, 4, uint>                         m_uniformEnd;
    ::ll::TypedStorage<4, 4, uint>                         m_startMatrix;
    ::ll::TypedStorage<2, 2, ::bgfx::IndirectBufferHandle> m_indirectBuffer;
    ::ll::TypedStorage<4, 4, uint>                         m_numX;
    ::ll::TypedStorage<4, 4, uint>                         m_numY;
    ::ll::TypedStorage<4, 4, uint>                         m_numZ;
    ::ll::TypedStorage<2, 2, ushort>                       m_startIndirect;
    ::ll::TypedStorage<2, 2, ushort>                       m_numIndirect;
    ::ll::TypedStorage<2, 2, ushort>                       m_numMatrices;
    ::ll::TypedStorage<1, 1, uchar>                        m_submitFlags;
    ::ll::TypedStorage<1, 1, uchar>                        m_uniformIdx;
    ::ll::UntypedStorage<1, 28>                            m_isRayTracing;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderCompute {};
#endif // @header-generator platform

} // namespace bgfx

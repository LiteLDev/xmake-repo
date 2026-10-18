#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Access.h"
#include "mc/external/bgfx/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct DynamicIndexBufferHandle; }
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct IndirectBufferHandle; }
namespace bgfx { struct InstanceDataBuffer; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RayTracingConfiguration; }
namespace bgfx { struct RayTracingResources; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct Transform; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDeclHandle; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/access/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TextureHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct Encoder {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void blit(
        ushort,
        ::bgfx::TextureHandle,
        uchar,
        ushort,
        ushort,
        ushort,
        ::bgfx::TextureHandle,
        uchar,
        ushort,
        ushort,
        ushort,
        ushort,
        ushort,
        ushort
    );

    MCNAPI void discard();

    MCNAPI void dispatch(ushort, ::bgfx::ProgramHandle, uint, uint, uint, uchar);

    MCNAPI void
    doAllRayTracing(ushort, ::bgfx::RayTracingConfiguration const&, ::bgfx::RayTracingResources const&, uint, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::UniformHandle, ::bgfx::AccelerationStructureHandle);

    MCNAPI void setBuffer(uchar, ::bgfx::IndexBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::VertexBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::DynamicIndexBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::DynamicVertexBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::IndirectBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffer(uchar, ::bgfx::UniformHandle, ::bgfx::ShaderBufferHandle, ::bgfx::Access::Enum, uint);

    MCNAPI void setBuffersAsRanged(
        uchar,
        ::bgfx::ShaderBufferHandle const*,
        ulong,
        ::bgfx::Access::Enum const*,
        ulong,
        uint const*,
        ulong,
        ulong,
        uint
    );

    MCNAPI void setDepthBias(int, float, float);

    MCNAPI void setImage(uchar, ::bgfx::TextureHandle, uchar, ::bgfx::Access::Enum, ::bgfx::TextureFormat::Enum);

    MCNAPI void setImagesAsRanged(
        uchar,
        ::bgfx::TextureHandle const*,
        ulong,
        uchar const*,
        ulong,
        ::bgfx::Access::Enum const*,
        ulong,
        ::bgfx::TextureFormat::Enum const*,
        ulong,
        ulong,
        uint
    );

    MCNAPI void setIndexBuffer(::bgfx::IndexBufferHandle, uint, uint, uint);

    MCNAPI void setIndexBuffer(::bgfx::DynamicIndexBufferHandle, uint, uint, uint);

    MCNAPI void setInstanceCount(uint);

    MCNAPI void setInstanceDataBuffer(::bgfx::InstanceDataBuffer const*, uint, uint);

    MCNAPI void setMarker(char const*);

    MCNAPI void setSamplerState(uchar, uint);

    MCNAPI ushort setScissor(ushort, ushort, ushort, ushort);

    MCNAPI void setState(ulong, uint);

    MCNAPI void setStencil(uint, uint);

    MCNAPI void setTexture(uchar, ::bgfx::UniformHandle, ::bgfx::TextureHandle, uint);

    MCNAPI void setTexturesAsRanged(uchar, ::bgfx::TextureHandle const*, ulong, uint const*, ulong, ulong, uint);

    MCNAPI uint setTransform(void const*, ushort);

    MCNAPI void setUniform(::bgfx::UniformHandle, void const*, ushort);

    MCNAPI void setVertexBuffer(uchar, ::bgfx::VertexBufferHandle, uint, uint);

    MCNAPI void setVertexBuffer(uchar, ::bgfx::DynamicVertexBufferHandle, uint, uint, ::bgfx::VertexDeclHandle, uint);

    MCNAPI void submit(ushort, ::bgfx::ProgramHandle, int, bool);

    MCNAPI void touch(ushort);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Encoder {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void blit(
        ushort                _id,
        ::bgfx::TextureHandle _dst,
        uchar                 _dstMip,
        ushort                _dstX,
        ushort                _dstY,
        ushort                _dstZ,
        ::bgfx::TextureHandle _src,
        uchar                 _srcMip,
        ushort                _srcX,
        ushort                _srcY,
        ushort                _srcZ,
        ushort                _width,
        ushort                _height,
        ushort                _depth
    );

    MCAPI void setImagesAsRanged(
        uchar                              _stage,
        ::bgfx::TextureHandle const*       _textureHandles,
        uint64                             _textureHandleStride,
        uchar const*                       _mips,
        uint64                             _mipsStride,
        ::bgfx::Access::Enum const*        _access,
        uint64                             _accessStride,
        ::bgfx::TextureFormat::Enum const* _format,
        uint64                             _formatStride,
        uint64                             _count,
        uint                               _offset
    );
    // NOLINTEND
};
#else // @header-generator platform
struct Encoder {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

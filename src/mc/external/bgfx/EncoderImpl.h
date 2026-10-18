#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Access.h"
#include "mc/external/bgfx/RenderBind.h"
#include "mc/external/bgfx/RenderCompute.h"
#include "mc/external/bgfx/RenderDraw.h"
#include "mc/external/bgfx/SortKey.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/UniformType.h"
#include "mc/external/bgfx/tinystl/unordered_set.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct DynamicIndexBuffer; }
namespace bgfx { struct DynamicVertexBuffer; }
namespace bgfx { struct Frame; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct IndirectBufferHandle; }
namespace bgfx { struct InstanceDataBuffer; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RangedBindings; }
namespace bgfx { struct RayTracingConfiguration; }
namespace bgfx { struct RayTracingResources; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct TinyStlAllocator; }
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
#include "mc/external/bgfx/RenderBind.h"
#include "mc/external/bgfx/RenderCompute.h"
#include "mc/external/bgfx/RenderDraw.h"
#include "mc/external/bgfx/SortKey.h"
#include "mc/external/bgfx/access/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/tinystl/unordered_set.h"
#include "mc/external/bgfx/uniform_type/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Frame; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RangedBindings; }
namespace bgfx { struct RayTracingConfiguration; }
namespace bgfx { struct RayTracingResources; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct TinyStlAllocator; }
namespace bgfx { struct UniformHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct EncoderImpl {
public:
    // EncoderImpl inner types define
    using HandleSet = ::tinystl::unordered_set<ushort, bgfx::TinyStlAllocator>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>          m_frame;
    ::ll::UntypedStorage<4, 56>                       m_key;
    ::ll::TypedStorage<8, 128, ::bgfx::RenderDraw>    m_draw;
    ::ll::UntypedStorage<4, 64>                       m_compute;
    ::ll::TypedStorage<4, 1280, ::bgfx::RenderBind>   m_bind;
    ::ll::TypedStorage<8, 8, ::bgfx::RangedBindings*> m_rangedBindings;
    ::ll::TypedStorage<1, 1, bool>                    m_isDirty;
    ::ll::TypedStorage<4, 4, uint>                    m_numSubmitted;
    ::ll::TypedStorage<4, 4, uint>                    m_numDropped;
    ::ll::TypedStorage<4, 4, uint>                    m_uniformBegin;
    ::ll::TypedStorage<4, 4, uint>                    m_uniformEnd;
    ::ll::TypedStorage<4, 16, uint[4]>                m_numVertices;
    ::ll::TypedStorage<1, 1, uchar>                   m_uniformIdx;
    ::ll::TypedStorage<1, 1, bool>                    m_discard;
    ::ll::UntypedStorage<8, 32>                       m_uniformSet;
    ::ll::UntypedStorage<8, 32>                       m_occlusionQuerySet;
    ::ll::TypedStorage<8, 8, long>                    m_cpuTimeBegin;
    ::ll::TypedStorage<8, 8, long>                    m_cpuTimeEnd;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void discard();

    MCNAPI void dispatch(ushort, ::bgfx::ProgramHandle, uint, uint, uint, uchar);

    MCNAPI void
    doAllRayTracing(ushort, ::bgfx::RayTracingConfiguration const&, ::bgfx::RayTracingResources const&, uint, uint);

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

    MCNAPI void setTexturesAsRanged(uchar, ::bgfx::TextureHandle const*, ulong, uint const*, ulong, ulong, uint);

    MCNAPI void setUniform(::bgfx::UniformType::Enum, ::bgfx::UniformHandle, void const*, ushort);

    MCNAPI void submit(ushort, ::bgfx::ProgramHandle, ::bgfx::OcclusionQueryHandle, int, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EncoderImpl {
public:
    // EncoderImpl inner types define
    using HandleSet = ::tinystl::unordered_set<ushort, ::bgfx::TinyStlAllocator>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                                              m_frame;
    ::ll::TypedStorage<4, 56, ::bgfx::SortKey>                                            m_key;
    ::ll::TypedStorage<8, 128, ::bgfx::RenderDraw>                                        m_draw;
    ::ll::TypedStorage<4, 64, ::bgfx::RenderCompute>                                      m_compute;
    ::ll::TypedStorage<4, 1344, ::bgfx::RenderBind>                                       m_bind;
    ::ll::TypedStorage<8, 8, ::bgfx::RangedBindings*>                                     m_rangedBindings;
    ::ll::TypedStorage<1, 1, bool>                                                        m_isDirty;
    ::ll::TypedStorage<4, 4, uint>                                                        m_numSubmitted;
    ::ll::TypedStorage<4, 4, uint>                                                        m_numDropped;
    ::ll::TypedStorage<4, 4, uint>                                                        m_uniformBegin;
    ::ll::TypedStorage<4, 4, uint>                                                        m_uniformEnd;
    ::ll::TypedStorage<4, 16, uint[4]>                                                    m_numVertices;
    ::ll::TypedStorage<1, 1, uchar>                                                       m_uniformIdx;
    ::ll::TypedStorage<1, 1, bool>                                                        m_discard;
    ::ll::TypedStorage<8, 32, ::tinystl::unordered_set<ushort, ::bgfx::TinyStlAllocator>> m_uniformSet;
    ::ll::TypedStorage<8, 32, ::tinystl::unordered_set<ushort, ::bgfx::TinyStlAllocator>> m_occlusionQuerySet;
    ::ll::TypedStorage<8, 8, int64>                                                       m_cpuTimeBegin;
    ::ll::TypedStorage<8, 8, int64>                                                       m_cpuTimeEnd;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void discard();

    MCAPI void dispatch(ushort _id, ::bgfx::ProgramHandle _handle, uint _numX, uint _numY, uint _numZ, uchar _flags);

    MCAPI void doAllRayTracing(
        ushort                                 _id,
        ::bgfx::RayTracingConfiguration const& rtConfig,
        ::bgfx::RayTracingResources const&     rtResources,
        uint                                   _width,
        uint                                   _height
    );

    MCAPI void setBuffersAsRanged(
        uchar                             _stage,
        ::bgfx::ShaderBufferHandle const* _shaderBufferHandles,
        uint64                            _shaderBufferHandleStride,
        ::bgfx::Access::Enum const*       _access,
        uint64                            _accessStride,
        uint const*                       _bufferOffset,
        uint64                            _bufferOffsetStride,
        uint64                            _count,
        uint                              _arrayIndexOffset
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

    MCAPI void setTexturesAsRanged(
        uchar                        _stage,
        ::bgfx::TextureHandle const* _textureHandles,
        uint64                       _textureHandleStride,
        uint const*                  _flags,
        uint64                       _flagStride,
        uint64                       _count,
        uint                         _offset
    );

    MCAPI void
    setUniform(::bgfx::UniformType::Enum _type, ::bgfx::UniformHandle _handle, void const* _value, ushort _num);

    MCAPI void submit(
        ushort                       _id,
        ::bgfx::ProgramHandle        _program,
        ::bgfx::OcclusionQueryHandle _occlusionQuery,
        int                          _depth,
        bool                         _preserveState
    );
    // NOLINTEND
};
#else // @header-generator platform
struct EncoderImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace bgfx {

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

} // namespace bgfx

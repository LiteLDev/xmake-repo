#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/BlitItem.h"
#include "mc/external/bgfx/CommandBuffer.h"
#include "mc/external/bgfx/FrameCache.h"
#include "mc/external/bgfx/GuardedFreeHandleDynamic.h"
#include "mc/external/bgfx/RayTracingConfiguration.h"
#include "mc/external/bgfx/RayTracingResources.h"
#include "mc/external/bgfx/RenderBind.h"
#include "mc/external/bgfx/RenderItem.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/bgfx/Stats.h"
#include "mc/external/bgfx/View.h"
#include "mc/external/bgfx/ViewStats.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct FrameBufferHandle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RangedBindings; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct ShaderHandle; }
namespace bgfx { struct TextVideoMem; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDeclHandle; }
// clang-format on

namespace bgfx {

struct Frame {
public:
    // Frame inner types declare
    // clang-format off
    template<typename T0, int T1> struct FreeHandle;
    // clang-format on

    // Frame inner types define
    template <typename T0, int T1>
    struct FreeHandle {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 512, ushort[256]>                        m_viewRemap;
    ::ll::UntypedStorage<4, 256>                                   m_colorPalette;
    ::ll::UntypedStorage<8, 131072>                                m_view;
    ::ll::TypedStorage<4, 1024, int[256]>                          m_occlusion;
    ::ll::TypedStorage<8, 524288, ulong[65536]>                    m_sortKeys;
    ::ll::TypedStorage<2, 131072, ushort[65536]>                   m_sortValues;
    ::ll::TypedStorage<8, 8388608, ::bgfx::RenderItem[65536]>      m_renderItem;
    ::ll::TypedStorage<4, 83886080, ::bgfx::RenderBind[65536]>     m_renderItemBind;
    ::ll::TypedStorage<8, 524288, ::bgfx::RangedBindings* [65536]> m_rangedRenderItemBind;
    ::ll::UntypedStorage<4, 4160>                                  m_blitKeys;
    ::ll::UntypedStorage<2, 65600>                                 m_blitItem;
    ::ll::UntypedStorage<4, 4718624>                               m_frameCache;
    ::ll::TypedStorage<8, 8, ::bgfx::UniformBuffer**>              m_uniformBuffer;
    ::ll::TypedStorage<4, 4, uint>                                 m_numRenderItems;
    ::ll::TypedStorage<2, 2, ushort>                               m_numBlitItems;
    ::ll::TypedStorage<4, 4, uint>                                 m_iboffset;
    ::ll::TypedStorage<4, 4, uint>                                 m_vboffset;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientIndexBuffer*>        m_transientIb;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientVertexBuffer*>       m_transientVb;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution>                  m_resolution;
    ::ll::TypedStorage<4, 4, uint>                                 m_debug;
    ::ll::TypedStorage<4, 262152, ::bgfx::CommandBuffer>           m_cmdPre;
    ::ll::TypedStorage<4, 262152, ::bgfx::CommandBuffer>           m_cmdPost;
    ::ll::UntypedStorage<2, 32770>                                 m_freeIndexBuffer;
    ::ll::UntypedStorage<2, 130>                                   m_freeVertexDecl;
    ::ll::UntypedStorage<2, 32770>                                 m_freeVertexBuffer;
    ::ll::UntypedStorage<2, 8194>                                  m_freeShader;
    ::ll::UntypedStorage<2, 4104>                                  m_freeProgram;
    ::ll::UntypedStorage<1, 8224>                                  m_freeTexture;
    ::ll::UntypedStorage<2, 8194>                                  m_freeShaderBuffer;
    ::ll::UntypedStorage<2, 258>                                   m_freeFrameBuffer;
    ::ll::UntypedStorage<2, 1026>                                  m_freeUniform;
    ::ll::UntypedStorage<2, 65538>                                 m_freeAccelerationStructure;
    ::ll::TypedStorage<8, 8, ::bgfx::TextVideoMem*>                m_textVideoMem;
    ::ll::TypedStorage<8, 208, ::bgfx::Stats>                      m_perfStats;
    ::ll::TypedStorage<2, 2, ushort>                               m_numViewStats;
    ::ll::TypedStorage<8, 79872, ::bgfx::ViewStats[256]>           m_viewStats;
    ::ll::TypedStorage<8, 8, long>                                 m_waitSubmit;
    ::ll::TypedStorage<8, 8, long>                                 m_waitRender;
    ::ll::TypedStorage<4, 4, uint>                                 m_frameNum;
    ::ll::TypedStorage<4, 488, ::bgfx::RayTracingConfiguration>    m_rtConfig;
    ::ll::TypedStorage<8, 192, ::bgfx::RayTracingResources>        m_rtResources;
    ::ll::TypedStorage<1, 1, bool>                                 m_capture;
    ::ll::UntypedStorage<1, 63>                                    m_skipFlip;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Frame();

    MCNAPI void cloneRangedBindingsToRenderItem(uint, ::bgfx::RangedBindings const&);

    MCNAPI void create();

    MCNAPI void destroy();

    MCNAPI void sort();

    MCNAPI ~Frame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace bgfx

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/AccelerationStructureBuildFlags.h"
#include "mc/external/bgfx/BackbufferRatio.h"
#include "mc/external/bgfx/ClearQuad.h"
#include "mc/external/bgfx/CommandBuffer.h"
#include "mc/external/bgfx/DynamicIndexBuffer.h"
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/DynamicVertexBuffer.h"
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/Frame.h"
#include "mc/external/bgfx/GuardedHandleAllocPagedT.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/IndexBuffer.h"
#include "mc/external/bgfx/Init.h"
#include "mc/external/bgfx/InitResult.h"
#include "mc/external/bgfx/InitState.h"
#include "mc/external/bgfx/NonLocalAllocator.h"
#include "mc/external/bgfx/OcclusionQueryHandle.h"
#include "mc/external/bgfx/RenderFrame.h"
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/bgfx/ShaderHandle.h"
#include "mc/external/bgfx/Stats.h"
#include "mc/external/bgfx/TextVideoMemBlitter.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/bgfx/UniformType.h"
#include "mc/external/bgfx/UpdateBatchT.h"
#include "mc/external/bgfx/VertexBuffer.h"
#include "mc/external/bgfx/VertexDeclRef.h"
#include "mc/external/bgfx/View.h"
#include "mc/external/bgfx/ViewMode.h"
#include "mc/external/bgfx/ViewStats.h"
#include "mc/external/bx/StringT.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class CommandBuffer; }
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct AllocationContext; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct Encoder; }
namespace bgfx { struct EncoderImpl; }
namespace bgfx { struct EncoderStats; }
namespace bgfx { struct FrameBufferHandle; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct IndirectBufferHandle; }
namespace bgfx { struct InstanceDataBuffer; }
namespace bgfx { struct Memory; }
namespace bgfx { struct NativeCommandListScope; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RendererContextI; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureInfo; }
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct UniformInfo; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { class HandleAlloc; }
namespace bx { class Mutex; }
namespace bx { class Semaphore; }
namespace bx { class StringView; }
namespace bx { class Thread; }
namespace bx { template<auto T0> class StringT; }
namespace bx { template<int T0, typename T1> class HandleHashMapT; }
namespace bx { template<ushort T0> class HandleAllocT; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/external/bgfx/ClearQuad.h"
#include "mc/external/bgfx/DynamicIndexBuffer.h"
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/DynamicVertexBuffer.h"
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/Frame.h"
#include "mc/external/bgfx/GuardedHandleAllocPagedT.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/IndexBuffer.h"
#include "mc/external/bgfx/Init.h"
#include "mc/external/bgfx/InitResult.h"
#include "mc/external/bgfx/InitState.h"
#include "mc/external/bgfx/NonLocalAllocator.h"
#include "mc/external/bgfx/OcclusionQueryHandle.h"
#include "mc/external/bgfx/ShaderHandle.h"
#include "mc/external/bgfx/Stats.h"
#include "mc/external/bgfx/TextVideoMemBlitter.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/bgfx/UpdateBatchT.h"
#include "mc/external/bgfx/VertexBuffer.h"
#include "mc/external/bgfx/VertexDeclRef.h"
#include "mc/external/bgfx/View.h"
#include "mc/external/bgfx/ViewStats.h"
#include "mc/external/bgfx/acceleration_structure_build_flags/Enum.h"
#include "mc/external/bgfx/backbuffer_ratio/Enum.h"
#include "mc/external/bgfx/render_frame/Enum.h"
#include "mc/external/bgfx/renderer_type/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"
#include "mc/external/bgfx/uniform_type/Enum.h"
#include "mc/external/bx/HandleAllocT.h"
#include "mc/external/bx/HandleHashMapT.h"
#include "mc/external/bx/Mutex.h"
#include "mc/external/bx/Semaphore.h"
#include "mc/external/bx/Thread.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class CommandBuffer; }
namespace bgfx { struct AccelerationStructureHandle; }
namespace bgfx { struct AllocationContext; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct Encoder; }
namespace bgfx { struct EncoderImpl; }
namespace bgfx { struct EncoderStats; }
namespace bgfx { struct FrameBufferHandle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct Memory; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct RendererContextI; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct TextureInfo; }
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct UniformInfo; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { class HandleAlloc; }
namespace bx { class StringT; }
namespace bx { class StringView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace bgfx {

struct Context {
public:
    // Context inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformRef;
#else // @header-generator platform
    struct DynamicVertexAllocation;
#endif // @header-generator platform
    struct ShaderRef;
    struct ProgramRef;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UniformRef;
#endif // @header-generator platform
    struct TextureRef;
    struct ShaderBufferRef;
    struct FrameBufferRef;
#if defined(LL_PLAT_A) // @header-generator platform
    struct DynamicVertexAllocation;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // Context inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>      m_name;
        ::ll::UntypedStorage<4, 4>       m_type;
        ::ll::TypedStorage<2, 2, ushort> m_num;
        ::ll::TypedStorage<2, 2, short>  m_refCount;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DynamicVertexAllocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> m_ptr;
        ::ll::TypedStorage<4, 4, uint>   m_offset;
        ::ll::TypedStorage<8, 8, uint64> m_totalSize;
        // NOLINTEND
    };
#else // @header-generator platform
    struct DynamicVertexAllocation {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UniformRef();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ShaderRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::bgfx::UniformHandle*> m_uniforms;
        ::ll::TypedStorage<8, 16, ::bx::StringT>         m_name;
        ::ll::TypedStorage<4, 4, uint>                   m_hash;
        ::ll::TypedStorage<2, 2, short>                  m_refCount;
        ::ll::TypedStorage<2, 2, ushort>                 m_num;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ShaderRef {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ProgramRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_vsh;
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_fsh;
        ::ll::TypedStorage<2, 2, short>                m_refCount;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ProgramRef {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ShaderRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::bgfx::UniformHandle*> m_uniforms;
        ::ll::UntypedStorage<8, 16>                      m_name;
        ::ll::TypedStorage<4, 4, uint>                   m_hash;
        ::ll::TypedStorage<2, 2, short>                  m_refCount;
        ::ll::TypedStorage<2, 2, ushort>                 m_num;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct UniformRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bx::StringT>            m_name;
        ::ll::TypedStorage<4, 4, ::bgfx::UniformType::Enum> m_type;
        ::ll::TypedStorage<2, 2, ushort>                    m_num;
        ::ll::TypedStorage<2, 2, short>                     m_refCount;
        // NOLINTEND
    };
#else // @header-generator platform
    struct UniformRef {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ShaderRef();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TextureRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bx::StringT> m_name;
        ::ll::TypedStorage<8, 8, void*>          m_ptr;
        ::ll::TypedStorage<4, 4, uint>           m_storageSize;
        ::ll::TypedStorage<2, 2, short>          m_refCount;
        ::ll::TypedStorage<1, 1, uchar>          m_bbRatio;
        ::ll::TypedStorage<1, 1, uchar>          m_format;
        ::ll::TypedStorage<1, 1, uchar>          m_numMips;
        ::ll::TypedStorage<2, 2, ushort>         m_numLayers;
        ::ll::TypedStorage<1, 1, bool>           m_owned;
        ::ll::TypedStorage<1, 1, bool>           m_immutable;
        ::ll::TypedStorage<1, 1, bool>           m_rt;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TextureRef {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ProgramRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_vsh;
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderHandle> m_fsh;
        ::ll::TypedStorage<2, 2, short>                m_refCount;
        // NOLINTEND
    };

    struct TextureRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>      m_name;
        ::ll::TypedStorage<8, 8, void*>  m_ptr;
        ::ll::TypedStorage<4, 4, uint>   m_storageSize;
        ::ll::TypedStorage<2, 2, short>  m_refCount;
        ::ll::TypedStorage<1, 1, uchar>  m_bbRatio;
        ::ll::TypedStorage<1, 1, uchar>  m_format;
        ::ll::TypedStorage<1, 1, uchar>  m_numMips;
        ::ll::TypedStorage<2, 2, ushort> m_numLayers;
        ::ll::TypedStorage<1, 1, bool>   m_owned;
        ::ll::TypedStorage<1, 1, bool>   m_immutable;
        ::ll::TypedStorage<1, 1, bool>   m_rt;
        // NOLINTEND
    };

    struct ShaderBufferRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>     m_name;
        ::ll::TypedStorage<8, 8, void*> m_ptr;
        ::ll::TypedStorage<4, 4, uint>  m_stride;
        ::ll::TypedStorage<4, 4, uint>  m_count;
        ::ll::TypedStorage<2, 2, short> m_refCount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ShaderBufferRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ShaderBufferRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bx::StringT> m_name;
        ::ll::TypedStorage<8, 8, void*>          m_ptr;
        ::ll::TypedStorage<4, 4, uint>           m_stride;
        ::ll::TypedStorage<4, 4, uint>           m_count;
        ::ll::TypedStorage<2, 2, short>          m_refCount;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ShaderBufferRef {};
#endif // @header-generator platform
#endif // @header-generator platform

    struct FrameBufferRef {
    public:
        // FrameBufferRef inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        union un {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<2, 16> m_th;
            ::ll::UntypedStorage<8, 16> m_nwh;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bgfx::Context::FrameBufferRef::un> un;
        ::ll::TypedStorage<1, 1, bool>                                 m_window;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        union un {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<2, 16, ::bgfx::TextureHandle[8]> m_th;
            ::ll::TypedStorage<8, 16, void*>                    m_nwh;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::bgfx::Context::FrameBufferRef::un> un;
        ::ll::TypedStorage<1, 1, bool>                                 m_window;
        // NOLINTEND
#else // @header-generator platform
        union un {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    struct DynamicVertexAllocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> m_ptr;
        ::ll::TypedStorage<4, 4, uint>  m_offset;
        ::ll::TypedStorage<8, 8, ulong> m_totalSize;
        // NOLINTEND
    };

    using UniformHashMap = ::bx::HandleHashMapT<1024, uint>;

    using ShaderHashMap = ::bx::HandleHashMapT<8192, uint>;

    using ProgramHashMap = ::bx::HandleHashMapT<4096, uint>;

    using TextureUpdateBatch = ::bgfx::UpdateBatchT<256>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 128>                                           m_renderSem;
    ::ll::UntypedStorage<1, 128>                                           m_apiSem;
    ::ll::UntypedStorage<1, 128>                                           m_encoderEndSem;
    ::ll::UntypedStorage<1, 64>                                            m_encoderApiLock;
    ::ll::UntypedStorage<1, 64>                                            m_resourceApiLock;
    ::ll::UntypedStorage<8, 464>                                           m_thread;
    ::ll::UntypedStorage<1, 64>                                            m_perfStatsApiLock;
    ::ll::TypedStorage<8, 208, ::bgfx::Stats>                              m_lastPerfStats;
    ::ll::TypedStorage<2, 2, ushort>                                       m_lastNumViewStats;
    ::ll::TypedStorage<8, 79872, ::bgfx::ViewStats[256]>                   m_lastViewStats;
    ::ll::TypedStorage<2, 2, ushort>                                       m_lastNumEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                        m_lastEncoderStats;
    ::ll::TypedStorage<2, 2, ushort>                                       m_numEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                        m_encoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::Encoder*>                             m_encoder0;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderImpl*>                         m_encoder;
    ::ll::UntypedStorage<8, 40>                                            m_encoderHandle;
    ::ll::UntypedStorage<8, 198284032>                                     m_frame;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                               m_render;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                               m_submit;
    ::ll::TypedStorage<8, 524280, ulong[65535]>                            m_tempKeys;
    ::ll::TypedStorage<2, 131070, ushort[65535]>                           m_tempValues;
    ::ll::TypedStorage<4, 65536, ::bgfx::IndexBuffer[16384]>               m_indexBuffers;
    ::ll::TypedStorage<4, 131072, ::bgfx::VertexBuffer[16384]>             m_vertexBuffers;
    ::ll::TypedStorage<4, 327680, ::bgfx::DynamicIndexBuffer[16384]>       m_dynamicIndexBuffers;
    ::ll::TypedStorage<4, 458752, ::bgfx::DynamicVertexBuffer[16384]>      m_dynamicVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                       m_numFreeDynamicIndexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                       m_numFreeDynamicVertexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                       m_numFreeOcclusionQueryHandles;
    ::ll::TypedStorage<2, 32768, ::bgfx::DynamicIndexBufferHandle[16384]>  m_freeDynamicIndexBufferHandle;
    ::ll::TypedStorage<2, 32768, ::bgfx::DynamicVertexBufferHandle[16384]> m_freeDynamicVertexBufferHandle;
    ::ll::TypedStorage<2, 512, ::bgfx::OcclusionQueryHandle[256]>          m_freeOcclusionQueryHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                   m_dynIndexBufferAllocator;
    ::ll::UntypedStorage<2, 65540>                                         m_dynamicIndexBufferHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                   m_dynVertexBufferAllocator;
    ::ll::UntypedStorage<2, 65540>                                         m_dynamicVertexBufferHandle;
    ::ll::UntypedStorage<2, 65540>                                         m_indexBufferHandle;
    ::ll::UntypedStorage<2, 260>                                           m_vertexDeclHandle;
    ::ll::UntypedStorage<2, 65540>                                         m_vertexBufferHandle;
    ::ll::UntypedStorage<2, 16388>                                         m_shaderHandle;
    ::ll::UntypedStorage<2, 8196>                                          m_programHandle;
    ::ll::UntypedStorage<2, 16416>                                         m_textureHandle;
    ::ll::UntypedStorage<2, 16388>                                         m_shaderBufferHandle;
    ::ll::UntypedStorage<2, 516>                                           m_frameBufferHandle;
    ::ll::UntypedStorage<2, 2052>                                          m_uniformHandle;
    ::ll::UntypedStorage<2, 1028>                                          m_occlusionQueryHandle;
    ::ll::UntypedStorage<2, 131076>                                        m_accelerationStructureBufferHandle;
    ::ll::UntypedStorage<4, 6152>                                          m_uniformHashMap;
    ::ll::TypedStorage<8, 12288, ::bgfx::Context::UniformRef[512]>         m_uniformRef;
    ::ll::UntypedStorage<4, 49160>                                         m_shaderHashMap;
    ::ll::TypedStorage<8, 131072, ::bgfx::Context::ShaderRef[4096]>        m_shaderRef;
    ::ll::UntypedStorage<4, 24584>                                         m_programHashMap;
    ::ll::TypedStorage<2, 12288, ::bgfx::Context::ProgramRef[2048]>        m_programRef;
    ::ll::UntypedStorage<1, 163872>                                        m_textureRef;
    ::ll::TypedStorage<8, 163840, ::bgfx::Context::ShaderBufferRef[4096]>  m_shaderBufferRef;
    ::ll::TypedStorage<8, 3072, ::bgfx::Context::FrameBufferRef[128]>      m_frameBufferRef;
    ::ll::TypedStorage<4, 66440, ::bgfx::VertexDeclRef>                    m_declRef;
    ::ll::TypedStorage<2, 512, ushort[256]>                                m_viewRemap;
    ::ll::UntypedStorage<4, 1064>                                          m_seq;
    ::ll::UntypedStorage<8, 131072>                                        m_view;
    ::ll::UntypedStorage<4, 256>                                           m_clearColor;
    ::ll::TypedStorage<1, 1, uchar>                                        m_colorPaletteDirty;
    ::ll::TypedStorage<8, 64, ::bgfx::Init>                                m_init;
    ::ll::TypedStorage<8, 8, long>                                         m_frameTimeLast;
    ::ll::TypedStorage<4, 4, uint>                                         m_debug;
    ::ll::TypedStorage<8, 8, long>                                         m_rtMemoryUsed;
    ::ll::TypedStorage<8, 8, long>                                         m_textureMemoryUsed;
    ::ll::TypedStorage<8, 8, long>                                         m_shaderBufferMemoryUsed;
    ::ll::TypedStorage<8, 112, ::bgfx::TextVideoMemBlitter>                m_textVideoMemBlitter;
    ::ll::TypedStorage<8, 112, ::bgfx::ClearQuad>                          m_clearQuad;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                    m_renderCtx;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                    m_renderMain;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                    m_renderNoop;
    ::ll::TypedStorage<4, 4, ::bgfx::InitState>                            m_initState;
    ::ll::TypedStorage<1, 1, bool>                                         m_rendererInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         m_skipFlip;
    ::ll::TypedStorage<1, 1, bool>                                         m_suspended;
    ::ll::TypedStorage<1, 1, bool>                                         m_exit;
    ::ll::TypedStorage<1, 1, bool>                                         m_flipAfterRender;
    ::ll::TypedStorage<1, 1, bool>                                         m_singleThreaded;
    ::ll::TypedStorage<1, 1, bool>                                         m_initSyncOptional;
    ::ll::UntypedStorage<1, 13>                                            m_texturesGuarded;
    ::ll::UntypedStorage<4, 2112>                                          m_textureUpdateBatch;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Context();

    MCNAPI void _initBegin();

    MCNAPI bool _initFinalize();

    MCNAPI void _initPending(bool);

    MCNAPI void _shutdownBegin();

    MCNAPI void _shutdownFinalize();

    MCNAPI ulong allocDynamicIndexBuffer(uint, ushort);

    MCNAPI ::bgfx::Context::DynamicVertexAllocation allocDynamicVertexBuffer(uint, ushort, ushort);

    MCNAPI ::bgfx::Encoder* begin();

    MCNAPI ::bgfx::InitResult continueInit(bool);

    MCNAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle,
        ::bgfx::VertexBufferHandle,
        ::bgfx::VertexDeclHandle,
        uint,
        uint,
        ::bgfx::IndexBufferHandle,
        uint,
        uint,
        ::bgfx::AccelerationStructureBuildFlags::Enum
    );

    MCNAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle,
        ::bgfx::DynamicVertexBufferHandle,
        ::bgfx::VertexDeclHandle,
        uint,
        uint,
        ::bgfx::IndexBufferHandle,
        uint,
        uint,
        ::bgfx::AccelerationStructureBuildFlags::Enum
    );

    MCNAPI ::bgfx::DynamicIndexBufferHandle createDynamicIndexBuffer(uint, ushort);

    MCNAPI ::bgfx::DynamicIndexBufferHandle createDynamicIndexBuffer(::bgfx::Memory const*, ushort);

    MCNAPI ::bgfx::DynamicVertexBufferHandle createDynamicVertexBuffer(uint, ::bgfx::VertexDecl const&, ushort);

    MCNAPI ::bgfx::DynamicVertexBufferHandle
    createDynamicVertexBuffer(::bgfx::Memory const*, ::bgfx::VertexDecl const&, ushort);

    MCNAPI ::bgfx::FrameBufferHandle createFrameBuffer(uchar, ::bgfx::Attachment const*, bool);

    MCNAPI ::bgfx::FrameBufferHandle createFrameBuffer(void*, ushort, ushort, ::bgfx::TextureFormat::Enum);

    MCNAPI ::bgfx::IndexBufferHandle createIndexBuffer(::bgfx::Memory const*, ushort);

    MCNAPI ::bgfx::ProgramHandle createProgram(::bgfx::ShaderHandle, bool);

    MCNAPI ::bgfx::ProgramHandle createProgram(::bgfx::ShaderHandle, ::bgfx::ShaderHandle, bool);

    MCNAPI ::bgfx::ShaderHandle createShader(::bgfx::Memory const*);

    MCNAPI ::bgfx::ShaderBufferHandle createShaderBuffer(uint, uint, ushort);

    MCNAPI ::bgfx::ShaderBufferHandle createShaderBuffer(::bgfx::Memory const*, uint, ushort);

    MCNAPI ::bgfx::TextureHandle
    createTexture(::bgfx::Memory const*, uint, uchar, ::bgfx::TextureInfo*, ::bgfx::BackbufferRatio::Enum, bool);

    MCNAPI ::bgfx::AccelerationStructureHandle
    createTopLevelAccelerationStructure(::bgfx::AccelerationStructureHandle, uint, ::bgfx::TopLevelInstanceDesc*);

    MCNAPI ::bgfx::TransientIndexBuffer* createTransientIndexBuffer(uint);

    MCNAPI ::bgfx::TransientVertexBuffer* createTransientVertexBuffer(uint, ::bgfx::VertexDecl const*);

    MCNAPI ::bgfx::UniformHandle createUniform(char const*, ::bgfx::UniformType::Enum, ushort);

    MCNAPI ::bgfx::VertexBufferHandle createVertexBuffer(::bgfx::Memory const*, ::bgfx::VertexDecl const&, ushort);

    MCNAPI ::bgfx::VertexDeclHandle createVertexDecl(::bgfx::VertexDecl const&);

    MCNAPI void destroyAccelerationStructure(::bgfx::AccelerationStructureHandle);

    MCNAPI void destroyFrameBuffer(::bgfx::FrameBufferHandle);

    MCNAPI void destroyIndexBuffer(::bgfx::IndexBufferHandle);

    MCNAPI void destroyProgram(::bgfx::ProgramHandle);

    MCNAPI void destroyUniform(::bgfx::UniformHandle);

    MCNAPI void destroyVertexBuffer(::bgfx::VertexBufferHandle);

    MCNAPI ::bgfx::VertexDeclHandle findVertexDecl(::bgfx::VertexDecl const&);

    MCNAPI void flushTextureUpdateBatch(::bgfx::CommandBuffer&);

    MCNAPI uint frame(uint);

    MCNAPI ::bgfx::Stats const getPerfStats();

    MCNAPI ushort getPerfViewStats(ushort, ::bgfx::ViewStats*);

    MCNAPI void getUniformInfo(::bgfx::UniformHandle, ::bgfx::UniformInfo&);

    MCNAPI uint readTexture(::bgfx::TextureHandle, void*, uchar);

    MCNAPI ::bgfx::RenderFrame::Enum renderFrame(int);

    MCNAPI void rendererExecCommands(::bgfx::CommandBuffer&);

    MCNAPI void reset(uint, uint, uint);

    MCNAPI void setName(::bgfx::ShaderBufferHandle, ::bx::StringView const&);

    MCNAPI void setName(::bgfx::ShaderHandle, ::bx::StringView const&);

    MCNAPI void setViewName(ushort, char const*);

    MCNAPI void shaderBufferDecRef(::bgfx::ShaderBufferHandle);

    MCNAPI void shaderDecRef(::bgfx::ShaderHandle);

    MCNAPI void swap();

    MCNAPI void textureDecRef(::bgfx::TextureHandle);

    MCNAPI void update(::bgfx::DynamicIndexBufferHandle, uint, ::bgfx::Memory const*);

    MCNAPI void update(::bgfx::DynamicVertexBufferHandle, uint, ::bgfx::Memory const*);

    MCNAPI void update(::bgfx::ShaderBufferHandle, uint, ::bgfx::Memory const*);

    MCNAPI void updateOffset(::bgfx::DynamicIndexBufferHandle, uint, uint, ::bgfx::Memory const*);

    MCNAPI void updateOffset(::bgfx::DynamicVertexBufferHandle, uint, uint, ::bgfx::Memory const*);

    MCNAPI void updateTexture(
        ::bgfx::TextureHandle,
        uchar,
        uchar,
        ushort,
        ushort,
        ushort,
        ushort,
        ushort,
        ushort,
        ushort,
        ::bgfx::Memory const*
    );

    MCNAPI ::bgfx::TextureHandle wrapExternalTexture(::bgfx::RendererType::Enum, void*);

    MCNAPI ~Context();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int renderThread(::bx::Thread*, void*);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    using UniformHashMap = ::bx::HandleHashMapT<1024, uint>;

    using ShaderHashMap = ::bx::HandleHashMapT<8192, uint>;

    using ProgramHashMap = ::bx::HandleHashMapT<4096, uint>;

    using TextureUpdateBatch = ::bgfx::UpdateBatchT<256>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_renderSem;
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_apiSem;
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                          m_encoderEndSem;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_encoderApiLock;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_resourceApiLock;
    ::ll::TypedStorage<8, 464, ::bx::Thread>                             m_thread;
    ::ll::TypedStorage<1, 64, ::bx::Mutex>                               m_perfStatsApiLock;
    ::ll::TypedStorage<8, 208, ::bgfx::Stats>                            m_lastPerfStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_lastNumViewStats;
    ::ll::TypedStorage<8, 79872, ::bgfx::ViewStats[256]>                 m_lastViewStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_lastNumEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                      m_lastEncoderStats;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numEncoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderStats*>                      m_encoderStats;
    ::ll::TypedStorage<8, 8, ::bgfx::Encoder*>                           m_encoder0;
    ::ll::TypedStorage<8, 8, ::bgfx::EncoderImpl*>                       m_encoder;
    ::ll::TypedStorage<8, 40, ::bx::HandleAlloc*>                        m_encoderHandle;
    ::ll::TypedStorage<8, 206574336, ::bgfx::Frame[2]>                   m_frame;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                             m_render;
    ::ll::TypedStorage<8, 8, ::bgfx::Frame*>                             m_submit;
    ::ll::TypedStorage<8, 524280, uint64[65535]>                         m_tempKeys;
    ::ll::TypedStorage<2, 131070, ushort[65535]>                         m_tempValues;
    ::ll::TypedStorage<4, 16384, ::bgfx::IndexBuffer[4096]>              m_indexBuffers;
    ::ll::TypedStorage<4, 32768, ::bgfx::VertexBuffer[4096]>             m_vertexBuffers;
    ::ll::TypedStorage<4, 81920, ::bgfx::DynamicIndexBuffer[4096]>       m_dynamicIndexBuffers;
    ::ll::TypedStorage<4, 114688, ::bgfx::DynamicVertexBuffer[4096]>     m_dynamicVertexBuffers;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeDynamicIndexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeDynamicVertexBufferHandles;
    ::ll::TypedStorage<2, 2, ushort>                                     m_numFreeOcclusionQueryHandles;
    ::ll::TypedStorage<2, 8192, ::bgfx::DynamicIndexBufferHandle[4096]>  m_freeDynamicIndexBufferHandle;
    ::ll::TypedStorage<2, 8192, ::bgfx::DynamicVertexBufferHandle[4096]> m_freeDynamicVertexBufferHandle;
    ::ll::TypedStorage<2, 512, ::bgfx::OcclusionQueryHandle[256]>        m_freeOcclusionQueryHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                 m_dynIndexBufferAllocator;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_dynamicIndexBufferHandle;
    ::ll::TypedStorage<8, 56, ::bgfx::NonLocalAllocator>                 m_dynVertexBufferAllocator;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_dynamicVertexBufferHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_indexBufferHandle;
    ::ll::TypedStorage<2, 260, ::bx::HandleAllocT<64>>                   m_vertexDeclHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_vertexBufferHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>               m_shaderHandle;
    ::ll::TypedStorage<2, 8196, ::bx::HandleAllocT<2048>>                m_programHandle;
    ::ll::TypedStorage<8, 16424, ::bgfx::GuardedHandleAllocPagedT<4096, 4096, ushort, ::bgfx::AllocationContext>>
                                                                    m_textureHandle;
    ::ll::TypedStorage<2, 16388, ::bx::HandleAllocT<4096>>          m_shaderBufferHandle;
    ::ll::TypedStorage<2, 516, ::bx::HandleAllocT<128>>             m_frameBufferHandle;
    ::ll::TypedStorage<2, 2052, ::bx::HandleAllocT<512>>            m_uniformHandle;
    ::ll::TypedStorage<2, 1028, ::bx::HandleAllocT<256>>            m_occlusionQueryHandle;
    ::ll::TypedStorage<2, 131076, ::bx::HandleAllocT<32768>>        m_accelerationStructureBufferHandle;
    ::ll::TypedStorage<4, 6152, ::bx::HandleHashMapT<1024, uint>>   m_uniformHashMap;
    ::ll::TypedStorage<8, 12288, ::bgfx::Context::UniformRef[512]>  m_uniformRef;
    ::ll::TypedStorage<4, 49160, ::bx::HandleHashMapT<8192, uint>>  m_shaderHashMap;
    ::ll::TypedStorage<8, 131072, ::bgfx::Context::ShaderRef[4096]> m_shaderRef;
    ::ll::TypedStorage<4, 24584, ::bx::HandleHashMapT<4096, uint>>  m_programHashMap;
    ::ll::TypedStorage<2, 12288, ::bgfx::Context::ProgramRef[2048]> m_programRef;
    ::ll::TypedStorage<8, 163872, ::bgfx::GuardedPagedHeapBackedArray<::bgfx::Context::TextureRef, 4096>> m_textureRef;
    ::ll::TypedStorage<8, 163840, ::bgfx::Context::ShaderBufferRef[4096]> m_shaderBufferRef;
    ::ll::TypedStorage<8, 3072, ::bgfx::Context::FrameBufferRef[128]>     m_frameBufferRef;
    ::ll::TypedStorage<4, 17288, ::bgfx::VertexDeclRef>                   m_declRef;
    ::ll::TypedStorage<2, 512, ushort[256]>                               m_viewRemap;
    ::ll::TypedStorage<4, 1056, uint[256]>                                m_seq;
    ::ll::TypedStorage<8, 131072, ::bgfx::View[256]>                      m_view;
    ::ll::TypedStorage<4, 256, float[16][4]>                              m_clearColor;
    ::ll::TypedStorage<1, 1, uchar>                                       m_colorPaletteDirty;
    ::ll::TypedStorage<8, 64, ::bgfx::Init>                               m_init;
    ::ll::TypedStorage<8, 8, int64>                                       m_frameTimeLast;
    ::ll::TypedStorage<4, 4, uint>                                        m_debug;
    ::ll::TypedStorage<8, 8, int64>                                       m_rtMemoryUsed;
    ::ll::TypedStorage<8, 8, int64>                                       m_textureMemoryUsed;
    ::ll::TypedStorage<8, 8, int64>                                       m_shaderBufferMemoryUsed;
    ::ll::TypedStorage<8, 112, ::bgfx::TextVideoMemBlitter>               m_textVideoMemBlitter;
    ::ll::TypedStorage<8, 112, ::bgfx::ClearQuad>                         m_clearQuad;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderCtx;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderMain;
    ::ll::TypedStorage<8, 8, ::bgfx::RendererContextI*>                   m_renderNoop;
    ::ll::TypedStorage<4, 4, ::bgfx::InitState>                           m_initState;
    ::ll::TypedStorage<1, 1, bool>                                        m_rendererInitialized;
    ::ll::TypedStorage<1, 1, bool>                                        m_skipFlip;
    ::ll::TypedStorage<1, 1, bool>                                        m_suspended;
    ::ll::TypedStorage<1, 1, bool>                                        m_exit;
    ::ll::TypedStorage<1, 1, bool>                                        m_flipAfterRender;
    ::ll::TypedStorage<1, 1, bool>                                        m_singleThreaded;
    ::ll::TypedStorage<1, 1, bool>                                        m_initSyncOptional;
    ::ll::TypedStorage<1, 13, bool>                                       m_texturesGuarded;
    ::ll::TypedStorage<4, 2112, ::bgfx::UpdateBatchT<256>>                m_textureUpdateBatch;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Context();

    MCAPI void _initBegin();

    MCAPI bool _initFinalize();

    MCAPI void _initPending(bool async);

    MCAPI void _shutdownBegin();

    MCAPI void _shutdownFinalize();

    MCAPI uint64 allocDynamicIndexBuffer(uint _size, ushort _flags);

    MCAPI ::bgfx::Context::DynamicVertexAllocation
    allocDynamicVertexBuffer(uint _size, ushort _flags, ushort _aligment);

    MCAPI ::bgfx::Encoder* begin();

    MCAPI ::bgfx::InitResult continueInit(bool async);

    MCAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::DynamicVertexBufferHandle             _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCAPI ::bgfx::AccelerationStructureHandle createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle           _handle,
        ::bgfx::VertexBufferHandle                    _vertexBufferHandle,
        ::bgfx::VertexDeclHandle                      _vertexDeclHandle,
        uint                                          _vertexCount,
        uint                                          _vertexOffset,
        ::bgfx::IndexBufferHandle                     _indexBufferHandle,
        uint                                          _indexCount,
        uint                                          _indexOffset,
        ::bgfx::AccelerationStructureBuildFlags::Enum _flags
    );

    MCAPI ::bgfx::DynamicIndexBufferHandle createDynamicIndexBuffer(::bgfx::Memory const* _mem, ushort _flags);

    MCAPI ::bgfx::DynamicIndexBufferHandle createDynamicIndexBuffer(uint _num, ushort _flags);

    MCAPI ::bgfx::DynamicVertexBufferHandle
    createDynamicVertexBuffer(::bgfx::Memory const* _mem, ::bgfx::VertexDecl const& _decl, ushort _flags);

    MCAPI ::bgfx::DynamicVertexBufferHandle
    createDynamicVertexBuffer(uint _num, ::bgfx::VertexDecl const& _decl, ushort _flags);

    MCAPI ::bgfx::FrameBufferHandle
    createFrameBuffer(uchar _num, ::bgfx::Attachment const* _attachment, bool _destroyTextures);

    MCAPI ::bgfx::FrameBufferHandle
    createFrameBuffer(void* _nwh, ushort _width, ushort _height, ::bgfx::TextureFormat::Enum _depthFormat);

    MCAPI ::bgfx::IndexBufferHandle createIndexBuffer(::bgfx::Memory const* _mem, ushort _flags);

    MCAPI ::bgfx::ProgramHandle createProgram(::bgfx::ShaderHandle _vsh, bool _destroyShader);

    MCAPI ::bgfx::ProgramHandle
    createProgram(::bgfx::ShaderHandle _vsh, ::bgfx::ShaderHandle _fsh, bool _destroyShaders);

    MCAPI ::bgfx::ShaderHandle createShader(::bgfx::Memory const* _mem);

    MCAPI ::bgfx::ShaderBufferHandle createShaderBuffer(::bgfx::Memory const* _mem, uint _stride, ushort _flags);

    MCAPI ::bgfx::ShaderBufferHandle createShaderBuffer(uint _num, uint _stride, ushort _flags);

    MCAPI ::bgfx::TextureHandle createTexture(
        ::bgfx::Memory const*         _mem,
        uint                          _flags,
        uchar                         _skip,
        ::bgfx::TextureInfo*          _info,
        ::bgfx::BackbufferRatio::Enum _ratio,
        bool                          _immutable
    );

    MCAPI ::bgfx::AccelerationStructureHandle createTopLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle _handle,
        uint                                numInstances,
        ::bgfx::TopLevelInstanceDesc*       instanceDescs
    );

    MCAPI ::bgfx::TransientIndexBuffer* createTransientIndexBuffer(uint _size);

    MCAPI ::bgfx::TransientVertexBuffer* createTransientVertexBuffer(uint _size, ::bgfx::VertexDecl const* _decl);

    MCAPI ::bgfx::UniformHandle createUniform(char const* _name, ::bgfx::UniformType::Enum _type, ushort _num);

    MCAPI ::bgfx::VertexBufferHandle
    createVertexBuffer(::bgfx::Memory const* _mem, ::bgfx::VertexDecl const& _decl, ushort _flags);

    MCAPI ::bgfx::VertexDeclHandle createVertexDecl(::bgfx::VertexDecl const& _decl);

    MCAPI void destroyAccelerationStructure(::bgfx::AccelerationStructureHandle _handle);

    MCAPI void destroyFrameBuffer(::bgfx::FrameBufferHandle _handle);

    MCAPI void destroyIndexBuffer(::bgfx::IndexBufferHandle _handle);

    MCAPI void destroyProgram(::bgfx::ProgramHandle _handle);

    MCAPI void destroyUniform(::bgfx::UniformHandle _handle);

    MCAPI void destroyVertexBuffer(::bgfx::VertexBufferHandle _handle);

    MCAPI ::bgfx::VertexDeclHandle findVertexDecl(::bgfx::VertexDecl const& _decl);

    MCAPI void flushTextureUpdateBatch(::bgfx::CommandBuffer& _cmdbuf);

    MCAPI uint frame(uint _flags);

    MCAPI ::bgfx::Stats const getPerfStats();

    MCAPI ushort getPerfViewStats(ushort _numViewStats, ::bgfx::ViewStats* _viewStats);

    MCAPI void getUniformInfo(::bgfx::UniformHandle _handle, ::bgfx::UniformInfo& _info);

    MCAPI uint readTexture(::bgfx::TextureHandle _handle, void* _data, uchar _mip);

    MCAPI ::bgfx::RenderFrame::Enum renderFrame(int _msecs);

    MCAPI void rendererExecCommands(::bgfx::CommandBuffer& _cmdbuf);

    MCAPI void reset(uint _width, uint _height, uint _flags);

    MCAPI void setName(::bgfx::ShaderHandle _handle, ::bx::StringView const& _name);

    MCAPI void setName(::bgfx::ShaderBufferHandle _handle, ::bx::StringView const& _name);

    MCAPI void setViewName(ushort _id, char const* _name);

    MCAPI void shaderBufferDecRef(::bgfx::ShaderBufferHandle _handle);

    MCAPI void shaderDecRef(::bgfx::ShaderHandle _handle);

    MCAPI void swap();

    MCAPI void textureDecRef(::bgfx::TextureHandle _handle);

    MCAPI void update(::bgfx::ShaderBufferHandle _handle, uint _offset, ::bgfx::Memory const* _mem);

    MCAPI void update(::bgfx::DynamicIndexBufferHandle _handle, uint _startIndex, ::bgfx::Memory const* _mem);

    MCAPI void update(::bgfx::DynamicVertexBufferHandle _handle, uint _startVertex, ::bgfx::Memory const* _mem);

    MCAPI void
    updateOffset(::bgfx::DynamicIndexBufferHandle _handle, uint _offset, uint _declStride, ::bgfx::Memory const* _mem);

    MCAPI void
    updateOffset(::bgfx::DynamicVertexBufferHandle _handle, uint _offset, uint _declStride, ::bgfx::Memory const* _mem);

    MCAPI void updateTexture(
        ::bgfx::TextureHandle _handle,
        uchar                 _side,
        uchar                 _mip,
        ushort                _x,
        ushort                _y,
        ushort                _z,
        ushort                _width,
        ushort                _height,
        ushort                _depth,
        ushort                _pitch,
        ::bgfx::Memory const* _mem
    );

    MCAPI ::bgfx::TextureHandle wrapExternalTexture(::bgfx::RendererType::Enum _type, void* _texturePtr);

    MCAPI ~Context();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int renderThread(::bx::Thread*, void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace bgfx

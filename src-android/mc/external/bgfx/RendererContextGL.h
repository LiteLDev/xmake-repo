#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/FrameBufferGL.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/GlContext.h"
#include "mc/external/bgfx/GuardedPagedHeapBackedArray.h"
#include "mc/external/bgfx/IndexBufferGL.h"
#include "mc/external/bgfx/OcclusionQueryGL.h"
#include "mc/external/bgfx/ProfilerEvents.h"
#include "mc/external/bgfx/ProgramGL.h"
#include "mc/external/bgfx/RendererContextI.h"
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/bgfx/SamplerStateCache.h"
#include "mc/external/bgfx/ShaderBufferGL.h"
#include "mc/external/bgfx/ShaderGL.h"
#include "mc/external/bgfx/TextVideoMem.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/TimerQueryGL.h"
#include "mc/external/bgfx/UniformRegistry.h"
#include "mc/external/bgfx/UniformType.h"
#include "mc/external/bgfx/VertexBufferGL.h"
#include "mc/external/bgfx/VertexDecl.h"
#include "mc/external/bgfx/Workaround.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { class UniformBuffer; }
namespace bgfx { struct Attachment; }
namespace bgfx { struct BlitState; }
namespace bgfx { struct Clear; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
namespace bgfx { struct Init; }
namespace bgfx { struct Memory; }
namespace bgfx { struct OcclusionQueryHandle; }
namespace bgfx { struct ProgramHandle; }
namespace bgfx { struct Rect; }
namespace bgfx { struct ShaderBufferHandle; }
namespace bgfx { struct ShaderHandle; }
namespace bgfx { struct TextVideoMemBlitter; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDeclHandle; }
namespace bgfx::gl { struct TextureGL; }
// clang-format on

namespace bgfx::gl {

struct RendererContextGL : public ::bgfx::RendererContextI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                                  m_renderdocdll;
    ::ll::TypedStorage<2, 2, ushort>                                 m_numWindows;
    ::ll::TypedStorage<2, 256, ::bgfx::FrameBufferHandle[128]>       m_windows;
    ::ll::TypedStorage<4, 196608, ::bgfx::gl::IndexBufferGL[16384]>  m_indexBuffers;
    ::ll::TypedStorage<4, 262144, ::bgfx::gl::VertexBufferGL[16384]> m_vertexBuffers;
    ::ll::TypedStorage<4, 49152, ::bgfx::gl::ShaderBufferGL[4096]>   m_shaderBuffers;
    ::ll::TypedStorage<4, 49152, ::bgfx::gl::ShaderGL[4096]>         m_shaders;
    ::ll::TypedStorage<8, 1097728, ::bgfx::gl::ProgramGL[2048]>      m_program;
    ::ll::UntypedStorage<1, 202016>                                  m_textures;
    ::ll::UntypedStorage<4, 0>                                       m_vertexDecls;
    ::ll::TypedStorage<8, 10240, ::bgfx::gl::FrameBufferGL[128]>     m_frameBuffers;
    ::ll::TypedStorage<4, 7176, ::bgfx::UniformRegistry>             m_uniformReg;
    ::ll::TypedStorage<8, 4096, void* [512]>                         m_uniforms;
    ::ll::TypedStorage<8, 47184, ::bgfx::gl::TimerQueryGL>           m_gpuTimer;
    ::ll::TypedStorage<1, 1, ::bgfx::ProfilerEvents>                 m_profilerEvents;
    ::ll::TypedStorage<4, 2064, ::bgfx::gl::OcclusionQueryGL>        m_occlusionQuery;
    ::ll::TypedStorage<8, 32, ::bgfx::gl::SamplerStateCache>         m_samplerStateCache;
    ::ll::TypedStorage<8, 24, ::bgfx::TextVideoMem>                  m_textVideoMem;
    ::ll::TypedStorage<1, 1, bool>                                   m_rtMsaa;
    ::ll::TypedStorage<2, 2, ::bgfx::FrameBufferHandle>              m_fbh;
    ::ll::TypedStorage<2, 2, ushort>                                 m_fbDiscard;
    ::ll::UntypedStorage<4, 16>                                      m_resolution;
    ::ll::TypedStorage<8, 8, void*>                                  m_capture;
    ::ll::TypedStorage<4, 4, uint>                                   m_captureSize;
    ::ll::TypedStorage<4, 4, float>                                  m_maxAnisotropy;
    ::ll::TypedStorage<4, 4, float>                                  m_maxAnisotropyDefault;
    ::ll::TypedStorage<4, 4, int>                                    m_maxMsaa;
    ::ll::TypedStorage<4, 4, uint>                                   m_vao;
    ::ll::TypedStorage<1, 1, bool>                                   m_blitSupported;
    ::ll::TypedStorage<1, 1, bool>                                   m_readBackSupported;
    ::ll::TypedStorage<1, 1, bool>                                   m_vaoSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_samplerObjectSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_shadowSamplersSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_srgbWriteControlSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_borderColorSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_programBinarySupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_textureSwizzleSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_depthTextureSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_timerQuerySupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_occlusionQuerySupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_atocSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_conservativeRasterSupport;
    ::ll::TypedStorage<1, 1, bool>                                   m_flip;
    ::ll::TypedStorage<8, 8, ulong>                                  m_hash;
    ::ll::TypedStorage<4, 4, uint>                                   m_readPixelsFmt;
    ::ll::TypedStorage<4, 4, uint>                                   m_backBufferFbo;
    ::ll::TypedStorage<4, 4, uint>                                   m_msaaBackBufferFbo;
    ::ll::TypedStorage<4, 8, uint[2]>                                m_msaaBackBufferRbos;
    ::ll::TypedStorage<8, 64, ::bgfx::gl::GlContext>                 m_glctx;
    ::ll::TypedStorage<1, 1, bool>                                   m_needPresent;
    ::ll::TypedStorage<8, 8, char const*>                            m_vendor;
    ::ll::TypedStorage<8, 8, char const*>                            m_renderer;
    ::ll::TypedStorage<8, 8, char const*>                            m_version;
    ::ll::TypedStorage<8, 8, char const*>                            m_glslVersion;
    ::ll::TypedStorage<4, 4, int>                                    m_glMajor;
    ::ll::TypedStorage<4, 4, int>                                    m_glMinor;
    ::ll::TypedStorage<1, 2, ::bgfx::gl::Workaround>                 m_workaround;
    ::ll::TypedStorage<4, 4, uint>                                   m_currentFbo;
    ::ll::TypedStorage<8, 8, long>                                   m_prevCPUTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RendererContextGL();

    virtual ::bgfx::RendererType::Enum getRendererType() const;

    virtual ulong getRendererVersion() const;

    virtual ulong getShaderVersion() const;

    virtual char const* getRendererName() const;

    virtual bool isDeviceRemoved();

    virtual void flip();

    virtual void advanceToNextFrame();

    virtual void suspend();

    virtual void resume();

    virtual void createIndexBuffer(::bgfx::IndexBufferHandle, ::bgfx::Memory const*, ushort);

    virtual void destroyIndexBuffer(::bgfx::IndexBufferHandle);

    virtual void createVertexDecl(::bgfx::VertexDeclHandle, ::bgfx::VertexDecl const&);

    virtual void destroyVertexDecl(::bgfx::VertexDeclHandle);

    virtual void createVertexBuffer(::bgfx::VertexBufferHandle, ::bgfx::Memory const*, ::bgfx::VertexDeclHandle, ushort);

    virtual void destroyVertexBuffer(::bgfx::VertexBufferHandle);

    virtual void createDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, ushort);

    virtual void updateDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, uint, ::bgfx::Memory const*);

    virtual void destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle);

    virtual void createDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, ushort);

    virtual void updateDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, uint, ::bgfx::Memory const*);

    virtual void destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle);

    virtual void createShader(::bgfx::ShaderHandle, ::bgfx::Memory const*);

    virtual void destroyShader(::bgfx::ShaderHandle);

    virtual void createProgram(::bgfx::ProgramHandle, ::bgfx::ShaderHandle, ::bgfx::ShaderHandle);

    virtual void destroyProgram(::bgfx::ProgramHandle);

    virtual void* createTexture(::bgfx::TextureHandle, ::bgfx::Memory const*, uint, uchar, ::bgfx::Memory const**);

    virtual void updateTextureBegin(::bgfx::TextureHandle, uchar, uchar);

    virtual void updateTexture(::bgfx::TextureHandle, uchar, uchar, ::bgfx::Rect const&, ushort, ushort, ushort, ::bgfx::Memory const*);

    virtual void updateTextureEnd();

    virtual void readTexture(::bgfx::TextureHandle, void*, uchar);

    virtual void resizeTexture(::bgfx::TextureHandle, ushort, ushort, uchar, ushort);

    virtual void overrideInternal(::bgfx::TextureHandle, ulong, uint);

    virtual ulong getInternal(::bgfx::TextureHandle);

    virtual void destroyTexture(::bgfx::TextureHandle);

    virtual void wrapExternalTexture(::bgfx::TextureHandle, ::bgfx::RendererType::Enum, void*, void*);

    virtual void createShaderBuffer(::bgfx::ShaderBufferHandle, uint, uint, ushort);

    virtual void updateShaderBuffer(::bgfx::ShaderBufferHandle, uint, ::bgfx::Memory const*);

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle);

    virtual void createFrameBuffer(::bgfx::FrameBufferHandle, void*, uint, uint, ::bgfx::TextureFormat::Enum);

    virtual void createFrameBuffer(::bgfx::FrameBufferHandle, uchar, ::bgfx::Attachment const*);

    virtual void destroyFrameBuffer(::bgfx::FrameBufferHandle);

    virtual void createUniform(::bgfx::UniformHandle, ::bgfx::UniformType::Enum, ushort, char const*);

    virtual void destroyUniform(::bgfx::UniformHandle);

    virtual void requestScreenShot(::bgfx::FrameBufferHandle, char const*);

    virtual void updateViewName(ushort, char const*);

    virtual void updateUniform(void*, ushort, void const*, uint);

    virtual void setMarker(void*, char const*, uint);

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle);

    virtual void setName(::bgfx::Handle, char const*);

    virtual void submit(::bgfx::Frame*, ::bgfx::ClearQuad&, ::bgfx::TextVideoMemBlitter&);

    virtual void blitSetup(::bgfx::TextVideoMemBlitter&);

    virtual void blitRender(::bgfx::TextVideoMemBlitter&, uint);

    virtual void waitForFlipQueue();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void commit(::bgfx::UniformBuffer&);

    MCNAPI bool init(::bgfx::Init const&);

    MCNAPI void setRenderContextSize(uint, uint, uint);

    MCNAPI void setSamplerState(uint, uint, uint, float const*);

    MCNAPI void submitBlit(::bgfx::BlitState&, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::bgfx::RendererType::Enum $getRendererType() const;

    MCNAPI ulong $getRendererVersion() const;

    MCNAPI ulong $getShaderVersion() const;

    MCNAPI char const* $getRendererName() const;

    MCNAPI bool $isDeviceRemoved();

    MCNAPI void $flip();

    MCNAPI void $advanceToNextFrame();

    MCNAPI void $suspend();

    MCNAPI void $resume();

    MCNAPI void $createIndexBuffer(::bgfx::IndexBufferHandle, ::bgfx::Memory const*, ushort);

    MCNAPI void $destroyIndexBuffer(::bgfx::IndexBufferHandle);

    MCNAPI void $createVertexDecl(::bgfx::VertexDeclHandle, ::bgfx::VertexDecl const&);

    MCNAPI void $destroyVertexDecl(::bgfx::VertexDeclHandle);

    MCNAPI void
    $createVertexBuffer(::bgfx::VertexBufferHandle, ::bgfx::Memory const*, ::bgfx::VertexDeclHandle, ushort);

    MCNAPI void $destroyVertexBuffer(::bgfx::VertexBufferHandle);

    MCNAPI void $createDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, ushort);

    MCNAPI void $updateDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, uint, ::bgfx::Memory const*);

    MCNAPI void $destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle);

    MCNAPI void $createDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, ushort);

    MCNAPI void $updateDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, uint, ::bgfx::Memory const*);

    MCNAPI void $destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle);

    MCNAPI void $createShader(::bgfx::ShaderHandle, ::bgfx::Memory const*);

    MCNAPI void $destroyShader(::bgfx::ShaderHandle);

    MCNAPI void $createProgram(::bgfx::ProgramHandle, ::bgfx::ShaderHandle, ::bgfx::ShaderHandle);

    MCNAPI void $destroyProgram(::bgfx::ProgramHandle);

    MCNAPI void* $createTexture(::bgfx::TextureHandle, ::bgfx::Memory const*, uint, uchar, ::bgfx::Memory const**);

    MCNAPI void $updateTextureBegin(::bgfx::TextureHandle, uchar, uchar);

    MCNAPI void $updateTexture(
        ::bgfx::TextureHandle,
        uchar,
        uchar,
        ::bgfx::Rect const&,
        ushort,
        ushort,
        ushort,
        ::bgfx::Memory const*
    );

    MCNAPI void $updateTextureEnd();

    MCNAPI void $readTexture(::bgfx::TextureHandle, void*, uchar);

    MCNAPI void $resizeTexture(::bgfx::TextureHandle, ushort, ushort, uchar, ushort);

    MCNAPI void $overrideInternal(::bgfx::TextureHandle, ulong, uint);

    MCNAPI ulong $getInternal(::bgfx::TextureHandle);

    MCNAPI void $destroyTexture(::bgfx::TextureHandle);

    MCNAPI void $wrapExternalTexture(::bgfx::TextureHandle, ::bgfx::RendererType::Enum, void*, void*);

    MCNAPI void $createShaderBuffer(::bgfx::ShaderBufferHandle, uint, uint, ushort);

    MCNAPI void $updateShaderBuffer(::bgfx::ShaderBufferHandle, uint, ::bgfx::Memory const*);

    MCNAPI void $destroyShaderBuffer(::bgfx::ShaderBufferHandle);

    MCNAPI void $createFrameBuffer(::bgfx::FrameBufferHandle, void*, uint, uint, ::bgfx::TextureFormat::Enum);

    MCNAPI void $createFrameBuffer(::bgfx::FrameBufferHandle, uchar, ::bgfx::Attachment const*);

    MCNAPI void $destroyFrameBuffer(::bgfx::FrameBufferHandle);

    MCNAPI void $createUniform(::bgfx::UniformHandle, ::bgfx::UniformType::Enum, ushort, char const*);

    MCNAPI void $destroyUniform(::bgfx::UniformHandle);

    MCNAPI void $requestScreenShot(::bgfx::FrameBufferHandle, char const*);

    MCNAPI void $updateViewName(ushort, char const*);

    MCNAPI void $updateUniform(void*, ushort, void const*, uint);

    MCNAPI void $setMarker(void*, char const*, uint);

    MCNAPI void $invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle);

    MCNAPI void $setName(::bgfx::Handle, char const*);

    MCNAPI void $submit(::bgfx::Frame*, ::bgfx::ClearQuad&, ::bgfx::TextVideoMemBlitter&);

    MCNAPI void $blitSetup(::bgfx::TextVideoMemBlitter&);

    MCNAPI void $blitRender(::bgfx::TextVideoMemBlitter&, uint);

    MCNAPI void $waitForFlipQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bgfx::gl

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RendererContextI.h"
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/UniformType.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Attachment; }
namespace bgfx { struct ClearQuad; }
namespace bgfx { struct Frame; }
namespace bgfx { struct FrameBufferHandle; }
namespace bgfx { struct Handle; }
namespace bgfx { struct IndexBufferHandle; }
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
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
// clang-format on

namespace bgfx::noop {

struct RendererContextNOOP : public ::bgfx::RendererContextI {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RendererContextNOOP();

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

} // namespace bgfx::noop
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

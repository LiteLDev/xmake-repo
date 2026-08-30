#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureBuildFlags.h"
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/UniformType.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct AccelerationStructureHandle; }
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
namespace bgfx { struct TopLevelInstanceDesc; }
namespace bgfx { struct UniformHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bgfx { struct VertexDecl; }
namespace bgfx { struct VertexDeclHandle; }
namespace bx { template<auto T0> class StringT; }
// clang-format on

namespace bgfx {

struct RendererContextI {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RendererContextI() = 0;

    virtual ::bgfx::RendererType::Enum getRendererType() const = 0;

    virtual ulong getRendererVersion() const = 0;

    virtual ulong getShaderVersion() const = 0;

    virtual char const* getRendererName() const = 0;

    virtual bool isDeviceRemoved() = 0;

    virtual void flip() = 0;

    virtual void advanceToNextFrame() = 0;

    virtual void suspend() = 0;

    virtual void resume() = 0;

    virtual void createIndexBuffer(::bgfx::IndexBufferHandle, ::bgfx::Memory const*, ushort) = 0;

    virtual void destroyIndexBuffer(::bgfx::IndexBufferHandle) = 0;

    virtual void createVertexDecl(::bgfx::VertexDeclHandle, ::bgfx::VertexDecl const&) = 0;

    virtual void destroyVertexDecl(::bgfx::VertexDeclHandle) = 0;

    virtual void createVertexBuffer(::bgfx::VertexBufferHandle, ::bgfx::Memory const*, ::bgfx::VertexDeclHandle, ushort) = 0;

    virtual void destroyVertexBuffer(::bgfx::VertexBufferHandle) = 0;

    virtual void createDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, ushort) = 0;

    virtual void updateDynamicIndexBuffer(::bgfx::IndexBufferHandle, uint, uint, ::bgfx::Memory const*) = 0;

    virtual void destroyDynamicIndexBuffer(::bgfx::IndexBufferHandle) = 0;

    virtual void createDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, ushort) = 0;

    virtual void updateDynamicVertexBuffer(::bgfx::VertexBufferHandle, uint, uint, ::bgfx::Memory const*) = 0;

    virtual void destroyDynamicVertexBuffer(::bgfx::VertexBufferHandle) = 0;

    virtual void createShader(::bgfx::ShaderHandle, ::bgfx::Memory const*) = 0;

    virtual void destroyShader(::bgfx::ShaderHandle) = 0;

    virtual void createProgram(::bgfx::ProgramHandle, ::bgfx::ShaderHandle, ::bgfx::ShaderHandle) = 0;

    virtual void destroyProgram(::bgfx::ProgramHandle) = 0;

    virtual void* createTexture(::bgfx::TextureHandle, ::bgfx::Memory const*, uint, uchar, ::bgfx::Memory const**) = 0;

    virtual void updateTextureBegin(::bgfx::TextureHandle, uchar, uchar) = 0;

    virtual void updateTexture(::bgfx::TextureHandle, uchar, uchar, ::bgfx::Rect const&, ushort, ushort, ushort, ::bgfx::Memory const*) = 0;

    virtual void updateTextureEnd() = 0;

    virtual void readTexture(::bgfx::TextureHandle, void*, uchar) = 0;

    virtual void resizeTexture(::bgfx::TextureHandle, ushort, ushort, uchar, ushort) = 0;

    virtual void overrideInternal(::bgfx::TextureHandle, ulong, uint) = 0;

    virtual ulong getInternal(::bgfx::TextureHandle) = 0;

    virtual void destroyTexture(::bgfx::TextureHandle) = 0;

    virtual void wrapExternalTexture(::bgfx::TextureHandle, ::bgfx::RendererType::Enum, void*, void*);

    virtual void createShaderBuffer(::bgfx::ShaderBufferHandle, uint, uint, ushort) = 0;

    virtual void updateShaderBuffer(::bgfx::ShaderBufferHandle, uint, ::bgfx::Memory const*) = 0;

    virtual void destroyShaderBuffer(::bgfx::ShaderBufferHandle);

    virtual void createFrameBuffer(::bgfx::FrameBufferHandle, void*, uint, uint, ::bgfx::TextureFormat::Enum) = 0;

    virtual void createFrameBuffer(::bgfx::FrameBufferHandle, uchar, ::bgfx::Attachment const*) = 0;

    virtual void destroyFrameBuffer(::bgfx::FrameBufferHandle) = 0;

    virtual void createUniform(::bgfx::UniformHandle, ::bgfx::UniformType::Enum, ushort, char const*) = 0;

    virtual void destroyUniform(::bgfx::UniformHandle) = 0;

    virtual void requestScreenShot(::bgfx::FrameBufferHandle, char const*) = 0;

    virtual void updateViewName(ushort, char const*) = 0;

    virtual void updateUniform(void*, ushort, void const*, uint) = 0;

    virtual void setMarker(void*, char const*, uint) = 0;

    virtual void invalidateOcclusionQuery(::bgfx::OcclusionQueryHandle) = 0;

    virtual void setName(::bgfx::Handle, char const*) = 0;

    virtual void submit(::bgfx::Frame*, ::bgfx::ClearQuad&, ::bgfx::TextVideoMemBlitter&) = 0;

    virtual void blitSetup(::bgfx::TextVideoMemBlitter&) = 0;

    virtual void blitRender(::bgfx::TextVideoMemBlitter&, uint) = 0;

    virtual void waitForFlipQueue() = 0;

    virtual void schedulePreBlasSkinningDispatch(::bgfx::VertexBufferHandle, uint, ::bgfx::VertexBufferHandle, uint, ::bgfx::VertexDeclHandle, uint, ::bgfx::Memory const*, ::bx::StringT<&bgfx::g_allocator> const&);

    virtual void createBottomLevelAccelerationStructure(::bgfx::AccelerationStructureHandle, ::bgfx::VertexBufferHandle, ::bgfx::VertexDeclHandle, uint, uint, ::bgfx::IndexBufferHandle, uint, uint, ushort, ::bgfx::AccelerationStructureBuildFlags::Enum);

    virtual void createTopLevelAccelerationStructure(::bgfx::AccelerationStructureHandle, uint, ::bgfx::TopLevelInstanceDesc*);

    virtual void destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $wrapExternalTexture(::bgfx::TextureHandle, ::bgfx::RendererType::Enum, void*, void*);

    MCNAPI void $schedulePreBlasSkinningDispatch(
        ::bgfx::VertexBufferHandle,
        uint,
        ::bgfx::VertexBufferHandle,
        uint,
        ::bgfx::VertexDeclHandle,
        uint,
        ::bgfx::Memory const*,
        ::bx::StringT<&bgfx::g_allocator> const&
    );

    MCNAPI void $createBottomLevelAccelerationStructure(
        ::bgfx::AccelerationStructureHandle,
        ::bgfx::VertexBufferHandle,
        ::bgfx::VertexDeclHandle,
        uint,
        uint,
        ::bgfx::IndexBufferHandle,
        uint,
        uint,
        ushort,
        ::bgfx::AccelerationStructureBuildFlags::Enum
    );

    MCNAPI void
    $createTopLevelAccelerationStructure(::bgfx::AccelerationStructureHandle, uint, ::bgfx::TopLevelInstanceDesc*);

    MCNAPI void $destroyAccelerationStructureBuffer(::bgfx::AccelerationStructureHandle);
    // NOLINTEND
};

} // namespace bgfx

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
class ShaderColor;
namespace mce { class Camera; }
namespace mce { class GlobalConstantBufferManager; }
namespace mce { class GlobalConstantBuffers; }
namespace mce { class ImmediateBuffer; }
namespace mce { class QuadIndexBuffer; }
namespace mce { class RenderContext; }
namespace mce { struct BufferResourceService; }
// clang-format on

namespace mce {

class MeshContext {
public:
    // MeshContext inner types define
    using SubClientId = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RenderContext&>                                 renderContext;
    ::ll::TypedStorage<8, 8, ::mce::Camera&>                                        camera;
    ::ll::TypedStorage<8, 8, ::mce::GlobalConstantBuffers&>                         constantBuffers;
    ::ll::TypedStorage<8, 8, ::mce::GlobalConstantBufferManager&>                   constantBufferManager;
    ::ll::TypedStorage<8, 8, ::ShaderColor&>                                        currentShaderColor;
    ::ll::TypedStorage<8, 8, ::ShaderColor&>                                        currentShaderDarkColor;
    ::ll::TypedStorage<8, 8, ::mce::BufferResourceService&>                         bufferResourceService;
    ::ll::TypedStorage<8, 8, ::mce::QuadIndexBuffer&>                               currentQuadIndexBuffer;
    ::ll::UntypedStorage<8, 24>                                                     immediateBuffer;
    ::ll::TypedStorage<4, 20, std::optional<glm::vec<4, float, (glm::qualifier)0>>> normalizedClipRegion;
    ::ll::TypedStorage<1, 1, uchar>                                                 subClientId;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingUI;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingEnvironmentalText;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingPersistentUIElement;
    ::ll::TypedStorage<1, 1, bool>                                                  isDoingFrameCapture;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingEditorSelectionHighlight;
    ::ll::TypedStorage<1, 1, bool>                                                  isDrawingMovingBlock;
    ::ll::TypedStorage<1, 1, bool>                                                  isDitheringEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  isAlphaMaskedTintEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshContext(
        ::mce::RenderContext&,
        uchar const&,
        ::mce::Camera&,
        ::mce::GlobalConstantBuffers&,
        ::mce::GlobalConstantBufferManager&,
        ::ShaderColor&,
        ::ShaderColor&,
        ::mce::BufferResourceService&,
        ::mce::QuadIndexBuffer&,
        ::mce::ClientResourcePointer<mce::ImmediateBuffer>&
    );

    MCNAPI ~MeshContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::RenderContext&,
        uchar const&,
        ::mce::Camera&,
        ::mce::GlobalConstantBuffers&,
        ::mce::GlobalConstantBufferManager&,
        ::ShaderColor&,
        ::ShaderColor&,
        ::mce::BufferResourceService&,
        ::mce::QuadIndexBuffer&,
        ::mce::ClientResourcePointer<mce::ImmediateBuffer>&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce

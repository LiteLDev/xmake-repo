#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/renderer/RenderTargetState.h"
#include "mc/deps/renderer/VertexFormatCacheKey.h"
#include "mc/deps/renderer/hal/base/RenderContextStateBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class FrameBufferObject; }
namespace mce { class RenderDevice; }
namespace mce { struct FrameDiscardContext; }
namespace mce { struct ViewportInfo; }
// clang-format on

namespace mce {

class RenderContextBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::mce::RenderContextStateBase>           currentState;
    ::ll::TypedStorage<4, 40, ::mce::VertexFormatCacheKey>              lastVertexFormat;
    ::ll::UntypedStorage<8, 24>                                         lastShaderPrograms;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::FrameDiscardContext>> frameDiscardContext;
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferObject*>                 mFrameBufferObject;
    ::ll::TypedStorage<8, 8, ::mce::RenderDevice*>                      mRenderDevice;
    ::ll::UntypedStorage<4, 56>                                         mRenderTargetState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderContextBase();

    MCNAPI bool captureScreenAsRGB(std::vector<uchar>&, int&, int&);

    MCNAPI void clearContextState();

    MCNAPI ::mce::RenderDevice* getDevice() const;

    MCNAPI void unbindAllTexturesAndShaders();

    MCNAPI ~RenderContextBase();
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

} // namespace mce

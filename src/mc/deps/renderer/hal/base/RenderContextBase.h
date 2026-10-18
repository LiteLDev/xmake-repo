#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderContextBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkacad00;
    ::ll::UntypedStorage<4, 40>  mUnk80a540;
    ::ll::UntypedStorage<8, 24>  mUnkd1eb37;
    ::ll::UntypedStorage<8, 8>   mUnkb88807;
    ::ll::UntypedStorage<8, 8>   mUnk5dd278;
    ::ll::UntypedStorage<8, 8>   mUnkfaff0e;
    ::ll::UntypedStorage<4, 52>  mUnka47a14;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextBase& operator=(RenderContextBase const&);
    RenderContextBase(RenderContextBase const&);
    RenderContextBase();
};
#else // @header-generator platform
class RenderContextBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

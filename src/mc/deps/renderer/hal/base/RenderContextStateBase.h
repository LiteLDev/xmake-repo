#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/interface/BlendStateDescription.h"
#include "mc/deps/renderer/ViewportInfo.h"
#include "mc/deps/renderer/hal/interface/DepthStencilStateDescription.h"
#include "mc/deps/renderer/hal/interface/RasterizerStateDescription.h"
#include "mc/deps/renderer/hal/interface/SamplerStateDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderTargetState; }
namespace mce { class TextureBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContextStateBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8>                                        blendStateDescription;
    ::ll::TypedStorage<4, 24, ::mce::DepthStencilStateDescription>    depthStencilStateDescription;
    ::ll::UntypedStorage<4, 108>                                      rasterizerStateDescription;
    ::ll::UntypedStorage<4, 0>                                        samplerStateDescription;
    ::ll::TypedStorage<1, 8, bool[8]>                                 textureUnitActive;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, int, (glm::qualifier)0>>  currentScissor;
    ::ll::TypedStorage<4, 24, ::mce::ViewportInfo>                    currentViewport;
    ::ll::TypedStorage<1, 8, bool[8]>                                 initializedSamplerState;
    ::ll::TypedStorage<8, 64, std::array<const mce::TextureBase*, 8>> lastBoundTexture;
    ::ll::TypedStorage<8, 8, ::mce::RenderTargetState*>               renderTargetState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderContextStateBase();

    MCNAPI void removeIfBound(::mce::TextureBase const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderContextStateBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 7>  mUnkbed878;
    ::ll::UntypedStorage<4, 24> mUnkc907c4;
    ::ll::UntypedStorage<4, 12> mUnk9b7607;
    ::ll::UntypedStorage<4, 96> mUnk2a2eee;
    ::ll::UntypedStorage<1, 8>  mUnkcb572b;
    ::ll::UntypedStorage<4, 16> mUnk60ab63;
    ::ll::UntypedStorage<4, 24> mUnkabd0f0;
    ::ll::UntypedStorage<1, 8>  mUnk4276f6;
    ::ll::UntypedStorage<8, 64> mUnk547177;
    ::ll::UntypedStorage<8, 8>  mUnkfbdadd;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextStateBase& operator=(RenderContextStateBase const&);
    RenderContextStateBase(RenderContextStateBase const&);
    RenderContextStateBase();
};
#else // @header-generator platform
class RenderContextStateBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

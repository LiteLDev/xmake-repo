#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace mce {

class RenderTargetState {
public:
    // RenderTargetState inner types declare
    // clang-format off
    struct StencilOverride;
    // clang-format on

    // RenderTargetState inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct StencilOverride {
    public:
        // member variables
        // NOLINTBEGIN
        uchar                          bits : 4;
        ::ll::TypedStorage<1, 1, bool> enabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::mce::RenderTargetState::StencilOverride> highStencilBitsOverride;
    ::ll::TypedStorage<4, 32, std::array<mce::TextureFormat, 8>>        renderTargetFormat;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                      depthTextureFormat;
    ::ll::TypedStorage<4, 4, uint>                                      currentRenderTargetsBound;
    ::ll::TypedStorage<4, 4, uint>                                      currentRenderTargetMSAACount;
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>                      lastPrimitiveMode;
    ::ll::TypedStorage<1, 1, uchar>                                     lastStencilRef;
    ::ll::TypedStorage<1, 1, uchar>                                     stencilRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderTargetState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct StencilOverride {
    public:
        // member variables
        // NOLINTBEGIN
        uchar                      mUnk2c6a4c : 4;
        ::ll::UntypedStorage<1, 1> mUnk3ab254;
        // NOLINTEND

    public:
        // prevent constructor by default
        StencilOverride& operator=(StencilOverride const&);
        StencilOverride(StencilOverride const&);
        StencilOverride();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkaf100c;
    ::ll::UntypedStorage<4, 32> mUnke308fa;
    ::ll::UntypedStorage<4, 4>  mUnk5fb981;
    ::ll::UntypedStorage<4, 4>  mUnk51c219;
    ::ll::UntypedStorage<4, 4>  mUnkba514f;
    ::ll::UntypedStorage<1, 1>  mUnkd40165;
    ::ll::UntypedStorage<1, 1>  mUnk7042ba;
    ::ll::UntypedStorage<1, 1>  mUnk2f108b;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderTargetState& operator=(RenderTargetState const&);
    RenderTargetState(RenderTargetState const&);
    RenderTargetState();
#else // @header-generator platform
    struct StencilOverride {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace mce

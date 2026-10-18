#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DepthStencilTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Width;
    ::ll::TypedStorage<4, 4, uint> Height;
    ::ll::TypedStorage<4, 4, uint> SamplesCount;
    ::ll::TypedStorage<1, 1, bool> IsShaderResource;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DepthStencilTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6b28ea;
    ::ll::UntypedStorage<4, 4> mUnk3e9b0c;
    ::ll::UntypedStorage<4, 4> mUnk4591c6;
    ::ll::UntypedStorage<1, 1> mUnkc42630;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthStencilTexture& operator=(DepthStencilTexture const&);
    DepthStencilTexture(DepthStencilTexture const&);
    DepthStencilTexture();
};
#else // @header-generator platform
struct DepthStencilTexture {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceRenderTargetTexture; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceRenderTargetTexture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct VisitedRenderTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mColor;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mColorDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mDepth;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mDepthDescription;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VisitedRenderTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mColor;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mColorDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mDepth;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mDepthDescription;
    // NOLINTEND
};
#else // @header-generator platform
struct VisitedRenderTarget {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface

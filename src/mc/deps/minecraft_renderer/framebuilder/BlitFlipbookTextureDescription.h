#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlitFlipbookTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mRenderTargetTexture;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::BlitFlipbookSingleTextureDescription>> mTextures;
    // NOLINTEND
};
#else // @header-generator platform
struct BlitFlipbookTextureDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

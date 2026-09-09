#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

namespace mce::framebuilder {

struct BlitFlipbookTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mRenderTargetTexture;
    ::ll::TypedStorage<8, 16, ::gsl::span<const mce::framebuilder::BlitFlipbookSingleTextureDescription>> mTextures;
    // NOLINTEND
};

} // namespace mce::framebuilder

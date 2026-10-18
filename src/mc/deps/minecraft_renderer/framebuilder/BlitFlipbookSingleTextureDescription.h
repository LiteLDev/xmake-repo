#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/ViewportInfo.h"
#include "mc/external/render_dragon/rendering/ClipSpaceOrigin.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlitFlipbookSingleTextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                   mMesh;
    ::ll::UntypedStorage<8, 24>                                    mBlitTexture;
    ::ll::TypedStorage<4, 4, float>                                mVBlendFrom;
    ::ll::TypedStorage<4, 4, float>                                mVBlendTo;
    ::ll::TypedStorage<4, 4, float>                                mVBlendAmount;
    ::ll::TypedStorage<4, 24, ::mce::ViewportInfo>                 mViewportInfo;
    ::ll::TypedStorage<1, 1, ::dragon::rendering::ClipSpaceOrigin> mClipSpaceOrigin;
    // NOLINTEND

public:
    // prevent constructor by default
    BlitFlipbookSingleTextureDescription& operator=(BlitFlipbookSingleTextureDescription const&);
    BlitFlipbookSingleTextureDescription(BlitFlipbookSingleTextureDescription const&);
    BlitFlipbookSingleTextureDescription();
};
#else // @header-generator platform
struct BlitFlipbookSingleTextureDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

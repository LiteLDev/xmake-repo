#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"
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
struct RenderBlockSelectionOverlayBlockEntityDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>            mWorldTransform;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                     mMesh;
    ::ll::TypedStorage<4, 4, int>                                                    mSkinnedIndexCount;
    ::ll::TypedStorage<8, 16, ::gsl::span<glm::mat<4, 4, float, (glm::qualifier)0>>> mBones;
    ::ll::UntypedStorage<8, 24>                                                      mTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                    mMaterial;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                          mColor;
    ::ll::TypedStorage<2, 2, ushort const>                                           mViewId;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription>                         mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderBlockSelectionOverlayBlockEntityDescription&
    operator=(RenderBlockSelectionOverlayBlockEntityDescription const&);
    RenderBlockSelectionOverlayBlockEntityDescription(RenderBlockSelectionOverlayBlockEntityDescription const&);
    RenderBlockSelectionOverlayBlockEntityDescription();
};
#else // @header-generator platform
struct RenderBlockSelectionOverlayBlockEntityDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

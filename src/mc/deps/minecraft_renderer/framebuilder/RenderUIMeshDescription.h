#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Color; }
namespace mce { class Mesh; }
namespace mce::framebuilder { struct GlintDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderUIMeshDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::optional<glm::vec<4, float, (glm::qualifier)0>> const&> mClippingRect;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                          mMesh;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&>           mWorldMatrix;
    ::ll::UntypedStorage<8, 104>                                                          mTextures;
    ::ll::TypedStorage<8, 8, ::mce::Color const&>                                         mTintColor;
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0> const&>              mChangeColor;
    ::ll::TypedStorage<4, 4, float>                                                       mHudOpacity;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GlintDescription const*>                mGlintDescription;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsMultiColorTint;
    ::ll::TypedStorage<1, 1, bool>                                                        mNeedsDepth;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDoubleSidedAlpha;
    ::ll::TypedStorage<1, 1, bool>                                                        mNeedsBlending;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsSingleSidedAlpha;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsColorCorrected;
    ::ll::TypedStorage<2, 2, ushort const>                                                mViewId;
    ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription>                              mOffscreenCaptureDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderUIMeshDescription& operator=(RenderUIMeshDescription const&);
    RenderUIMeshDescription(RenderUIMeshDescription const&);
    RenderUIMeshDescription();
};
#else // @header-generator platform
struct RenderUIMeshDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

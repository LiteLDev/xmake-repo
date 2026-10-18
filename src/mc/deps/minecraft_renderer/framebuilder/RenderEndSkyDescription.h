#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
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
struct RenderEndSkyDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::UntypedStorage<8, 24>                                           mTexture;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mColor;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mUVTransformMatrix;
    ::ll::TypedStorage<4, 4, float>                                       mEndSkyMinimumLuminance;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderEndSkyDescription& operator=(RenderEndSkyDescription const&);
    RenderEndSkyDescription(RenderEndSkyDescription const&);
    RenderEndSkyDescription();
};
#else // @header-generator platform
struct RenderEndSkyDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

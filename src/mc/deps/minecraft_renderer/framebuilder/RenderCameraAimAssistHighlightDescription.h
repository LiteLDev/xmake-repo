#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
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
struct RenderCameraAimAssistHighlightDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mCameraPosition;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>>    mTintColor;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mTransformMatrix;
    ::ll::UntypedStorage<8, 24>                                           mTexture;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mQuadMesh;
    ::ll::TypedStorage<2, 2, ushort>                                      mViewId;
    ::ll::TypedStorage<4, 4, int>                                         mRenderBias;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderCameraAimAssistHighlightDescription& operator=(RenderCameraAimAssistHighlightDescription const&);
    RenderCameraAimAssistHighlightDescription(RenderCameraAimAssistHighlightDescription const&);
    RenderCameraAimAssistHighlightDescription();
};
#else // @header-generator platform
struct RenderCameraAimAssistHighlightDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ActorShadowRenderObjectCollection;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderShadowDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorShadowRenderObjectCollection const&>        mActorShadowRenderObjectCollection;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&> mWorldMatrix;
    ::ll::TypedStorage<8, 8, ::glm::vec<3, float, (glm::qualifier)0> const&>    mCameraPosition;
    ::ll::TypedStorage<2, 2, ushort const>                                      mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderShadowDescription& operator=(RenderShadowDescription const&);
    RenderShadowDescription(RenderShadowDescription const&);
    RenderShadowDescription();
};
#else // @header-generator platform
struct RenderShadowDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

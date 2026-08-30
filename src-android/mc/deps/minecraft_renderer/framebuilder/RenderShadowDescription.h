#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorShadowRenderObjectCollection;
// clang-format on

namespace mce::framebuilder {

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

} // namespace mce::framebuilder

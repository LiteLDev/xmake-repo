#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct HudIconRenderObjectCollection; }
// clang-format on

namespace mce::framebuilder {

struct RenderUIHudIconDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::HudIconRenderObjectCollection const&> mHudIconRenderObjectCollection;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>               mWorldMatrix;
    ::ll::TypedStorage<2, 2, ushort const>                                              mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderUIHudIconDescription& operator=(RenderUIHudIconDescription const&);
    RenderUIHudIconDescription(RenderUIHudIconDescription const&);
    RenderUIHudIconDescription();
};

} // namespace mce::framebuilder

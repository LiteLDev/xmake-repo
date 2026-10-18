#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct HudIconRenderObjectCollection; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct RenderUIHudIconDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

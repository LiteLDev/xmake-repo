#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/UIElementPassType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct UIElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::frameobject::components::UIElementPassType> mPassType;
    // NOLINTEND
};
#else // @header-generator platform
struct UIElement {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components

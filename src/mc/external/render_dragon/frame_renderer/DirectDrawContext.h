#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/PassState.h"
#include "mc/external/render_dragon/frame_renderer/ViewDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct DirectDrawContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 292, ::dragon::framerenderer::ViewDescription>    mViewDesc;
    ::ll::TypedStorage<4, 88, ::dragon::frameobject::components::PassState> mPassState;
    // NOLINTEND
};
#else // @header-generator platform
struct DirectDrawContext {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawutils

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/ViewDescription.h"
#include "mc/external/render_dragon/frame_renderer/ViewSet.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::preprocessingutils {

#if defined(LL_PLAT_A) // @header-generator platform
struct GenericPreprocessingSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 292, ::dragon::framerenderer::ViewDescription const> mViewDesc;
    ::ll::TypedStorage<8, 24, ::dragon::framerenderer::ViewSet const>          mViewSets;
    // NOLINTEND
};
#else // @header-generator platform
struct GenericPreprocessingSet {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::preprocessingutils

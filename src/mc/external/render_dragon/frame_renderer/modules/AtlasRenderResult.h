#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/AbstractResource.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::modules::atlas::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasRenderResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mResources;
    // NOLINTEND

public:
    // prevent constructor by default
    AtlasRenderResult& operator=(AtlasRenderResult const&);
    AtlasRenderResult(AtlasRenderResult const&);
    AtlasRenderResult();
};
#else // @header-generator platform
struct AtlasRenderResult {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules::atlas::details

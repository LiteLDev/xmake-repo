#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_graph/AbstractResource.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"

namespace dragon::framerenderer::modules::atlas::details {

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

} // namespace dragon::framerenderer::modules::atlas::details

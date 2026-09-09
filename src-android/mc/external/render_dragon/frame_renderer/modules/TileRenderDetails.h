#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/GenericPassSet.h"

namespace dragon::framerenderer::modules::atlas::details {

struct TileRenderDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<dragon::framerenderer::drawutils::GenericPassSet>> mSceneViewSets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TileRenderDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::atlas::details

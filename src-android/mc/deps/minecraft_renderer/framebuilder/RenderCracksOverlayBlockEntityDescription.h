#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct RenderSkinnedMeshDescription; }
// clang-format on

namespace mce::framebuilder {

struct RenderCracksOverlayBlockEntityDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::RenderSkinnedMeshDescription const&> mSkinnedMeshDescription;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>                  mUVScale;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderCracksOverlayBlockEntityDescription& operator=(RenderCracksOverlayBlockEntityDescription const&);
    RenderCracksOverlayBlockEntityDescription(RenderCracksOverlayBlockEntityDescription const&);
    RenderCracksOverlayBlockEntityDescription();
};

} // namespace mce::framebuilder

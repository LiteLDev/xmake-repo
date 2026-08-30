#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderChunkOccludersDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkOccludersDescription& operator=(RenderChunkOccludersDescription const&);
    RenderChunkOccludersDescription(RenderChunkOccludersDescription const&);
    RenderChunkOccludersDescription();
};

} // namespace mce::framebuilder

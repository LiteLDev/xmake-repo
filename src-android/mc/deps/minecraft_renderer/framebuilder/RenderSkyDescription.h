#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderSkyDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mFogColor;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderSkyDescription& operator=(RenderSkyDescription const&);
    RenderSkyDescription(RenderSkyDescription const&);
    RenderSkyDescription();
};

} // namespace mce::framebuilder

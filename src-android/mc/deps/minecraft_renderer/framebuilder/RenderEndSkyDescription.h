#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderEndSkyDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::UntypedStorage<8, 24>                                           mTexture;
    ::ll::TypedStorage<2, 2, ushort const>                                mViewId;
    ::ll::TypedStorage<4, 16, ::mce::Color>                               mColor;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mUVTransformMatrix;
    ::ll::TypedStorage<4, 4, float>                                       mEndSkyMinimumLuminance;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderEndSkyDescription& operator=(RenderEndSkyDescription const&);
    RenderEndSkyDescription(RenderEndSkyDescription const&);
    RenderEndSkyDescription();
};

} // namespace mce::framebuilder

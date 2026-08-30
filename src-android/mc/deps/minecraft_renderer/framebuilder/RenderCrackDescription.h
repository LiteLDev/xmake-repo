#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct RenderCrackDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                mMesh;
    ::ll::UntypedStorage<8, 24>                                                 mTexture;
    ::ll::TypedStorage<8, 8, ::glm::mat<4, 4, float, (glm::qualifier)0> const&> mWorldMatrix;
    ::ll::TypedStorage<1, 1, bool const>                                        mAlphaTest;
    ::ll::TypedStorage<2, 2, ushort const>                                      mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderCrackDescription& operator=(RenderCrackDescription const&);
    RenderCrackDescription(RenderCrackDescription const&);
    RenderCrackDescription();
};

} // namespace mce::framebuilder

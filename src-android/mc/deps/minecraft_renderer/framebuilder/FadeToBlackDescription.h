#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

namespace mce::framebuilder {

struct FadeToBlackDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                          mMesh;
    ::ll::TypedStorage<4, 4, float>                                       mAlpha;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mWorldTransform;
    ::ll::TypedStorage<2, 2, ushort>                                      mViewId;
    // NOLINTEND

public:
    // prevent constructor by default
    FadeToBlackDescription& operator=(FadeToBlackDescription const&);
    FadeToBlackDescription(FadeToBlackDescription const&);
    FadeToBlackDescription();
};

} // namespace mce::framebuilder

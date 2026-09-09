#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct GlintDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mGlintColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mGlintUVScale;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mGlintOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mGlintRotation;
    // NOLINTEND
};

} // namespace mce::framebuilder

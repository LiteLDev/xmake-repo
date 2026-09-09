#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct GamefaceVSConstantBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::glm::vec<4, float, (glm::qualifier)0>*> data;
    ::ll::TypedStorage<8, 8, ulong>                                    size;
    // NOLINTEND
};

} // namespace mce::framebuilder

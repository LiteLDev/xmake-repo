#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightInfo.h"

namespace LightPropagation {

struct Light {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, ::LightPropagation::LightInfo>           info;
    ::ll::TypedStorage<1, 3, ::glm::vec<3, uchar, (glm::qualifier)0>> pos;
    // NOLINTEND
};

} // namespace LightPropagation

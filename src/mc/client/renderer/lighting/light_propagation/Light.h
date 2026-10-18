#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
struct Light {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, ::LightPropagation::LightInfo>           info;
    ::ll::TypedStorage<1, 3, ::glm::vec<3, uchar, (glm::qualifier)0>> pos;
    // NOLINTEND
};
#else // @header-generator platform
struct Light {};
#endif // @header-generator platform

} // namespace LightPropagation

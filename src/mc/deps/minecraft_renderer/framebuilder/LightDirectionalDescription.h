#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightDirectionalDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color>                            mColor;
    ::ll::TypedStorage<1, 1, bool>                                     mIsSun;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDirectionToLightSource;
    ::ll::TypedStorage<2, 2, ushort>                                   mViewId;
    // NOLINTEND
};
#else // @header-generator platform
struct LightDirectionalDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

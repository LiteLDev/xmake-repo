#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderBannerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120>                                                    mBannerColors;
    ::ll::UntypedStorage<8, 120>                                                    mBannerUVOffsetsAndScales;
    ::ll::TypedStorage<4, 64, std::array<glm::vec<4, float, (glm::qualifier)0>, 4>> mBasePBRTextureData;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderBannerDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShadowAtlasFrameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>   mProj;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasHandle>> mShadowAtlasHandle;
    // NOLINTEND
};
#else // @header-generator platform
struct ShadowAtlasFrameData {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents

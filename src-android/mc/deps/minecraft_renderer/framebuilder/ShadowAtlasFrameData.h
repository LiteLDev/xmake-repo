#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace mce::framebuilder::gamecomponents {

struct ShadowAtlasFrameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>   mProj;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasHandle>> mShadowAtlasHandle;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents

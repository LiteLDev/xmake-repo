#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"

namespace mce::framebuilder {

struct RenderBannerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120>                                                    mBannerColors;
    ::ll::UntypedStorage<8, 120>                                                    mBannerUVOffsetsAndScales;
    ::ll::TypedStorage<4, 64, std::array<glm::vec<4, float, (glm::qualifier)0>, 4>> mBasePBRTextureData;
    // NOLINTEND
};

} // namespace mce::framebuilder

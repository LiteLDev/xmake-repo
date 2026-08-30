#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

namespace dragon::framerenderer::modules {

struct LocalExposureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 6, ::glm::vec<3, ushort, (glm::qualifier)0>> mGridDimensions;
    ::ll::UntypedStorage<8, 32>                                        mBilateralGridTexture;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::water {

#if defined(LL_PLAT_A) // @header-generator platform
struct WaterParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mChlorophyllConcentration;
    ::ll::TypedStorage<4, 4, float>                                    mCDOMConcentration;
    ::ll::TypedStorage<4, 4, float>                                    mSSConcentration;
    ::ll::TypedStorage<4, 4, float>                                    mBiomeWaterColorContribution;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mBiomeWaterColor;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterParameters();
};
#else // @header-generator platform
struct WaterParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules::water

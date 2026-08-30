#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::water {

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

} // namespace dragon::framerenderer::modules::water

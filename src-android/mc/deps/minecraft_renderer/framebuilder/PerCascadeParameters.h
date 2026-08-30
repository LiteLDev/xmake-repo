#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"

namespace mce::framebuilder {

struct PerCascadeParameters : public ::mce::framebuilder::PerCascadeRenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mLightQuantizationSteps;
    ::ll::TypedStorage<4, 4, float> mRange;
    // NOLINTEND
};

} // namespace mce::framebuilder

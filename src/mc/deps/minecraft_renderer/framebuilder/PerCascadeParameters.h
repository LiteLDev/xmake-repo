#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeRenderingParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct PerCascadeParameters : public ::mce::framebuilder::PerCascadeRenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mLightQuantizationSteps;
    ::ll::TypedStorage<4, 4, float> mRange;
    // NOLINTEND
};
#else // @header-generator platform
struct PerCascadeParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder

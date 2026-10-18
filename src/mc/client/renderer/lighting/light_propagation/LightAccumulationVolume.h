#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/AccumulatedColor.h"
#include "mc/client/renderer/lighting/light_propagation/RelightingParams.h"
#include "mc/client/renderer/lighting/light_propagation/RenderChunkParams.h"
#include "mc/client/renderer/lighting/light_propagation/SingleLightParams.h"
#include "mc/client/renderer/lighting/light_propagation/SubChunkParams.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightAccumulationVolume {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<LightPropagation::AccumulatedColor>> mLightVolume;
    ::ll::TypedStorage<4, 8, std::variant<LightPropagation::SubChunkParams, LightPropagation::RenderChunkParams, LightPropagation::SingleLightParams, LightPropagation::RelightingParams> const> mParamType;
    ::ll::TypedStorage<1, 1, bool> mHasResults;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct LightAccumulationVolume {};
#endif // @header-generator platform

} // namespace LightPropagation

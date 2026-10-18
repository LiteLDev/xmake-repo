#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"
#include "mc/client/renderer/chunks/point_lighting/LightingTier.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace PointLighting { struct AnalyticLightResources; }
namespace PointLighting { struct BakedLightResources; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { struct AnalyticLightResources; }
namespace PointLighting { struct BakedLightResources; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
class LightLODResourceManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PointLighting::ILightLODResourceProvider<PointLighting::BakedLightResources>>>> mBakedLightResourceProviders;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PointLighting::ILightLODResourceProvider<PointLighting::AnalyticLightResources>>>> mAnalyticLightResourceProviders;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LightLODResourceManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<
            ::std::shared_ptr<::PointLighting::ILightLODResourceProvider<::PointLighting::BakedLightResources>>>>
        mBakedLightResourceProviders;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<
            ::std::shared_ptr<::PointLighting::ILightLODResourceProvider<::PointLighting::AnalyticLightResources>>>>
        mAnalyticLightResourceProviders;
    // NOLINTEND
};
#else // @header-generator platform
class LightLODResourceManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting

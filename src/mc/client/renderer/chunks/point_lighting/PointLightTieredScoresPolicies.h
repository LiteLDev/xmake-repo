#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { class LightLODResourceManager; }
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { class LightLODResourceManager; }
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
struct PointLightTieredScoresPolicies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LightContainer<PointLighting::ManagedPointLight>&> mLightContainer;
    ::ll::TypedStorage<8, 8, ::PointLighting::LightLODResourceManager&>           mLODResourceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightTieredScoresPolicies& operator=(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PointLightTieredScoresPolicies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LightContainer<::PointLighting::ManagedPointLight>&> mLightContainer;
    ::ll::TypedStorage<8, 8, ::PointLighting::LightLODResourceManager&>             mLODResourceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightTieredScoresPolicies& operator=(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies();
};
#else // @header-generator platform
struct PointLightTieredScoresPolicies {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting

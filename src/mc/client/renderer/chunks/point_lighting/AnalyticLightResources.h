#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
struct AnalyticLightResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, std::array<dragon::atlas::AtlasTileHandle, 6>> mAtlasTiles;
    ::ll::TypedStorage<4, 4, float>                                           mIntensityScalar;
    // NOLINTEND

public:
    // prevent constructor by default
    AnalyticLightResources& operator=(AnalyticLightResources const&);
    AnalyticLightResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnalyticLightResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AnalyticLightResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::std::array<::dragon::atlas::AtlasTileHandle, 6>> mAtlasTiles;
    ::ll::TypedStorage<4, 4, float>                                               mIntensityScalar;
    // NOLINTEND
};
#else // @header-generator platform
struct AnalyticLightResources {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting

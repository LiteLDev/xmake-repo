#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct AnalyticalLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters const>                    mParameters;
    ::ll::TypedStorage<8, 192, std::array<dragon::atlas::AtlasTileHandle, 6> const> mAtlasTiles;
    // NOLINTEND

public:
    // prevent constructor by default
    AnalyticalLight& operator=(AnalyticalLight const&);
    AnalyticalLight();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnalyticalLight();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AnalyticalLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters const>                        mParameters;
    ::ll::TypedStorage<8, 192, ::std::array<::dragon::atlas::AtlasTileHandle, 6> const> mAtlasTiles;
    // NOLINTEND
};
#else // @header-generator platform
struct AnalyticalLight {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

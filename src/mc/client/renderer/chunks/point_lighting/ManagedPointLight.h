#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/TransitioningLightState.h"
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/TransitioningLightState.h"
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
struct ManagedPointLight {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters> mLightParameters;
    ::ll::TypedStorage<8, 208, std::variant<PointLighting::BakedLightResources, PointLighting::AnalyticLightResources>> mResources;
    ::ll::TypedStorage<8, 224, std::optional<PointLighting::TransitioningLightState>> mTransitionState;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ManagedPointLight& operator=(ManagedPointLight const&);
    ManagedPointLight();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ManagedPointLight();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ManagedPointLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters> mLightParameters;
    ::ll::TypedStorage<
        8,
        208,
        ::std::variant<::PointLighting::BakedLightResources, ::PointLighting::AnalyticLightResources>>
                                                                                          mResources;
    ::ll::TypedStorage<8, 224, ::std::optional<::PointLighting::TransitioningLightState>> mTransitionState;
    // NOLINTEND
};
#else // @header-generator platform
struct ManagedPointLight {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/TransitioningLightState.h"
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"

namespace PointLighting {

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

} // namespace PointLighting

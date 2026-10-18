#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace PointLighting {

struct TransitioningLightState {
public:
    // TransitioningLightState inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Phase : uchar {
        Acquiring     = 0,
        Acquired      = 1,
        Transitioning = 2,
        Finalize      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::PointLighting::TransitioningLightState::Phase> mPhase;
    ::ll::TypedStorage<4, 4, float> mCurrentBlendFactor;
    ::ll::TypedStorage<8, 208, std::variant<PointLighting::BakedLightResources, PointLighting::AnalyticLightResources>> mResources;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TransitioningLightState& operator=(TransitioningLightState const&);
    TransitioningLightState();
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Phase : uchar {
        Acquiring     = 0,
        Acquired      = 1,
        Transitioning = 2,
        Finalize      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PointLighting::TransitioningLightState::Phase> mPhase;
    ::ll::TypedStorage<4, 4, float>                                           mCurrentBlendFactor;
    ::ll::TypedStorage<
        8,
        208,
        ::std::variant<::PointLighting::BakedLightResources, ::PointLighting::AnalyticLightResources>>
        mResources;
    // NOLINTEND
#else // @header-generator platform
    enum class Phase : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace PointLighting

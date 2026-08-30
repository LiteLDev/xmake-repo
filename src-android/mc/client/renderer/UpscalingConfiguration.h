#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/UpscalingMode.h"
#include "mc/client/options/UpscalingQuality.h"
#include "mc/external/render_dragon/frame_renderer/modules/UpscalingParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct UpscalingConfiguration {
public:
    // UpscalingConfiguration inner types declare
    // clang-format off
    struct Configs;
    // clang-format on

    // UpscalingConfiguration inner types define
    struct Configs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> automatic;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> oneThird;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> oneHalf;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> twoThirds;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> threeQuarters;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> native;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> taau;
        ::ll::TypedStorage<4, 52, ::dragon::framerenderer::modules::UpscalingParameters> bilinear;
        // NOLINTEND

    public:
        // prevent constructor by default
        Configs& operator=(Configs const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Configs();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 416, ::UpscalingConfiguration::Configs> mConfigs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::UpscalingParameters getUpscalingParameters(::UpscalingMode) const;

    MCNAPI ::dragon::framerenderer::modules::UpscalingParameters
    getUpscalingParameters(::UpscalingQuality, ::glm::vec<2, ushort, (glm::qualifier)0> const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static ::dragon::framerenderer::modules::UpscalingParameters resolveAutomaticUpscalingParameters(
        ::dragon::framerenderer::modules::UpscalingParameters,
        ::glm::vec<2, float, (glm::qualifier)0> const&
    );
    // NOLINTEND
};

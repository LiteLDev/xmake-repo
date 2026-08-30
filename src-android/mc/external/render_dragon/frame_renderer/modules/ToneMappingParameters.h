#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/ExposureCompensationType.h"
#include "mc/external/render_dragon/frame_renderer/modules/GenericTonemapperParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/Tonemapper.h"

namespace dragon::framerenderer::modules {

struct ToneMappingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                       mEnabled;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::Tonemapper>               mTonemapper;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::ExposureCompensationType> mExposureCompensationType;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, float>>> mCustomExposureCompensationCurve;
    ::ll::TypedStorage<4, 4, float>                                 mExposureCompensation;
    ::ll::TypedStorage<4, 4, float>                                 mMinLuminance;
    ::ll::TypedStorage<4, 4, float>                                 mMaxLuminance;
    ::ll::TypedStorage<1, 1, bool>                                  mAutoExposure;
    ::ll::TypedStorage<4, 4, float>                                 mFStop;
    ::ll::TypedStorage<4, 4, float>                                 mMinWhitePoint;
    ::ll::TypedStorage<4, 24, ::dragon::framerenderer::modules::GenericTonemapperParameters> mGenericTonemapper;
    // NOLINTEND

public:
    // prevent constructor by default
    ToneMappingParameters& operator=(ToneMappingParameters const&);
};

} // namespace dragon::framerenderer::modules

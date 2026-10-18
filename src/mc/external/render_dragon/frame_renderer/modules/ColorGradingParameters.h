#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/modules/TemperatureGrading.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer::modules {

struct ColorGradingParameters {
public:
    // ColorGradingParameters inner types declare
    // clang-format off
    struct SplitToneVector;
    // clang-format on

    // ColorGradingParameters inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SplitToneVector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mHighlights;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mMidtones;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mShadows;
        ::ll::TypedStorage<1, 1, bool>                                     mEnableHighlights;
        ::ll::TypedStorage<1, 1, bool>                                     mEnableMidtones;
        ::ll::TypedStorage<1, 1, bool>                                     mEnableShadows;
        // NOLINTEND

    public:
        // prevent constructor by default
        SplitToneVector();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mEnableHighlightGrading;
    ::ll::TypedStorage<4, 4, float>                                                 mHighlightMin;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnableMidtoneGrading;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnableShadowGrading;
    ::ll::TypedStorage<4, 4, float>                                                 mShadowMax;
    ::ll::TypedStorage<1, 1, bool>                                                  mNormalizeIntensity;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::TemperatureGrading> mTemperatureGrading;
    ::ll::TypedStorage<4, 40, ::dragon::framerenderer::modules::ColorGradingParameters::SplitToneVector> mContrast;
    ::ll::TypedStorage<4, 4, float>                                                                      mContrastPivot;
    ::ll::TypedStorage<4, 40, ::dragon::framerenderer::modules::ColorGradingParameters::SplitToneVector> mSaturation;
    ::ll::TypedStorage<4, 40, ::dragon::framerenderer::modules::ColorGradingParameters::SplitToneVector> mGain;
    ::ll::TypedStorage<4, 40, ::dragon::framerenderer::modules::ColorGradingParameters::SplitToneVector> mOffset;
    ::ll::TypedStorage<4, 40, ::dragon::framerenderer::modules::ColorGradingParameters::SplitToneVector> mGamma;
    ::ll::TypedStorage<4, 4, float>                                                                      mPlayerUIGamma;
    ::ll::TypedStorage<1, 1, bool> mEnableContrast;
    ::ll::TypedStorage<1, 1, bool> mEnableSaturation;
    ::ll::TypedStorage<1, 1, bool> mEnableGain;
    ::ll::TypedStorage<1, 1, bool> mEnableOffset;
    ::ll::TypedStorage<1, 1, bool> mEnableGamma;
    ::ll::TypedStorage<1, 1, bool> mOptimizeGammaCorrection;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGradingParameters& operator=(ColorGradingParameters const&);
    ColorGradingParameters(ColorGradingParameters const&);
#else // @header-generator platform
    struct SplitToneVector {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer::modules

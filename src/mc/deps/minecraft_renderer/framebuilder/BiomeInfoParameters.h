#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Bedrock__basic_small_string.h"
#include "mc/deps/minecraft_renderer/framebuilder/DirectionalLightParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/SkyboxParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/WaterSurfaceParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/AtmosphericScatteringParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ColorGradingParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/WaterParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeInfoParameters {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 272> mIdentifier;
    ::ll::TypedStorage<4, 64, ::mce::framebuilder::DirectionalLightParameters> mDirectionalLightParameters;
    ::ll::TypedStorage<4, 4, float> mEmissiveDesaturation;
    ::ll::TypedStorage<4, 4, float> mSkyIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mAmbientLight;
    ::ll::TypedStorage<4, 152, ::dragon::framerenderer::modules::AtmosphericScatteringParameters> mAtmosphericScatteringParameters;
    ::ll::TypedStorage<4, 28, ::dragon::framerenderer::modules::water::WaterParameters> mWaterParameters;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::WaterSurfaceParameters> mWaterSurfaceParameters;
    ::ll::TypedStorage<4, 248, ::dragon::framerenderer::modules::ColorGradingParameters> mColorGradingParameters;
    ::ll::TypedStorage<4, 16, ::mce::framebuilder::SkyboxParameters> mSkyboxParameters;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeInfoParameters& operator=(BiomeInfoParameters const&);
    BiomeInfoParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeInfoParameters(::mce::framebuilder::BiomeInfoParameters const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::BiomeInfoParameters const&);
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeInfoParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder

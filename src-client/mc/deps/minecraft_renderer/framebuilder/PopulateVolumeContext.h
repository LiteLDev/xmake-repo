#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/VolumetricFog.h"
#include "mc/external/render_dragon/frame_renderer/modules/VolumeDimensions.h"
#include "mc/external/render_dragon/frame_renderer/modules/VolumeScatteringParameters.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct PopulateVolumeContext {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mWorldOrigin;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientResourcePointer<dragon::ResolvedMaterialResource>>> mPopulateVolumeMaterial;
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides> mPBRUniformOverrides;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mParameters;
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::VolumeDimensions> mVolumeDimensions;
    ::ll::TypedStorage<4, 88, ::mce::framebuilder::gamecomponents::VolumetricFog const> mVolumetricFog;
    ::ll::TypedStorage<4, 4, float> mMinAmbientValue;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPrevInvProj;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mJitterOffset;
    ::ll::TypedStorage<1, 1, bool> hasHistory;
    ::ll::TypedStorage<1, 1, bool> mPointLightsEnabled;
    ::ll::TypedStorage<1, 1, bool> mGPUBlockLightingEnabled;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

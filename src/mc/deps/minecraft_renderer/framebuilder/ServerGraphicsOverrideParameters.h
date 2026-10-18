#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/string/util/string_hash.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServerGraphicsOverrideParameters {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mHorizonBlendMin_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mHorizonBlendMax_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mHorizonBlendStart_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mHorizonBlendMieStart_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mRayleighStrength_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mSunMieStrength_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mMoonMieStrength_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mSunGlareShape_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mChlorophyll_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mCDOM_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mSuspendedSediment_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesDepth_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesFrequency_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesFrequencyScaling_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesSpeed_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesSpeedScaling_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesShape_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, int>>>> mWavesOctaves_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesMix_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesPull_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mWavesDirectionIncrement_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mHighlightsMin_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mShadowsMax_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mTemperature_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, glm::vec<3, float, (glm::qualifier)0>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, glm::vec<3, float, (glm::qualifier)0>>>>> mAmbientColor_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mAmbientIlluminance_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mEmissiveDesaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mSkyIntensity_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, float, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, float>>>> mOrbitalOffsetDegrees_Biomes;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct ServerGraphicsOverrideParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/Keyframes.h"
#include "mc/deps/minecraft_renderer/framebuilder/PlayerBiomeHash.h"
#include "mc/deps/minecraft_renderer/framebuilder/PlayerBiomeStoredKey.h"

// auto generated forward declare list
// clang-format off
class GraphicsOverrideParameterPacket;
class Vec3;
namespace Util { struct string_hash; }
namespace mce::framebuilder::gamecomponents { struct PlayerBiomeLookup; }
// clang-format on

class ServerGraphicsOverrideManager {
public:
    // ServerGraphicsOverrideManager inner types define
    using PlayerBiomeLookup = ::mce::framebuilder::gamecomponents::PlayerBiomeLookup;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 40> mSkyZenithColor_Biomes;
    ::ll::UntypedStorage<8, 40> mSkyHorizonColor_Biomes;
    ::ll::UntypedStorage<8, 40> mHorizonBlendMin_Biomes;
    ::ll::UntypedStorage<8, 40> mHorizonBlendMax_Biomes;
    ::ll::UntypedStorage<8, 40> mHorizonBlendStart_Biomes;
    ::ll::UntypedStorage<8, 40> mHorizonBlendMieStart_Biomes;
    ::ll::UntypedStorage<8, 40> mRayleighStrength_Biomes;
    ::ll::UntypedStorage<8, 40> mSunMieStrength_Biomes;
    ::ll::UntypedStorage<8, 40> mMoonMieStrength_Biomes;
    ::ll::UntypedStorage<8, 40> mSunGlareShape_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mChlorophyll_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mCDOM_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mSuspendedSediment_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesDepth_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesFrequency_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesFrequencyScaling_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesSpeed_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesSpeedScaling_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesShape_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, int, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, int>>>> mWavesOctaves_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesMix_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesPull_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mWavesDirectionIncrement_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsContrast_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mHighlightsSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mMidtonesSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsGain_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsGamma_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsOffset_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, glm::vec<3, float, (glm::qualifier)0>>>>> mShadowsSaturation_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mHighlightsMin_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mShadowsMax_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mTemperature_Biomes;
    ::ll::UntypedStorage<8, 40> mSunColor_Biomes;
    ::ll::UntypedStorage<8, 40> mSunIlluminance_Biomes;
    ::ll::UntypedStorage<8, 40> mMoonColor_Biomes;
    ::ll::UntypedStorage<8, 40> mMoonIlluminance_Biomes;
    ::ll::UntypedStorage<8, 40> mFlashColor_Biomes;
    ::ll::UntypedStorage<8, 40> mFlashIlluminance_Biomes;
    ::ll::UntypedStorage<8, 40> mAmbientColor_Biomes;
    ::ll::UntypedStorage<8, 40> mAmbientIlluminance_Biomes;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float, mce::framebuilder::gamecomponents::PlayerBiomeHash, std::equal_to<void>, std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>> mEmissiveDesaturation_Biomes;
    ::ll::UntypedStorage<8, 40> mSkyIntensity_Biomes;
    ::ll::UntypedStorage<8, 40> mOrbitalOffsetDegrees_Biomes;
    ::ll::TypedStorage<8, 24, std::string> mLocalPlayerId;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void InterpolateAndAddOverridesToParameters(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            Core::Keyframes<float, float>,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
                Core::Keyframes<float, float>>>>&,
        std::unordered_map<
            std::string,
            float,
            Util::string_hash,
            std::equal_to<void>,
            std::allocator<std::pair<const std::string, float>>>&,
        float
    );

    MCNAPI void SetLocalPlayerId(std::string_view);

    MCNAPI ::Core::Keyframes<float, mce::Color> _convertMapToColorKeyframes(std::unordered_map<float, Vec3>);

    MCNAPI ::Core::Keyframes<float, float> _convertMapToFloatKeyframes(std::unordered_map<float, Vec3>);

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> _getKeyframes(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            Core::Keyframes<float, mce::Color>,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
                Core::Keyframes<float, mce::Color>>>> const&,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI void _handlePacket(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            Core::Keyframes<float, mce::Color>,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
                Core::Keyframes<float, mce::Color>>>>&,
        bool,
        ::Core::Keyframes<float, mce::Color>,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI void _handlePacket(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            Core::Keyframes<float, float>,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
                Core::Keyframes<float, float>>>>&,
        bool,
        ::Core::Keyframes<float, float>,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI void _handlePacket(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            float,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, float>>>&,
        bool,
        std::optional<float> const&,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI void _handlePacket(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            int,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey, int>>>&,
        bool,
        std::optional<float> const&,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI void _handlePacket(
        std::unordered_map<
            mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
            glm::vec<3, float, (glm::qualifier)0>,
            mce::framebuilder::gamecomponents::PlayerBiomeHash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const mce::framebuilder::gamecomponents::PlayerBiomeStoredKey,
                glm::vec<3, float, (glm::qualifier)0>>>>&,
        bool,
        std::optional<Vec3> const&,
        ::mce::framebuilder::gamecomponents::PlayerBiomeLookup const&
    );

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> getFlashColor(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, float>> getFlashIlluminance(std::string_view);

    MCNAPI std::optional<float> getHighlightsMin(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, float>> getHorizonBlendMieStart(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> getMoonColor(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, float>> getMoonIlluminance(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, float>> getOrbitalOffsetDegrees(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> getSkyHorizonColor(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> getSkyZenithColor(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, mce::Color>> getSunColor(std::string_view);

    MCNAPI std::optional<Core::Keyframes<float, float>> getSunIlluminance(std::string_view);

    MCNAPI std::optional<float> getWavesFrequency(std::string_view);

    MCNAPI std::optional<float> getWavesSpeed(std::string_view);

    MCNAPI void handlePacket(::GraphicsOverrideParameterPacket const&);

    MCNAPI void insertParameters(float);

    MCNAPI ~ServerGraphicsOverrideManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

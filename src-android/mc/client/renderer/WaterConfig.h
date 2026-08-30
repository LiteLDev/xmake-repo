#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/puv/Loader.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
class SemVersion;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::framerenderer::modules::water { struct WaterEnabledFeatures; }
namespace dragon::framerenderer::modules::water { struct WaterParameters; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CausticsParameters; }
namespace mce::framebuilder { struct WaterSurfaceParameters; }
// clang-format on

class WaterConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // WaterConfig inner types declare
    // clang-format off
    struct WaterConfigSettingsV0;
    struct WaterConfigSettingsV1;
    struct WaterConfigSettingsV2;
    struct WaterConfigSettingsV4;
    struct CausticsTexture;
    struct WaterConfigSettingsV3;
    // clang-format on

    // WaterConfig inner types define
    struct WaterConfigSettingsV0 {
    public:
        // WaterConfigSettingsV0 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV0 inner types define
        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct WaterDescription;
            struct PSY;
            struct Waves;
            // clang-format on

            // WaterSettings inner types define
            struct WaterDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };

            struct PSY {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, std::optional<float>> mChlorophyll;
                ::ll::TypedStorage<4, 8, std::optional<float>> mSuspendedSediment;
                ::ll::TypedStorage<4, 8, std::optional<float>> mCDOM;
                // NOLINTEND
            };

            struct Waves {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<1, 2, std::optional<bool>>  mEnabled;
                ::ll::TypedStorage<4, 8, std::optional<float>> mFrequency;
                ::ll::TypedStorage<4, 8, std::optional<uint>>  mOctaves;
                ::ll::TypedStorage<4, 8, std::optional<float>> mDepth;
                ::ll::TypedStorage<4, 8, std::optional<float>> mSampleWidth;
                ::ll::TypedStorage<4, 8, std::optional<float>> mStartingSpeed;
                ::ll::TypedStorage<4, 8, std::optional<float>> mShape;
                ::ll::TypedStorage<4, 8, std::optional<float>> mPull;
                ::ll::TypedStorage<4, 8, std::optional<float>> mMix;
                ::ll::TypedStorage<4, 8, std::optional<float>> mFrequencyScaling;
                ::ll::TypedStorage<4, 8, std::optional<float>> mSpeedScaling;
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 32, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription>> mDescription;
            ::ll::TypedStorage<4, 28, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::PSY>> mPSY;
            ::ll::TypedStorage<4, 88, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::Waves>> mWaves;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                       mFormatVersion;
        ::ll::TypedStorage<8, 160, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings>> mWaterSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct WaterConfigSettingsV1 {
    public:
        // WaterConfigSettingsV1 inner types declare
        // clang-format off
        struct WaterSurfaceParametersBase;
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV1 inner types define
        struct WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<1, 2, std::optional<bool>>  mEnabled;
            ::ll::TypedStorage<4, 8, std::optional<float>> mWaveFrequency;
            ::ll::TypedStorage<4, 8, std::optional<uint>>  mOctaves;
            ::ll::TypedStorage<4, 8, std::optional<float>> mDepth;
            ::ll::TypedStorage<4, 8, std::optional<float>> mStartingSpeed;
            ::ll::TypedStorage<4, 8, std::optional<float>> mPull;
            ::ll::TypedStorage<4, 8, std::optional<float>> mWeightMix;
            ::ll::TypedStorage<4, 8, std::optional<float>> mFrequencyScaling;
            ::ll::TypedStorage<4, 8, std::optional<float>> mSpeedScaling;
            ::ll::TypedStorage<4, 8, std::optional<float>> mRotationOffset;
            ::ll::TypedStorage<4, 8, std::optional<float>> mWaveExponent;
            // NOLINTEND
        };

        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 8, std::optional<float>> mNSampleWidth;
            // NOLINTEND
        };

        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct CausticsParameters;
            // clang-format on

            // WaterSettings inner types define
            struct CausticsParameters {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<8, 32, std::optional<std::string>> mTextureName;
                ::ll::TypedStorage<4, 8, std::optional<float>>        mSecondsPerFrame;
                ::ll::TypedStorage<4, 8, std::optional<float>>        mCausticsScale;
                ::ll::TypedStorage<4, 8, std::optional<float>>        mCausticsPower;
                ::ll::TypedStorage<1, 2, std::optional<bool>>         mEnableCaustics;
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 32, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription>> mDescription;
            ::ll::TypedStorage<4, 28, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::PSY>> mPSY;
            ::ll::TypedStorage<8, 72, std::optional<WaterConfig::WaterConfigSettingsV1::WaterSettings::CausticsParameters>> mCausticsParameters;
            ::ll::TypedStorage<4, 96, std::optional<WaterConfig::WaterConfigSettingsV1::WaterSurfaceParameters>> mWaterSurfaceParameters;
            // clang-format on
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV1::WaterSettings const&);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV1::WaterSettings const&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                       mFormatVersion;
        ::ll::TypedStorage<8, 240, std::optional<WaterConfig::WaterConfigSettingsV1::WaterSettings>> mWaterSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV1();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct WaterConfigSettingsV2 {
    public:
        // WaterConfigSettingsV2 inner types declare
        // clang-format off
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV2 inner types define
        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {};

        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 32, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription>> mDescription;
            ::ll::TypedStorage<4, 28, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::PSY>> mPSY;
            ::ll::TypedStorage<8, 72, std::optional<WaterConfig::WaterConfigSettingsV1::WaterSettings::CausticsParameters>> mCausticsParameters;
            ::ll::TypedStorage<4, 88, std::optional<WaterConfig::WaterConfigSettingsV2::WaterSurfaceParameters>> mWaterSurfaceParameters;
            // clang-format on
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV2::WaterSettings const&);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV2::WaterSettings const&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                       mFormatVersion;
        ::ll::TypedStorage<8, 232, std::optional<WaterConfig::WaterConfigSettingsV2::WaterSettings>> mWaterSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV2();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct WaterConfigSettingsV4 {
    public:
        // WaterConfigSettingsV4 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV4 inner types define
        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 24, ::WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription> mDescription;
            ::ll::TypedStorage<4, 28, std::optional<WaterConfig::WaterConfigSettingsV0::WaterSettings::PSY>> mPSY;
            ::ll::TypedStorage<8, 72, std::optional<WaterConfig::WaterConfigSettingsV1::WaterSettings::CausticsParameters>> mCausticsParameters;
            ::ll::TypedStorage<4, 88, std::optional<WaterConfig::WaterConfigSettingsV2::WaterSurfaceParameters>> mWaterSurfaceParameters;
            ::ll::TypedStorage<4, 8, std::optional<float>> mBiomeWaterColorContribution;
            // clang-format on
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);
            // NOLINTEND
        };

        using WaterDescription = ::WaterConfig::WaterConfigSettingsV0::WaterSettings::WaterDescription;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                          mFormatVersion;
        ::ll::TypedStorage<8, 224, ::WaterConfig::WaterConfigSettingsV4::WaterSettings> mWaterSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV4();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct CausticsTexture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>    mTexture;
        ::ll::TypedStorage<4, 4, uint> mNumFrames;
        // NOLINTEND
    };

    struct WaterConfigSettingsV3 {
    public:
        // WaterConfigSettingsV3 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV3 inner types define
        struct WaterSettings : public ::WaterConfig::WaterConfigSettingsV2::WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 8, std::optional<float>> mBiomeWaterColorContribution;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                       mFormatVersion;
        ::ll::TypedStorage<8, 240, std::optional<WaterConfig::WaterConfigSettingsV3::WaterSettings>> mWaterSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WaterConfigSettingsV3();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using WaterConfigSettingsV4 = ::WaterConfig::WaterConfigSettingsV4;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mCausticsTexturePtr;
    ::ll::TypedStorage<8, 248, ::WaterConfig::WaterConfigSettingsV4> mDefaultWaterSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, WaterConfig::WaterConfigSettingsV4>> mWaterSettings;
    ::ll::TypedStorage<8, 32, ::WaterConfig::CausticsTexture> mDefaultCausticsTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WaterConfig();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void _setDefaultIdentifierImpl(::HashedString const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WaterConfig(::IMinecraftEventing&);

    MCNAPI bool containsWaterSettings(::HashedString const&) const;

    MCNAPI std::unordered_map<HashedString, WaterConfig::WaterConfigSettingsV4> const& getAllWaterSettings() const;

    MCNAPI ::mce::framebuilder::CausticsParameters getCausticsParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterEnabledFeatures getWaterEnabledFeatures() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters getWaterParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters getWaterParameters(::HashedString const&) const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters() const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters(::HashedString const&) const;

    MCNAPI void loadTextures(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void unloadTextures(std::shared_ptr<mce::TextureGroup>);

    MCNAPI bool validateAndSetCausticsTexture();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindWaterParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PAYLOAD_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::LoadResultAny $loadFromString(
        ::cereal::ReflectionCtx const&,
        std::string const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
    );

    MCNAPI void $loadDataSync(
        ::cereal::ReflectionCtx const&,
        ::ResourcePackManager&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>
    );

    MCNAPI void $_setDefaultIdentifierImpl(::HashedString const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

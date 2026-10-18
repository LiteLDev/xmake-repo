#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersion;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules::water { struct WaterParameters; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CausticsParameters; }
namespace mce::framebuilder { struct WaterSurfaceParameters; }
// clang-format on

class WaterConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
#else // @header-generator platform
class WaterConfig {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WaterConfig inner types declare
    // clang-format off
    struct WaterConfigSettingsV0;
    struct WaterConfigSettingsV1;
    struct WaterConfigSettingsV2;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct WaterConfigSettingsV3;
#endif // @header-generator platform
    struct WaterConfigSettingsV4;
    struct CausticsTexture;
#if defined(LL_PLAT_A) // @header-generator platform
    struct WaterConfigSettingsV3;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            struct WaterDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct WaterDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk69d0de;
                // NOLINTEND
#else // @header-generator platform
            struct WaterDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
            struct PSY {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 8, std::optional<float>> mChlorophyll;
                ::ll::TypedStorage<4, 8, std::optional<float>> mSuspendedSediment;
                ::ll::TypedStorage<4, 8, std::optional<float>> mCDOM;
                // NOLINTEND
            };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // prevent constructor by default
                WaterDescription& operator=(WaterDescription const&);
                WaterDescription(WaterDescription const&);
                WaterDescription();
#else // @header-generator platform
            struct PSY {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // member functions
                // NOLINTBEGIN
                MCNAPI ~WaterDescription();
                // NOLINTEND

            public:
                // destructor thunk
                // NOLINTBEGIN
                MCNAPI void $dtor();
                // NOLINTEND
            };

            struct PSY {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 8> mUnkba9b05;
                ::ll::UntypedStorage<4, 8> mUnk8a0463;
                ::ll::UntypedStorage<4, 8> mUnkb3e8b1;
                // NOLINTEND

            public:
                // prevent constructor by default
                PSY& operator=(PSY const&);
                PSY(PSY const&);
                PSY();
            };

            struct Waves {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 2> mUnk8d8752;
                ::ll::UntypedStorage<4, 8> mUnkb37626;
                ::ll::UntypedStorage<4, 8> mUnkf40d6f;
                ::ll::UntypedStorage<4, 8> mUnka29ce5;
                ::ll::UntypedStorage<4, 8> mUnk1d95f0;
                ::ll::UntypedStorage<4, 8> mUnkc8fa3f;
                ::ll::UntypedStorage<4, 8> mUnk3440f5;
                ::ll::UntypedStorage<4, 8> mUnk947c21;
                ::ll::UntypedStorage<4, 8> mUnk945515;
                ::ll::UntypedStorage<4, 8> mUnkec9603;
                ::ll::UntypedStorage<4, 8> mUnkd2fe50;
                // NOLINTEND

            public:
                // prevent constructor by default
                Waves& operator=(Waves const&);
                Waves(Waves const&);
                Waves();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnk9d7280;
            ::ll::UntypedStorage<4, 28> mUnk24f185;
            ::ll::UntypedStorage<4, 88> mUnkfe4362;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
#else // @header-generator platform
            struct Waves {};
#endif // @header-generator platform
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk21f82b;
        ::ll::UntypedStorage<8, 168> mUnkdf7d69;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV0& operator=(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0(WaterConfigSettingsV0 const&);
        WaterConfigSettingsV0();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<1, 2> mUnka659a5;
            ::ll::UntypedStorage<4, 8> mUnk8d00af;
            ::ll::UntypedStorage<4, 8> mUnk47ec65;
            ::ll::UntypedStorage<4, 8> mUnk3248b2;
            ::ll::UntypedStorage<4, 8> mUnk7592d7;
            ::ll::UntypedStorage<4, 8> mUnk722b0d;
            ::ll::UntypedStorage<4, 8> mUnkb4f86d;
            ::ll::UntypedStorage<4, 8> mUnk97a1a7;
            ::ll::UntypedStorage<4, 8> mUnk20c286;
            ::ll::UntypedStorage<4, 8> mUnk413ab8;
            ::ll::UntypedStorage<4, 8> mUnkfe5a1f;
            // NOLINTEND
#else // @header-generator platform
        struct WaterSurfaceParametersBase {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 8, std::optional<float>> mNSampleWidth;
            // NOLINTEND
        };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        public:
            // prevent constructor by default
            WaterSurfaceParametersBase& operator=(WaterSurfaceParametersBase const&);
            WaterSurfaceParametersBase(WaterSurfaceParametersBase const&);
            WaterSurfaceParametersBase();
        };

        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnke46d70;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSurfaceParameters& operator=(WaterSurfaceParameters const&);
            WaterSurfaceParameters(WaterSurfaceParameters const&);
            WaterSurfaceParameters();
        };
#else // @header-generator platform
        struct WaterSurfaceParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

        struct WaterSettings {
        public:
            // WaterSettings inner types declare
            // clang-format off
            struct CausticsParameters;
            // clang-format on

            // WaterSettings inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct CausticsParameters {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 40> mUnk4d3d5f;
                ::ll::UntypedStorage<4, 8>  mUnk1e3838;
                ::ll::UntypedStorage<4, 8>  mUnk456a47;
                ::ll::UntypedStorage<4, 8>  mUnk2d0aba;
                ::ll::UntypedStorage<1, 2>  mUnke14f68;
                // NOLINTEND

            public:
                // prevent constructor by default
                CausticsParameters& operator=(CausticsParameters const&);
                CausticsParameters(CausticsParameters const&);
                CausticsParameters();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnk69e561;
            ::ll::UntypedStorage<4, 28> mUnk2479ad;
            ::ll::UntypedStorage<8, 80> mUnkd2f9bc;
            ::ll::UntypedStorage<4, 96> mUnk535895;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
#else // @header-generator platform
            struct CausticsParameters {};
#endif // @header-generator platform
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk290fa3;
        ::ll::UntypedStorage<8, 256> mUnk5d3758;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV1& operator=(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1(WaterConfigSettingsV1 const&);
        WaterConfigSettingsV1();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    };

    struct WaterConfigSettingsV2 {
    public:
        // WaterConfigSettingsV2 inner types declare
        // clang-format off
        struct WaterSurfaceParameters;
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV2 inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct WaterSurfaceParameters : public ::WaterConfig::WaterConfigSettingsV1::WaterSurfaceParametersBase {};
#else // @header-generator platform
        struct WaterSurfaceParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 40> mUnka95010;
            ::ll::UntypedStorage<4, 28> mUnk43f246;
            ::ll::UntypedStorage<8, 80> mUnkced3c8;
            ::ll::UntypedStorage<4, 88> mUnke3f5f0;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk99ad3b;
        ::ll::UntypedStorage<8, 248> mUnk6b116a;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV2& operator=(WaterConfigSettingsV2 const&);
        WaterConfigSettingsV2(WaterConfigSettingsV2 const&);
        WaterConfigSettingsV2();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
#else // @header-generator platform
        struct WaterSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
    };

    struct WaterConfigSettingsV3 {
    public:
        // WaterConfigSettingsV3 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on

        // WaterConfigSettingsV3 inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct WaterSettings : public ::WaterConfig::WaterConfigSettingsV2::WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnk9acba2;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings(WaterSettings const&);
            WaterSettings();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk6401e6;
        ::ll::UntypedStorage<8, 256> mUnk910afd;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV3& operator=(WaterConfigSettingsV3 const&);
        WaterConfigSettingsV3(WaterConfigSettingsV3 const&);
        WaterConfigSettingsV3();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
#else // @header-generator platform
        struct WaterSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using WaterConfigSettingsV4 = ::WaterConfig::WaterConfigSettingsV4;
#else // @header-generator platform
    struct WaterConfigSettingsV4 {
    public:
        // WaterConfigSettingsV4 inner types declare
        // clang-format off
        struct WaterSettings;
        // clang-format on
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mCausticsTexturePtr;
    ::ll::TypedStorage<8, 248, ::WaterConfig::WaterConfigSettingsV4> mDefaultWaterSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, WaterConfig::WaterConfigSettingsV4>> mWaterSettings;
    ::ll::TypedStorage<8, 32, ::WaterConfig::CausticsTexture> mDefaultCausticsTexture;
    // NOLINTEND
#else // @header-generator platform
        // WaterConfigSettingsV4 inner types define
#if defined(LL_PLAT_C) // @header-generator platform
        struct WaterSettings {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk3e9d66;
            ::ll::UntypedStorage<4, 28> mUnkb13001;
            ::ll::UntypedStorage<8, 80> mUnke1be9f;
            ::ll::UntypedStorage<4, 88> mUnka06177;
            ::ll::UntypedStorage<4, 8>  mUnk2c2068;
            // NOLINTEND

        public:
            // prevent constructor by default
            WaterSettings& operator=(WaterSettings const&);
            WaterSettings();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI WaterSettings(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);

            MCNAPI ~WaterSettings();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::WaterConfig::WaterConfigSettingsV4::WaterSettings const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnkb22171;
        ::ll::UntypedStorage<8, 240> mUnk7272f7;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaterConfigSettingsV4& operator=(WaterConfigSettingsV4 const&);
        WaterConfigSettingsV4(WaterConfigSettingsV4 const&);
        WaterConfigSettingsV4();

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
#else // @header-generator platform
        struct WaterSettings {};
#endif // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CausticsTexture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk57ab7a;
        ::ll::UntypedStorage<4, 4>  mUnkc7e6dd;
        // NOLINTEND

    public:
        // prevent constructor by default
        CausticsTexture& operator=(CausticsTexture const&);
        CausticsTexture(CausticsTexture const&);
        CausticsTexture();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk1de33d;
    ::ll::UntypedStorage<8, 272> mUnkd0c7b7;
    ::ll::UntypedStorage<8, 64>  mUnk540034;
    ::ll::UntypedStorage<8, 32>  mUnka1f463;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfig& operator=(WaterConfig const&);
    WaterConfig(WaterConfig const&);
    WaterConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaterConfig() /*override*/;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WaterConfig(::IMinecraftEventing& eventing);

    MCNAPI bool containsWaterSettings(::HashedString const& biomeID) const;

    MCNAPI ::WaterConfig::WaterConfigSettingsV4 const& findWaterConfigSettings(::HashedString const& biomeID) const;

    MCNAPI ::mce::framebuilder::CausticsParameters getCausticsParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters getWaterParameters() const;

    MCNAPI ::dragon::framerenderer::modules::water::WaterParameters
    getWaterParameters(::HashedString const& biomeID) const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters() const;

    MCNAPI ::mce::framebuilder::WaterSurfaceParameters getWaterSurfaceParameters(::HashedString const& biomeID) const;

    MCNAPI void loadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void setDefaultWaterSettings(::WaterConfig::WaterConfigSettingsV4 const& inWaterSettings);

    MCNAPI bool setWaterConfigSettings(
        ::HashedString const&                       identifier,
        ::WaterConfig::WaterConfigSettingsV4 const& inWaterConfigSettings
    );

    MCNAPI void unloadTextures(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI bool validateAndSetCausticsTexture();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindWaterParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerConfigMappingChangeHandler(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer
    );

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::Puv::LoadResultAny $loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               dataJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI void $_setDefaultIdentifierImpl(::HashedString const& defaultIdentifier);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct CausticsTexture {};
#endif // @header-generator platform
#endif // @header-generator platform
};

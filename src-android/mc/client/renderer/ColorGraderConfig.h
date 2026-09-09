#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/external/render_dragon/frame_renderer/modules/TemperatureGrading.h"
#include "mc/external/render_dragon/frame_renderer/modules/Tonemapper.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct ColorGradingParameters; }
// clang-format on

class ColorGraderConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // ColorGraderConfig inner types declare
    // clang-format off
    struct ColorGradingParametersSrcV0;
    struct ColorGradingParametersSrcV1;
    // clang-format on

    // ColorGraderConfig inner types define
    struct ColorGradingParametersSrcV0 {
    public:
        // ColorGradingParametersSrcV0 inner types declare
        // clang-format off
        struct ColorGradingSettings;
        // clang-format on

        // ColorGradingParametersSrcV0 inner types define
        struct ColorGradingSettings {
        public:
            // ColorGradingSettings inner types declare
            // clang-format off
            struct ColorGradingDescription;
            struct Midtones;
            struct Highlights;
            struct Shadows;
            struct ColorGrading;
            struct ToneMapping;
            // clang-format on

            // ColorGradingSettings inner types define
            struct ColorGradingDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };

            struct Midtones {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 12, ::Vec3> mContrast;
                ::ll::TypedStorage<4, 12, ::Vec3> mGain;
                ::ll::TypedStorage<4, 12, ::Vec3> mGamma;
                ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
                ::ll::TypedStorage<4, 12, ::Vec3> mSaturation;
                // NOLINTEND
            };

            struct Highlights {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<1, 1, bool>    mEnabled;
                ::ll::TypedStorage<4, 4, float>   mHighlightsMin;
                ::ll::TypedStorage<4, 12, ::Vec3> mContrast;
                ::ll::TypedStorage<4, 12, ::Vec3> mGain;
                ::ll::TypedStorage<4, 12, ::Vec3> mGamma;
                ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
                ::ll::TypedStorage<4, 12, ::Vec3> mSaturation;
                // NOLINTEND
            };

            struct Shadows {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<1, 1, bool>    mEnabled;
                ::ll::TypedStorage<4, 4, float>   mShadowsMax;
                ::ll::TypedStorage<4, 12, ::Vec3> mContrast;
                ::ll::TypedStorage<4, 12, ::Vec3> mGain;
                ::ll::TypedStorage<4, 12, ::Vec3> mGamma;
                ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
                ::ll::TypedStorage<4, 12, ::Vec3> mSaturation;
                // NOLINTEND
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 60, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Midtones> mMidtones;
                ::ll::TypedStorage<4, 68, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Highlights> mHighlights;
                ::ll::TypedStorage<4, 68, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Shadows> mShadows;
                // clang-format on
                // NOLINTEND
            };

            struct ToneMapping {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::Tonemapper> mTonemapper;
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx&);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 24, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGradingDescription> mDescription;
            ::ll::TypedStorage<4, 196, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGrading> mColorGrading;
            ::ll::TypedStorage<4, 4, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ToneMapping> mToneMapping;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
        ::ll::TypedStorage<8, 224, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings> mColorGradingSettings;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ColorGradingParametersSrcV0();
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

    struct ColorGradingParametersSrcV1 {
    public:
        // ColorGradingParametersSrcV1 inner types declare
        // clang-format off
        struct ColorGradingSettings;
        // clang-format on

        // ColorGradingParametersSrcV1 inner types define
        struct ColorGradingSettings {
        public:
            // ColorGradingSettings inner types declare
            // clang-format off
            struct Temperature;
            struct ColorGrading;
            // clang-format on

            // ColorGradingSettings inner types define
            struct Temperature {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<1, 1, bool>  mEnabled;
                ::ll::TypedStorage<4, 4, float> mTemperature;
                ::ll::UntypedStorage<1, 1>      mType;
                // NOLINTEND

            public:
                // static variables
                // NOLINTBEGIN
                MCNAPI static bool& DEFAULT_ENABLED();

                MCNAPI static float& DEFAULT_TEMPERATURE();

                MCNAPI static ::dragon::framerenderer::modules::TemperatureGrading::Type& DEFAULT_TYPE();
                // NOLINTEND
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                // clang-format off
                ::ll::TypedStorage<4, 60, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Midtones> mMidtones;
                ::ll::TypedStorage<4, 68, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Highlights> mHighlights;
                ::ll::TypedStorage<4, 68, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::Shadows> mShadows;
                ::ll::TypedStorage<4, 12, ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings::Temperature> mTemperature;
                // clang-format on
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 24, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ColorGradingDescription> mDescription;
            ::ll::TypedStorage<4, 208, ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings::ColorGrading> mColorGrading;
            ::ll::TypedStorage<4, 4, ::ColorGraderConfig::ColorGradingParametersSrcV0::ColorGradingSettings::ToneMapping> mToneMapping;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
        ::ll::TypedStorage<8, 240, ::ColorGraderConfig::ColorGradingParametersSrcV1::ColorGradingSettings> mColorGradingSettings;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ColorGradingParametersSrcV1();

        MCNAPI ~ColorGradingParametersSrcV1();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ColorGradingParametersSrcV1 = ::ColorGraderConfig::ColorGradingParametersSrcV1;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 264, ::ColorGraderConfig::ColorGradingParametersSrcV1> mDefaultColorGradingSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ColorGraderConfig::ColorGradingParametersSrcV1>> mColorGradingSettings;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGraderConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ColorGraderConfig();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void _setDefaultIdentifierImpl(::HashedString const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters getColorGradingParameters() const;

    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters
    getColorGradingParameters(::ColorGraderConfig::ColorGradingParametersSrcV1 const&) const;

    MCNAPI ::dragon::framerenderer::modules::Tonemapper getTonemapper() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fillDefaultTemperatureParameters(
        ::ColorGraderConfig::ColorGradingParametersSrcV0 const&,
        ::ColorGraderConfig::ColorGradingParametersSrcV1&
    );

    MCNAPI static void bindColorGradingParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PAYLOAD_KEY();
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

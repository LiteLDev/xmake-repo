#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
class LinkedAssetValidator;
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct ColorGradingParameters; }
// clang-format on

class ColorGraderConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
#else // @header-generator platform
class ColorGraderConfig {
#endif // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            struct ColorGradingDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct ColorGradingDescription {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk320344;
                // NOLINTEND
#else // @header-generator platform
            struct ColorGradingDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // prevent constructor by default
                ColorGradingDescription& operator=(ColorGradingDescription const&);
                ColorGradingDescription(ColorGradingDescription const&);
                ColorGradingDescription();
            };
#else // @header-generator platform
            struct Midtones {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct Midtones {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 12> mUnk833134;
                ::ll::UntypedStorage<4, 12> mUnkf909c6;
                ::ll::UntypedStorage<4, 12> mUnkc5e1ca;
                ::ll::UntypedStorage<4, 12> mUnk2b001c;
                ::ll::UntypedStorage<4, 12> mUnkcbd00f;
                // NOLINTEND
#else // @header-generator platform
            struct Highlights {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // prevent constructor by default
                Midtones& operator=(Midtones const&);
                Midtones(Midtones const&);
                Midtones();
            };
#else // @header-generator platform
            struct Shadows {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct Highlights {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1>  mUnk55b215;
                ::ll::UntypedStorage<4, 4>  mUnk79d47c;
                ::ll::UntypedStorage<4, 12> mUnkd2d9a1;
                ::ll::UntypedStorage<4, 12> mUnk578ac0;
                ::ll::UntypedStorage<4, 12> mUnk650260;
                ::ll::UntypedStorage<4, 12> mUnkb18549;
                ::ll::UntypedStorage<4, 12> mUnk862a52;
                // NOLINTEND
#else // @header-generator platform
            struct ColorGrading {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // prevent constructor by default
                Highlights& operator=(Highlights const&);
                Highlights(Highlights const&);
                Highlights();
            };

            struct Shadows {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1>  mUnkaf678f;
                ::ll::UntypedStorage<4, 4>  mUnke27130;
                ::ll::UntypedStorage<4, 12> mUnk7eb0a2;
                ::ll::UntypedStorage<4, 12> mUnk6afdc1;
                ::ll::UntypedStorage<4, 12> mUnk8529d1;
                ::ll::UntypedStorage<4, 12> mUnkf96ae7;
                ::ll::UntypedStorage<4, 12> mUnk48199c;
                // NOLINTEND

            public:
                // prevent constructor by default
                Shadows& operator=(Shadows const&);
                Shadows(Shadows const&);
                Shadows();
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 60> mUnk175cdf;
                ::ll::UntypedStorage<4, 68> mUnke95629;
                ::ll::UntypedStorage<4, 68> mUnkbc8d88;
                // NOLINTEND

            public:
                // prevent constructor by default
                ColorGrading& operator=(ColorGrading const&);
                ColorGrading(ColorGrading const&);
                ColorGrading();
            };

            struct ToneMapping {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 4> mUnkf7fc1e;
                // NOLINTEND

            public:
                // prevent constructor by default
                ToneMapping& operator=(ToneMapping const&);
                ToneMapping(ToneMapping const&);
                ToneMapping();

            public:
                // static functions
                // NOLINTBEGIN
                MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32>  mUnk86b00f;
            ::ll::UntypedStorage<4, 196> mUnk795e90;
            ::ll::UntypedStorage<4, 4>   mUnkfbe4a5;
            // NOLINTEND

        public:
            // prevent constructor by default
            ColorGradingSettings& operator=(ColorGradingSettings const&);
            ColorGradingSettings(ColorGradingSettings const&);
            ColorGradingSettings();
#else // @header-generator platform
            struct ToneMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk20c2e5;
        ::ll::UntypedStorage<8, 232> mUnk285f2d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV0& operator=(ColorGradingParametersSrcV0 const&);
        ColorGradingParametersSrcV0(ColorGradingParametersSrcV0 const&);
        ColorGradingParametersSrcV0();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            struct Temperature {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::TypedStorage<1, 1, bool>  mEnabled;
                ::ll::TypedStorage<4, 4, float> mTemperature;
                ::ll::UntypedStorage<1, 1>      mType;
                // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            struct Temperature {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<1, 1> mUnk702a21;
                ::ll::UntypedStorage<4, 4> mUnkaa2f73;
                ::ll::UntypedStorage<1, 1> mUnk4f19d4;
                // NOLINTEND
#else // @header-generator platform
            struct Temperature {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            public:
                // prevent constructor by default
                Temperature& operator=(Temperature const&);
                Temperature(Temperature const&);
                Temperature();
            };

            struct ColorGrading {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 60> mUnkcf6438;
                ::ll::UntypedStorage<4, 68> mUnk94a91a;
                ::ll::UntypedStorage<4, 68> mUnkfe8f18;
                ::ll::UntypedStorage<4, 12> mUnk67bf8c;
                // NOLINTEND

            public:
                // prevent constructor by default
                ColorGrading& operator=(ColorGrading const&);
                ColorGrading(ColorGrading const&);
                ColorGrading();
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32>  mUnkbcafa9;
            ::ll::UntypedStorage<4, 208> mUnkf0ef1e;
            ::ll::UntypedStorage<4, 4>   mUnk901c49;
            // NOLINTEND

        public:
            // prevent constructor by default
            ColorGradingSettings& operator=(ColorGradingSettings const&);
            ColorGradingSettings(ColorGradingSettings const&);
            ColorGradingSettings();
#else // @header-generator platform
            struct ColorGrading {};
#endif // @header-generator platform
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk492f52;
        ::ll::UntypedStorage<8, 248> mUnka408d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorGradingParametersSrcV1& operator=(ColorGradingParametersSrcV1 const&);
        ColorGradingParametersSrcV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ColorGradingParametersSrcV1(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ColorGraderConfig::ColorGradingParametersSrcV1 const&);
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 280> mUnkc72deb;
    ::ll::UntypedStorage<8, 64>  mUnkf20260;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGraderConfig& operator=(ColorGraderConfig const&);
    ColorGraderConfig(ColorGraderConfig const&);
    ColorGraderConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ColorGraderConfig() /*override*/ = default;

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
    MCNAPI ::ColorGraderConfig::ColorGradingParametersSrcV1 const&
    findColorGradingSettings(::HashedString const& identifier) const;

    MCNAPI ::dragon::framerenderer::modules::ColorGradingParameters
    getColorGradingParameters(::ColorGraderConfig::ColorGradingParametersSrcV1 const& settings) const;

    MCNAPI bool setColorGradingConfigSettings(
        ::HashedString const&                                   identifier,
        ::ColorGraderConfig::ColorGradingParametersSrcV1 const& inColorGradingSettings
    );

    MCNAPI void
    setDefaultColorGradingSettings(::ColorGraderConfig::ColorGradingParametersSrcV1 const& inColorGradingSettings);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fillDefaultTemperatureParameters(
        ::ColorGraderConfig::ColorGradingParametersSrcV0 const&,
        ::ColorGraderConfig::ColorGradingParametersSrcV1& dst
    );

    MCNAPI static void bindColorGradingParameters(::cereal::ReflectionCtx& ctx);

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
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

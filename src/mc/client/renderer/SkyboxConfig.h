#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/util/cereal_helpers/Keyframes.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace mce::framebuilder { struct SkyboxParameters; }
// clang-format on

class SkyboxConfig : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
#else // @header-generator platform
class SkyboxConfig {
#endif // @header-generator platform
public:
    // SkyboxConfig inner types declare
    // clang-format off
    struct SkyboxConfigSettingsV0;
    // clang-format on

    // SkyboxConfig inner types define
    struct SkyboxConfigSettingsV0 {
    public:
        // SkyboxConfigSettingsV0 inner types declare
        // clang-format off
        struct SkyboxParameters;
        // clang-format on

        // SkyboxConfigSettingsV0 inner types define
        struct SkyboxParameters {
        public:
            // SkyboxParameters inner types declare
            // clang-format off
            struct Description;
            struct Lighting;
            // clang-format on

            // SkyboxParameters inner types define
#if defined(LL_PLAT_A) // @header-generator platform
            struct Description {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 24> mIdentifier;
                // NOLINTEND
            };
#else // @header-generator platform
            struct Description {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
            struct Lighting {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32>     mAmbientLightIlluminance;
                ::ll::TypedStorage<4, 4, float> mSkyAmbientLightContribution;
                ::ll::TypedStorage<4, 4, float> mDirectionalLightContribution;
                ::ll::TypedStorage<1, 1, bool>  mAtmosphericScatteringEnabled;
                ::ll::TypedStorage<1, 1, bool>  mVolumetricScatteringEnabled;
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters::Description>
                                                                                                          mDescription;
            ::ll::TypedStorage<8, 48, ::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters::Lighting> mLighting;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI SkyboxParameters();

            MCNAPI SkyboxParameters(::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters const&);

            MCNAPI ~SkyboxParameters();
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor();

            MCNAPI void* $ctor(::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters const&);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
#else // @header-generator platform
            struct Lighting {};
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                              mFormatVersion;
        ::ll::TypedStorage<8, 72, ::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters> mSkyboxParameters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SkyboxConfigSettingsV0(::SkyboxConfig::SkyboxConfigSettingsV0&&);

        MCNAPI ::HashedString getIdentifierName() const;

        MCNAPI ~SkyboxConfigSettingsV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SkyboxConfig::SkyboxConfigSettingsV0&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using SkyboxConfigSettingsV0 = ::SkyboxConfig::SkyboxConfigSettingsV0;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SkyboxConfig::SkyboxConfigSettingsV0>                                 mDefaultSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, SkyboxConfig::SkyboxConfigSettingsV0>> mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    SkyboxConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SkyboxConfig();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void _setDefaultIdentifierImpl(::HashedString const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SkyboxConfig(::IMinecraftEventing&);

    MCNAPI bool containsSkyboxSettings(::HashedString const&) const;

    MCNAPI std::unordered_map<HashedString, SkyboxConfig::SkyboxConfigSettingsV0> const& getAllSkyboxSettings() const;

    MCNAPI ::mce::framebuilder::SkyboxParameters getSkyboxParameters(float const) const;

    MCNAPI ::mce::framebuilder::SkyboxParameters getSkyboxParameters(::HashedString const&, float const) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindSkyboxParameters(::cereal::ReflectionCtx&);

    MCNAPI static ::mce::framebuilder::SkyboxParameters
    getSkyboxParameters(::SkyboxConfig::SkyboxConfigSettingsV0::SkyboxParameters const&, float const);
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
#endif // @header-generator platform
};

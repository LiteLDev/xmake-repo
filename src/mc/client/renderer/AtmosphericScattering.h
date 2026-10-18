#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/EditorRenderingModifiableConfig.h"
#include "mc/client/renderer/RenderingResourcePackJsonConfig.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/shared_types/Color255RGB.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/util/cereal_helpers/TimeKeyframes.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct AtmosphericScatteringParameters; }
// clang-format on

class AtmosphericScattering : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
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
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct AtmosphericScatteringParameters; }
// clang-format on

class AtmosphericScattering : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
#else // @header-generator platform
class AtmosphericScattering {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // AtmosphericScattering inner types declare
    // clang-format off
    struct AtmosphericScatteringDescription;
    struct HorizonBlendKeyFrames;
#if defined(LL_PLAT_A) // @header-generator platform
    struct AtmosphericScatteringSettingsV1;
#else // @header-generator platform
#endif // @header-generator platform
    struct AtmosphericScatteringSettingsV0;
#if defined(LL_PLAT_A) // @header-generator platform
    template<ushort T0, ushort T1, ushort T2> struct AtmosphericScatteringConfigSettingsBase;
    struct AtmosphericScatteringConfigSettingsV1;
#else // @header-generator platform
    struct AtmosphericScatteringSettingsV1;
#if defined(LL_PLAT_C) // @header-generator platform
    template<int T0, int T1, int T2> struct AtmosphericScatteringConfigSettingsBase;
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    struct AtmosphericScatteringConfigSettingsV0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct AtmosphericScatteringConfigSettingsV1;
#endif // @header-generator platform
    // clang-format on

    // AtmosphericScattering inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct AtmosphericScatteringDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mIdentifier;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct AtmosphericScatteringDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk52a585;
        // NOLINTEND
#else // @header-generator platform
    struct AtmosphericScatteringDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        AtmosphericScatteringDescription& operator=(AtmosphericScatteringDescription const&);
        AtmosphericScatteringDescription(AtmosphericScatteringDescription const&);
        AtmosphericScatteringDescription();
#else // @header-generator platform
    struct HorizonBlendKeyFrames {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct HorizonBlendKeyFrames {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mMin;
        ::ll::UntypedStorage<8, 40> mStart;
        ::ll::UntypedStorage<8, 40> mMieStart;
        ::ll::UntypedStorage<8, 40> mMax;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AtmosphericScatteringDescription();
        // NOLINTEND
#else // @header-generator platform
    struct AtmosphericScatteringSettingsV0 {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
#else // @header-generator platform
    struct AtmosphericScatteringSettingsV1 {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI HorizonBlendKeyFrames(::AtmosphericScattering::HorizonBlendKeyFrames&&);
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
    struct AtmosphericScatteringConfigSettingsV0 {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~HorizonBlendKeyFrames();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::HorizonBlendKeyFrames&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringSettingsV1 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::AtmosphericScattering::AtmosphericScatteringDescription>    mDescription;
        ::ll::TypedStorage<8, 168, std::optional<AtmosphericScattering::HorizonBlendKeyFrames>> mHorizonBlendKeyFrames;
        ::ll::UntypedStorage<8, 40>                                                             mSkyZenithColor;
        ::ll::UntypedStorage<8, 40>                                                             mSkyHorizonColor;
        ::ll::UntypedStorage<8, 40>                                                             mRayleighStrength;
        ::ll::UntypedStorage<8, 40>                                                             mSunMieStrength;
        ::ll::UntypedStorage<8, 40>                                                             mMoonMieStrength;
        ::ll::UntypedStorage<8, 40>                                                             mSunGlareShape;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringSettingsV1(AtmosphericScatteringSettingsV1 const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV1(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV1&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV1&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI ~AtmosphericScatteringSettingsV1();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV1&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringSettingsV0 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, std::optional<AtmosphericScattering::AtmosphericScatteringDescription>> mDescription;
        ::ll::TypedStorage<8, 168, std::optional<AtmosphericScattering::HorizonBlendKeyFrames>> mHorizonBlendKeyFrames;
        ::ll::UntypedStorage<8, 40>                                                             mSkyZenithColor;
        ::ll::UntypedStorage<8, 40>                                                             mSkyHorizonColor;
        ::ll::UntypedStorage<8, 40>                                                             mRayleighStrength;
        ::ll::UntypedStorage<8, 40>                                                             mSunMieStrength;
        ::ll::UntypedStorage<8, 40>                                                             mMoonMieStrength;
        ::ll::UntypedStorage<8, 40>                                                             mSunGlareShape;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV0(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI AtmosphericScatteringSettingsV0(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV0&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);

        MCNAPI ::AtmosphericScattering::AtmosphericScatteringSettingsV0&
        operator=(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI ~AtmosphericScatteringSettingsV0();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV0 const&);

        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV0&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    template <ushort T0, ushort T1, ushort T2>
    struct AtmosphericScatteringConfigSettingsBase {};

    struct AtmosphericScatteringConfigSettingsV1
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<(ushort)1, (ushort)26, (ushort)20> {
    public:
        // AtmosphericScatteringConfigSettingsV1 inner types define
        using AtmosphericScatteringSettings = ::AtmosphericScattering::AtmosphericScatteringSettingsV1;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 432, ::AtmosphericScattering::AtmosphericScatteringSettingsV1>
            mAtmosphericScatteringSettings;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AtmosphericScatteringConfigSettingsV1();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringConfigSettingsV0
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<(ushort)1, (ushort)21, (ushort)40> {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 448, std::optional<AtmosphericScattering::AtmosphericScatteringSettingsV0>> mAtmosphericScatteringSettings;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AtmosphericScatteringConfigSettingsV0();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using AtmosphericScatteringConfigSettingsV1 = ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 456> mDefaultAtmosphereSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, AtmosphericScattering::AtmosphericScatteringConfigSettingsV1>> mAtmosphereSettings;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScattering();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AtmosphericScattering();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void _setDefaultIdentifierImpl(::HashedString const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AtmosphericScattering(::IMinecraftEventing&);

    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters calculateAtmosphericScatteringParameters(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const&,
        float const
    ) const;

    MCNAPI bool containsAtmosphereSettings(::HashedString const&) const;

    MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const&
    findAtmosphereSettings(::HashedString const&) const;

    MCNAPI std::unordered_map<HashedString, AtmosphericScattering::AtmosphericScatteringConfigSettingsV1> const&
           getAtmosphereSettings() const;

    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters
    getAtmosphericScatteringParameters(float) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindAtmosphericParameters(::cereal::ReflectionCtx&);
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
    struct HorizonBlendKeyFrames {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkc4a38e;
        ::ll::UntypedStorage<8, 40> mUnk709e9b;
        ::ll::UntypedStorage<8, 40> mUnk38b4c9;
        ::ll::UntypedStorage<8, 40> mUnk8c93e7;
        // NOLINTEND

    public:
        // prevent constructor by default
        HorizonBlendKeyFrames& operator=(HorizonBlendKeyFrames const&);
        HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);
        HorizonBlendKeyFrames();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~HorizonBlendKeyFrames();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AtmosphericScatteringSettingsV0 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>  mUnkaf0a30;
        ::ll::UntypedStorage<8, 168> mUnk33b0b8;
        ::ll::UntypedStorage<8, 40>  mUnk35cc9c;
        ::ll::UntypedStorage<8, 40>  mUnkc80dc6;
        ::ll::UntypedStorage<8, 40>  mUnkee9ad5;
        ::ll::UntypedStorage<8, 40>  mUnk221ee7;
        ::ll::UntypedStorage<8, 40>  mUnkcc3669;
        ::ll::UntypedStorage<8, 40>  mUnk68e5c9;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringSettingsV0& operator=(AtmosphericScatteringSettingsV0 const&);
        AtmosphericScatteringSettingsV0(AtmosphericScatteringSettingsV0 const&);
        AtmosphericScatteringSettingsV0();
    };

    struct AtmosphericScatteringSettingsV1 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnk454090;
        ::ll::UntypedStorage<8, 168> mUnk7085e2;
        ::ll::UntypedStorage<8, 40>  mUnka90ed5;
        ::ll::UntypedStorage<8, 40>  mUnk6c3bef;
        ::ll::UntypedStorage<8, 40>  mUnk54e796;
        ::ll::UntypedStorage<8, 40>  mUnk2eb184;
        ::ll::UntypedStorage<8, 40>  mUnk5dbb83;
        ::ll::UntypedStorage<8, 40>  mUnk32817d;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringSettingsV1& operator=(AtmosphericScatteringSettingsV1 const&);
        AtmosphericScatteringSettingsV1();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AtmosphericScatteringSettingsV1(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);

        MCNAPI ~AtmosphericScatteringSettingsV1();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtmosphericScattering::AtmosphericScatteringSettingsV1 const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    template <int T0, int T1, int T2>
    struct AtmosphericScatteringConfigSettingsBase {};

    struct AtmosphericScatteringConfigSettingsV0
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<1, 21, 40> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 456> mUnk2263b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringConfigSettingsV0& operator=(AtmosphericScatteringConfigSettingsV0 const&);
        AtmosphericScatteringConfigSettingsV0(AtmosphericScatteringConfigSettingsV0 const&);
        AtmosphericScatteringConfigSettingsV0();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

    struct AtmosphericScatteringConfigSettingsV1
    : public ::AtmosphericScattering::AtmosphericScatteringConfigSettingsBase<1, 26, 20> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 440> mUnk99308a;
        // NOLINTEND

    public:
        // prevent constructor by default
        AtmosphericScatteringConfigSettingsV1& operator=(AtmosphericScatteringConfigSettingsV1 const&);
        AtmosphericScatteringConfigSettingsV1(AtmosphericScatteringConfigSettingsV1 const&);
        AtmosphericScatteringConfigSettingsV1();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 472> mUnkfde455;
    ::ll::UntypedStorage<8, 64>  mUnkc7b1be;
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScattering& operator=(AtmosphericScattering const&);
    AtmosphericScattering(AtmosphericScattering const&);
    AtmosphericScattering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AtmosphericScattering() /*override*/ = default;

    virtual void loadDataSync(
        ::cereal::ReflectionCtx const&                     ctx,
        ::ResourcePackManager&                             resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual ::Puv::LoadResultAny loadFromString(
        ::cereal::ReflectionCtx const&                     ctx,
        ::std::string const&                               atmosphereJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    ) /*override*/;

    virtual void _setDefaultIdentifierImpl(::HashedString const& defaultIdentifier) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::AtmosphericScatteringParameters calculateAtmosphericScatteringParameters(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& atmosphereSettings,
        float                                                                 timeOfDay
    ) const;

    MCNAPI ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const&
    findAtmosphereSettings(::HashedString const& identifier) const;

    MCNAPI bool setAtmosphereSettings(
        ::HashedString const&                                                 identifier,
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& inAtmosphereSettings
    );

    MCNAPI void setDefaultAtmosphereSettings(
        ::AtmosphericScattering::AtmosphericScatteringConfigSettingsV1 const& inAtmosphereSettings
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
        ::std::string const&                               atmosphereJson,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI void $_setDefaultIdentifierImpl(::HashedString const& defaultIdentifier);
    // NOLINTEND
#else // @header-generator platform
    struct AtmosphericScatteringConfigSettingsV1 {};
#endif // @header-generator platform
#endif // @header-generator platform
};

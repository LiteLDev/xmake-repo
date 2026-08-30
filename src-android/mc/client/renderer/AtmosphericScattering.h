#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // AtmosphericScattering inner types declare
    // clang-format off
    struct AtmosphericScatteringDescription;
    struct HorizonBlendKeyFrames;
    struct AtmosphericScatteringSettingsV1;
    struct AtmosphericScatteringSettingsV0;
    template<ushort T0, ushort T1, ushort T2> struct AtmosphericScatteringConfigSettingsBase;
    struct AtmosphericScatteringConfigSettingsV1;
    struct AtmosphericScatteringConfigSettingsV0;
    // clang-format on

    // AtmosphericScattering inner types define
    struct AtmosphericScatteringDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mIdentifier;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

    struct HorizonBlendKeyFrames {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mMin;
        ::ll::UntypedStorage<8, 40> mStart;
        ::ll::UntypedStorage<8, 40> mMieStart;
        ::ll::UntypedStorage<8, 40> mMax;
        // NOLINTEND

    public:
        // prevent constructor by default
        HorizonBlendKeyFrames(HorizonBlendKeyFrames const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI HorizonBlendKeyFrames(::AtmosphericScattering::HorizonBlendKeyFrames&&);

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
};

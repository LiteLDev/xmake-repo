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

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class LightingGroup : public ::RenderingResourcePackJsonConfig, public ::EditorRenderingModifiableConfig {
public:
    // LightingGroup inner types declare
    // clang-format off
    struct LightingDescription;
    struct StaticDirectionalLight;
    struct Emissive;
    template<ushort T0, ushort T1, ushort T2> struct LightingImpl;
    // clang-format on

    // LightingGroup inner types define
    enum ColorKeyFrameType : uchar {
        RGBA = 0,
        RGB  = 1,
    };

    struct LightingDescription {
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

    struct StaticDirectionalLight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                       mIlluminance;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mColor;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

    struct Emissive {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mDesaturation;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

    template <ushort T0, ushort T1, ushort T2>
    struct LightingImpl {};

    using Lighting = ::LightingGroup::LightingImpl<(ushort)1, (ushort)26, (ushort)0>;

    using LightingV4 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)26, (ushort)0>;

    using LightingV0 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)40>;

    using LightingV1 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)60>;

    using LightingV2 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)70>;

    using LightingV3 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)80>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mDefaultLightingSettings;
    ::ll::UntypedStorage<8, 40>  mLightingSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    LightingGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LightingGroup();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    virtual void _setDefaultIdentifierImpl(::HashedString const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::Color getAmbientColor(float) const;

    MCNAPI float getAmbientIlluminance(float) const;

    MCNAPI ::mce::Color getEndChaosColor() const;

    MCNAPI float getEndChaosIlluminance() const;

    MCNAPI ::mce::Color getMoonColor(float) const;

    MCNAPI float getMoonIlluminance(float) const;

    MCNAPI float getOrbitalOffsetDegrees(float) const;

    MCNAPI float getSkyIntensity(float) const;

    MCNAPI ::mce::Color getSunColor(float) const;

    MCNAPI float getSunIlluminance(float) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _copyDirectionalLightColors(
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)40> const&,
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)60>&
    );

    MCNAPI static void _fillDefaultSkyIntensity(
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)60> const&,
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)70>&
    );

    MCNAPI static void _moveDirectionalLightsToOrbital(
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)70> const&,
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)80>&
    );

    MCNAPI static void _upgradeV3toV4(
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)21, (ushort)80> const&,
        ::LightingGroup::LightingImpl<(ushort)1, (ushort)26, (ushort)0>&
    );

    MCNAPI static void bindLightingParameters(::cereal::ReflectionCtx&);
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

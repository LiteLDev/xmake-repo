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
#else // @header-generator platform
class LightingGroup {
#endif // @header-generator platform
public:
    // LightingGroup inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct LightingDescription;
    struct StaticDirectionalLight;
#else // @header-generator platform
    template<int T0, int T1, int T2> struct AmbientLightImpl;
#endif // @header-generator platform
    struct Emissive;
#if defined(LL_PLAT_A) // @header-generator platform
    template<ushort T0, ushort T1, ushort T2> struct LightingImpl;
#else // @header-generator platform
    template<int T0> struct KeyframedDirectionalLightImpl;
    struct LightingDescription;
    template<int T0, int T1, int T2> struct LightingImpl;
    template<int T0> struct OrbitalLights;
    template<int T0, int T1, int T2> struct SkyIntensityImpl;
    struct StaticDirectionalLight;
#endif // @header-generator platform
    // clang-format on

    // LightingGroup inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum ColorKeyFrameType : uchar {
        RGBA = 0,
        RGB  = 1,
    };
#else // @header-generator platform
    enum class ColorKeyFrameType : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct LightingDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mIdentifier;
        // NOLINTEND
#else // @header-generator platform
    template <int T0, int T1, int T2>
    struct AmbientLightImpl {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };
#else // @header-generator platform
    struct Emissive {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct StaticDirectionalLight {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                       mIlluminance;
        ::ll::TypedStorage<4, 16, ::SharedTypes::Color255RGB> mColor;
        // NOLINTEND
#else // @header-generator platform
    template <int T0>
    struct KeyframedDirectionalLightImpl {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };
#else // @header-generator platform
    struct LightingDescription {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    template <int T0, int T1, int T2>
#endif // @header-generator platform
    struct LightingImpl {};

#if defined(LL_PLAT_A) // @header-generator platform
    using Lighting = ::LightingGroup::LightingImpl<(ushort)1, (ushort)26, (ushort)0>;
#else // @header-generator platform
    template <int T0>
    struct OrbitalLights {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using LightingV4 = ::LightingGroup::LightingImpl<(ushort)1, (ushort)26, (ushort)0>;
#else // @header-generator platform
    template <int T0, int T1, int T2>
    struct SkyIntensityImpl {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct StaticDirectionalLight {};
#endif // @header-generator platform
};

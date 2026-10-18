#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ColorFrame.h"
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct ColorFrame; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class ParticleAppearanceTintingComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleAppearanceTintingComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
#else // @header-generator platform
class ParticleAppearanceTintingComponent {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ParticleAppearanceTintingComponent inner types declare
    // clang-format off
    struct ParticleColors;
    // clang-format on

    // ParticleAppearanceTintingComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ParticleColors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString const>          mName;
        ::ll::TypedStorage<8, 24, std::string const>             mAppearanceTintColors;
        ::ll::TypedStorage<8, 64, std::array<ExpressionNode, 4>> mOriginalColor;
        ::ll::TypedStorage<1, 1, bool const>                     mAlpha;
        ::ll::TypedStorage<4, 16, float[4]>                      mCol;
        ::ll::TypedStorage<4, 16, float[4]>                      mParticleColorFloat;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ParticleSystem::ParticleAppearanceTintingComponent::ParticleColors>> mParticleColors;
    ::ll::TypedStorage<1, 1, bool const> mAlpha;
    ::ll::TypedStorage<4, 16, float[4]> mCol;
    ::ll::TypedStorage<4, 16, float[4]> mParticleColorFloat;
    ::ll::TypedStorage<8, 24, std::vector<ParticleSystem::ColorFrame>> mColorFrames;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mInterpolantExpr;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleAppearanceTintingComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual void updateParticleAppearance(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, ::RenderParams&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _parseColorBlock(::ConstDeserializeDataParams const&, float);

    MCNAPI void _parseGradientBlock(::ConstDeserializeDataParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const&);

    MCNAPI void $updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle&,
        ::RenderParams&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ParticleColors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString const>              mName;
        ::ll::TypedStorage<8, 32, ::std::string const>               mAppearanceTintColors;
        ::ll::TypedStorage<8, 64, ::std::array<::ExpressionNode, 4>> mOriginalColor;
        ::ll::TypedStorage<1, 1, bool const>                         mAlpha;
        ::ll::TypedStorage<4, 16, float[4]>                          mCol;
        ::ll::TypedStorage<4, 16, float[4]>                          mParticleColorFloat;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ParticleAppearanceTintingComponent::ParticleColors>>
                                                                           mParticleColors;
    ::ll::TypedStorage<1, 1, bool const>                                   mAlpha;
    ::ll::TypedStorage<4, 16, float[4]>                                    mCol;
    ::ll::TypedStorage<4, 16, float[4]>                                    mParticleColorFloat;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ColorFrame>> mColorFrames;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                            mInterpolantExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual void updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _parseColorBlock(::ConstDeserializeDataParams const& deserializeDataParams, float value);

    MCAPI void _parseGradientBlock(::ConstDeserializeDataParams const& deserializeDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void $updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND
#else // @header-generator platform
    struct ParticleColors {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem

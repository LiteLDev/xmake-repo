#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ParticleSystem {

class ParticleAppearanceTintingComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // ParticleAppearanceTintingComponent inner types declare
    // clang-format off
    struct ParticleColors;
    // clang-format on

    // ParticleAppearanceTintingComponent inner types define
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
};

} // namespace ParticleSystem

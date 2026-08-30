#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/FlipBook.h"
#include "mc/client/particlesystem/particle/components/ParticleAppearanceBillboardBaseComponent.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace Json { class Value; }
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceBillboardComponent : public ::ParticleSystem::ParticleAppearanceBillboardBaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::array<ExpressionNode, 2>> mSizeExpr;
    ::ll::TypedStorage<8, 40, ::HashedString>                mFacing;
    ::ll::TypedStorage<8, 32, std::array<ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 32, std::array<ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<4, 8, ::Vec2>                         mAssumedTextureDimensions;
    ::ll::TypedStorage<1, 1, bool>                           mUseFlipBook;
    ::ll::TypedStorage<8, 80, ::ParticleSystem::FlipBook>    mFlipBook;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleAppearanceBillboardComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual void updateParticleAppearance(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, ::RenderParams&);

    virtual void updateEmitterAppearance(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
    // clang-format on
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

    MCNAPI void $updateEmitterAppearance(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

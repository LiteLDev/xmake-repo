#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterLifetimeOnceComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mActivationTimeExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterLifetimeOnceComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual bool emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    virtual bool hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual bool isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);
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

    MCNAPI bool $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    MCNAPI bool $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    MCNAPI bool $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

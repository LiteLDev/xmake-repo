#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
// clang-format on

namespace ParticleSystem {

class EmitterInitialComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterInitialComponentBase() = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual void setupInitial(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&) = 0;

    virtual void update(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI void $update(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
    // NOLINTEND
};

} // namespace ParticleSystem

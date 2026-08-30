#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleLifetimeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleLifetimeComponentBase() = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual bool hasParticleExpired(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, ::RenderParams&);

    virtual void setParticleLifetime(::ParticleSystem::CommonParticle&, ::RenderParams&);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&);

    virtual void handleTimelineEvents(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const, std::chrono::duration<long long, std::ratio<1, 1000000000>>);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI bool $hasParticleExpired(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle&,
        ::RenderParams&
    );

    MCNAPI void $setParticleLifetime(::ParticleSystem::CommonParticle&, ::RenderParams&);

    MCNAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&);

    MCNAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&);

    MCNAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>
    );
    // NOLINTEND
};

} // namespace ParticleSystem

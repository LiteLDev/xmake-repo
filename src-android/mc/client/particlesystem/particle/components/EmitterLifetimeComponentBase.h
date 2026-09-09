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

class EmitterLifetimeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EmitterLifetimeComponentBase() = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual bool emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    virtual bool hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual bool isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&);

    virtual void handleTimelineEvents(::ParticleSystem::ComponentAccessParticleEmitter&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const, std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    virtual void handleTravelDistanceEvents(::ParticleSystem::ComponentAccessParticleEmitter&, float, float);
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI bool $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    MCNAPI bool $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    MCNAPI bool $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    MCNAPI void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter&);

    MCNAPI void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter&);

    MCNAPI void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>
    );

    MCNAPI void $handleTravelDistanceEvents(::ParticleSystem::ComponentAccessParticleEmitter&, float, float);
    // NOLINTEND
};

} // namespace ParticleSystem

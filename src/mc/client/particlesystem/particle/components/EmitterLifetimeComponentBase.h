#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EmitterLifetimeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterLifetimeComponentBase() /*override*/ = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const /*override*/;

    virtual bool
    emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    virtual bool
    hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    virtual bool
    isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    virtual void handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    virtual void handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    virtual void handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    virtual void handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCFOLD bool
    $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCFOLD void $handleCreation(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCFOLD void $handleExpiration(::ParticleSystem::ComponentAccessParticleEmitter& emitter);

    MCFOLD void $handleTimelineEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::std::chrono::nanoseconds const                  lastAge,
        ::std::chrono::nanoseconds                        age
    );

    MCFOLD void $handleTravelDistanceEvents(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        float                                             lastDistance,
        float                                             distance
    );
    // NOLINTEND
};
#else // @header-generator platform
class EmitterLifetimeComponentBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

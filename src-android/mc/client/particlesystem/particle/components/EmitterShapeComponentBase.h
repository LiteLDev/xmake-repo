#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
class Vec3;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
// clang-format on

namespace ParticleSystem {

class EmitterShapeComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EmitterShapeComponentBase() = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual void getNextParticleSpawnOffsetAndDirection(::Vec3&, ::Vec3&, ::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;
    // NOLINTEND
};

} // namespace ParticleSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EffectComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace ParticleSystem { struct CommonParticle; }
// clang-format on

namespace ParticleSystem {

class ParticleInitialComponentBase : public ::ParticleSystem::EffectComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleInitialComponentBase() = default;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual void setInitialState(::ParticleSystem::CommonParticle&, ::RenderParams&) = 0;

    virtual void update(::RenderParams&);

    virtual void renderPreparation(::RenderParams&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::EffectComponentBase::EffectComponentType $getParticleComponentType() const;

    MCNAPI void $update(::RenderParams&);

    MCNAPI void $renderPreparation(::RenderParams&);
    // NOLINTEND
};

} // namespace ParticleSystem

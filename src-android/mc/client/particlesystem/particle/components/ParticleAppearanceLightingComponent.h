#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleAppearanceLightingComponent : public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleAppearanceLightingComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual void updateParticleAppearance(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, ::RenderParams&);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

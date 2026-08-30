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

class ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE
: public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk54b662;
    ::ll::UntypedStorage<4, 8> mUnk99b93d;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE&
    operator=(ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE const&);
    ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE(
        ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE const&
    );
    ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const&) /*override*/;

    virtual void updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const&);

    MCNAPI void $updateParticleAppearance(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::ParticleSystem::CommonParticle&                 particle,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND
};

} // namespace ParticleSystem

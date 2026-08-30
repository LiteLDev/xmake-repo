#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterRateComponentBase.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EmitterRateInstantComponent : public ::ParticleSystem::EmitterRateComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mNumberOfParticlesToEmitExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EmitterRateInstantComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual ulong getNumberOfParticlesToEmit(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);
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

    MCNAPI ulong $getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::RenderParams&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

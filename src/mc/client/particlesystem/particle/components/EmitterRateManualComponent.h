#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class EmitterRateManualComponent : public ::ParticleSystem::EmitterRateComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mManualParticlesAllowedExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EmitterRateManualComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual ulong getNumberOfParticlesToEmit(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);

    virtual ulong getNumberOfManualParticlesAllowed(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
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

    MCNAPI ulong $getNumberOfManualParticlesAllowed(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EmitterRateManualComponent : public ::ParticleSystem::EmitterRateComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mManualParticlesAllowedExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual uint64 getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    ) /*override*/;

    virtual uint64 getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCFOLD uint64 $getNumberOfParticlesToEmit(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams,
        ::std::chrono::nanoseconds const&                 dt
    );

    MCAPI uint64 $getNumberOfManualParticlesAllowed(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    );
    // NOLINTEND
};
#else // @header-generator platform
class EmitterRateManualComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
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
#include "mc/client/particlesystem/particle/components/EmitterLifetimeComponentBase.h"
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
class EmitterLifetimeOnceComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mActivationTimeExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmitterLifetimeOnceComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual bool emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    virtual bool hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    virtual bool isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);
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

    MCNAPI bool $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter&, ::RenderParams&);

    MCNAPI bool $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);

    MCNAPI bool $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const&, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EmitterLifetimeOnceComponent : public ::ParticleSystem::EmitterLifetimeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mActivationTimeExpr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data) /*override*/;

    virtual void parseJson(::ConstDeserializeDataParams const& deserializeDataParams) /*override*/;

    virtual bool emitterResetting(
        ::ParticleSystem::ComponentAccessParticleEmitter& emitter,
        ::RenderParams&                                   renderParams
    ) /*override*/;

    virtual bool hasEmitterExpired(
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    ) /*override*/;

    virtual bool isEmitterActive(
        ::ParticleSystem::ComponentAccessParticleEmitter const& emitter,
        ::RenderParams&                                         renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCFOLD void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent& data);

    MCAPI void $parseJson(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI bool
    $emitterResetting(::ParticleSystem::ComponentAccessParticleEmitter& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $hasEmitterExpired(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);

    MCFOLD bool
    $isEmitterActive(::ParticleSystem::ComponentAccessParticleEmitter const& emitter, ::RenderParams& renderParams);
    // NOLINTEND
};
#else // @header-generator platform
class EmitterLifetimeOnceComponent {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

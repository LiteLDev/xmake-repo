#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace ParticleSystem { class EmitterInitialComponentBase; }
namespace ParticleSystem { class EmitterLifetimeComponentBase; }
namespace ParticleSystem { class EmitterRateComponentBase; }
namespace ParticleSystem { class EmitterShapeComponentBase; }
namespace ParticleSystem { class ParticleAppearanceComponentBase; }
namespace ParticleSystem { class ParticleCurveBase; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { class ParticleEventNode; }
namespace ParticleSystem { class ParticleInitialComponentBase; }
namespace ParticleSystem { class ParticleLifetimeComponentBase; }
namespace ParticleSystem { class ParticleMotionComponentBase; }
namespace SharedTypes::v1_20_80 { struct ParticleCurve; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponents; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ParticleSystem {

class ParticleEffect {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::EmitterInitialComponentBase>>> mEmitterInitialComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::EmitterLifetimeComponentBase>>> mEmitterLifetimeComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::EmitterRateComponentBase>>> mEmitterRateComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::EmitterShapeComponentBase>>> mEmitterShapeComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleAppearanceComponentBase>>> mParticleAppearanceComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleInitialComponentBase>>> mParticleInitialComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleLifetimeComponentBase>>> mParticleLifetimeComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleMotionComponentBase>>> mParticleMotionComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleCurveBase>>> mParticleCurves;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleEventNode>>> mParticleEvents;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mContainerName;
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialNameHash;
    ::ll::TypedStorage<8, 24, std::string> mTextureName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffect();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _generateEffectComponents(
        ::SharedTypes::v1_20_80::ParticleEffectComponents&,
        ::ParticleSystem::ParticleEffectComponentRegistry const*
    );

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::EmitterLifetimeComponentBase>> const&
           getEmitterLifetimeComponents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::EmitterRateComponentBase>> const&
           getEmitterRateComponents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::EmitterShapeComponentBase>> const&
           getEmitterShapeComponents() const;

    MCNAPI ::HashedString const& getMaterialNameHash() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::ParticleAppearanceComponentBase>> const&
           getParticleAppearanceComponents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::ParticleCurveBase>> const& getParticleCurves() const;

    MCNAPI std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleEventNode>> const&
           getParticleEvents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::ParticleInitialComponentBase>> const&
           getParticleInitialComponents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::ParticleLifetimeComponentBase>> const&
           getParticleLifetimeComponents() const;

    MCNAPI std::vector<std::unique_ptr<ParticleSystem::ParticleMotionComponentBase>> const&
           getParticleMotionComponents() const;

    MCNAPI std::string const& getTextureName() const;

    MCNAPI bool isManualEmitter() const;

    MCNAPI ~ParticleEffect();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Random& getRandomNumberGenerator();

    MCNAPI static void registerParticleEffectData(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Random>& mRandomNumberGenerator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem

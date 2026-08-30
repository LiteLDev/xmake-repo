#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace Json { class Value; }
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
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
// clang-format on

namespace ParticleSystem {

struct ParticleEffectData_Legacy {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::EmitterInitialComponentBase>>> mEmitterInitialComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::EmitterLifetimeComponentBase>>> mEmitterLifetimeComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::EmitterRateComponentBase>>> mEmitterRateComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::EmitterShapeComponentBase>>> mEmitterShapeComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleAppearanceComponentBase>>> mParticleAppearanceComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleInitialComponentBase>>> mParticleInitialComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleLifetimeComponentBase>>> mParticleLifetimeComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleMotionComponentBase>>> mParticleMotionComponents;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleCurveBase>>> mParticleCurves;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ParticleSystem::ParticleEventNode>>> mParticleEvents;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialNameHash;
    ::ll::TypedStorage<8, 24, std::string> mTextureName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectData_Legacy& operator=(ParticleEffectData_Legacy const&);
    ParticleEffectData_Legacy(ParticleEffectData_Legacy const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectData_Legacy(::ParticleSystem::ParticleEffectData_Legacy&&);

    MCNAPI void
    _extractComponents(::ConstDeserializeDataParams const&, ::ParticleSystem::ParticleEffectComponentRegistry const&);

    MCNAPI bool
    parseJson(::ConstDeserializeDataParams const&, ::ParticleSystem::ParticleEffectComponentRegistry const&);

    MCNAPI ~ParticleEffectData_Legacy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::v1_20_80::ParticleEffectData upgrade(::ParticleSystem::ParticleEffectData_Legacy&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ParticleSystem::ParticleEffectData_Legacy&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem

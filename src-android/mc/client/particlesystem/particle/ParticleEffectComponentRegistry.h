#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class EffectComponentBase; }
// clang-format on

namespace ParticleSystem {

class ParticleEffectComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::function<std::unique_ptr<ParticleSystem::EffectComponentBase> ()>>> mComponentRegistry;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    registerComponent(::HashedString const&, std::function<std::unique_ptr<ParticleSystem::EffectComponentBase>()>);
    // NOLINTEND
};

} // namespace ParticleSystem

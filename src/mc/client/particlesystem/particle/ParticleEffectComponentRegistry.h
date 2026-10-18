#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class EffectComponentBase; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class EffectComponentBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleEffectComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::HashedString, ::std::function<::std::unique_ptr<::ParticleSystem::EffectComponentBase>()>>>
        mComponentRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ParticleSystem::EffectComponentBase> generateComponent(::HashedString const& name) const;

    MCAPI void registerComponent(
        ::HashedString const&                                                       name,
        ::std::function<::std::unique_ptr<::ParticleSystem::EffectComponentBase>()> createFunc
    );
    // NOLINTEND
};
#else // @header-generator platform
class ParticleEffectComponentRegistry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

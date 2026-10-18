#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
// clang-format on

namespace ParticleSystem {

struct LegacyTraits {
public:
    // LegacyTraits inner types define
    using LegacyParseArgs = std::tuple<MinEngineVersion, const ParticleSystem::ParticleEffectComponentRegistry*>;
};

} // namespace ParticleSystem
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

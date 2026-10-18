#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/components/ParticleAppearanceComponentBase.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace ParticleSystem {

class ParticleAppearanceCameraDistanceFadeComponent_TODEPRECATE
: public ::ParticleSystem::ParticleAppearanceComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAlpha;
    // NOLINTEND
};

} // namespace ParticleSystem
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

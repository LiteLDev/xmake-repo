#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/platform/brstd/flat_set.h"

struct EmitParticleRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mParticles;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<::ParticleType, ::std::less<::ParticleType>, ::std::vector<::ParticleType>>>
        mParticles;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EmitParticleRequestComponent& operator=(EmitParticleRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

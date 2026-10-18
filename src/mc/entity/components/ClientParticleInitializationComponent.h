#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/ParticleInitializationData.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ParticleInitializationData;
// clang-format on
#endif // @header-generator platform

class ClientParticleInitializationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ParticleInitializationData>> mParticleInitializationData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleInitializationData>> mParticleInitializationData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ClientParticleInitializationComponent& operator=(ClientParticleInitializationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class ClientParticleTerminationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::queue<HashedString, std::deque<HashedString>>> mAnimationControllerNames;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::queue<::HashedString, ::std::deque<::HashedString>>> mAnimationControllerNames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ClientParticleTerminationComponent& operator=(ClientParticleTerminationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class ClientParticleTerminationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::queue<HashedString, std::deque<HashedString>>> mAnimationControllerNames;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientParticleTerminationComponent& operator=(ClientParticleTerminationComponent const&);
};

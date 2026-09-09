#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ParticleInitializationData.h"

class ClientParticleInitializationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ParticleInitializationData>> mParticleInitializationData;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientParticleInitializationComponent& operator=(ClientParticleInitializationComponent const&);
};

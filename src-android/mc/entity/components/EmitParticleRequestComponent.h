#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/platform/brstd/flat_set.h"

struct EmitParticleRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mParticles;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitParticleRequestComponent& operator=(EmitParticleRequestComponent const&);
};

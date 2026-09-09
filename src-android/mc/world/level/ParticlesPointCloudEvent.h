#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ParticlesPointCloudEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>                      mParticleType;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<Vec3, Vec3>>> mParticles;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class ClientParticleTrackingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mParticleEmitterLists;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientParticleTrackingComponent& operator=(ClientParticleTrackingComponent const&);
};
#else // @header-generator platform
class ClientParticleTrackingComponent {};
#endif // @header-generator platform

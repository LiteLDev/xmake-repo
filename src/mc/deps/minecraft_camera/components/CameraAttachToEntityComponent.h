#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

namespace MinecraftCamera {

struct CameraAttachToEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mValidActor;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                                 mActorId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                                mActorId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mActorLocation;
    // NOLINTEND
};

} // namespace MinecraftCamera

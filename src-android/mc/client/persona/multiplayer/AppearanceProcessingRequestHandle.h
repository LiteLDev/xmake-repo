#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

namespace persona::multiplayer {

struct AppearanceProcessingRequestHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPlayerId;
    ::ll::TypedStorage<4, 4, uint>         mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    AppearanceProcessingRequestHandle();
};

} // namespace persona::multiplayer

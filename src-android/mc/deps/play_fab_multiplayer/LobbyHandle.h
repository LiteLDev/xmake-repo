#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFabMultiplayer {

struct LobbyHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void const*> mHandle;
    // NOLINTEND
};

} // namespace PlayFabMultiplayer

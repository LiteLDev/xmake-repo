#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerMovementSettings.h"

class PlayerMovementSettingsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::PlayerMovementSettings> mSettings;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerMovementSettingsComponent& operator=(PlayerMovementSettingsComponent const&);
    PlayerMovementSettingsComponent(PlayerMovementSettingsComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

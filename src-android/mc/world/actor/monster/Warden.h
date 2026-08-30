#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/Tick.h"

class Warden : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                       mTouchAngerCooldownExpiryTick;
    ::ll::TypedStorage<8, 24, std::optional<ExpiringTick>> mSonicBoomCooldown;
    // NOLINTEND
};

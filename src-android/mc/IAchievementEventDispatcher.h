#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class IAchievementEventDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAchievementEventDispatcher();

    virtual void fireAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds) = 0;

    virtual void fireAwardAchievementNoXBLTelemetry(::Player&, ::MinecraftEventing::AchievementIds) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

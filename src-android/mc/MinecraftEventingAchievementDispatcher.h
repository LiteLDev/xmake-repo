#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IAchievementEventDispatcher.h"
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class MinecraftEventingAchievementDispatcher : public ::IAchievementEventDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftEventingAchievementDispatcher();

    virtual void fireAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    virtual void fireAwardAchievementNoXBLTelemetry(::Player&, ::MinecraftEventing::AchievementIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fireAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);

    MCNAPI void $fireAwardAchievementNoXBLTelemetry(::Player&, ::MinecraftEventing::AchievementIds);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

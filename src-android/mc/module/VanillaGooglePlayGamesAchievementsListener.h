#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/module/IAchievementsListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class Player;
namespace Social { class User; }
// clang-format on

class VanillaGooglePlayGamesAchievementsListener : public ::IAchievementsListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>> mUser;
    ::ll::UntypedStorage<8, 24>                            mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaGooglePlayGamesAchievementsListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaGooglePlayGamesAchievementsListener();

    virtual ::EventResult onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onPlayerAwardAchievement(::Player&, ::MinecraftEventing::AchievementIds);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

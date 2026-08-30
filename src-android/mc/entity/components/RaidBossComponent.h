#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
class Raid;
class Village;
// clang-format on

class RaidBossComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<Village>> mVillage;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerID;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<8, 24, std::string> mProgress;
    ::ll::TypedStorage<4, 4, int> mPlayersRegistered;
    ::ll::TypedStorage<1, 1, bool> mWaveStarted;
    ::ll::TypedStorage<1, 1, bool> mRaidInProgress;
    ::ll::TypedStorage<1, 1, bool> mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float> mHealthPercent;
    ::ll::TypedStorage<4, 24, ::AABB> mBossBarVisibleBounds;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayerUpdate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _broadcastBossEvent(::BossEventUpdateType, ::Actor&);

    MCNAPI void _handleRegisterPlayers(::Actor&);

    MCNAPI void _sendBossEvent(::BossEventUpdateType, ::Player&);

    MCNAPI ::BossBarColor getColor();

    MCNAPI float getHealthPercent();

    MCNAPI ::Bedrock::Safety::RedactableString getName();

    MCNAPI ::ActorUniqueID getOwnerUniqueID();

    MCNAPI bool getRaidInProgress();

    MCNAPI std::shared_ptr<Village> getVillage();

    MCNAPI bool getWaveStarted();

    MCNAPI void initialize(::ActorUniqueID);

    MCNAPI void registerPlayer(::Player*);

    MCNAPI void removeBossBar(::Actor&);

    MCNAPI void resendRaidBossEventData(::Player&);

    MCNAPI void sendRegistryMessages(::Actor&);

    MCNAPI void setVillage(std::weak_ptr<Village>);

    MCNAPI void setWaveStarted(bool);

    MCNAPI void setupBossBarInfo(::Actor&, ::Village*);

    MCNAPI bool tryRemoveBoss(::Actor&, ::Player&);

    MCNAPI void unRegisterPlayer(::Player*);

    MCNAPI void updateBossBarStats(::Actor&, ::Raid const&);

    MCNAPI void updateHealthBarVisible(bool, ::Actor&);
    // NOLINTEND
};

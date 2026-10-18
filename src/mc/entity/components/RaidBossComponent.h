#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/util/BossBarColor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Raid;
#else // @header-generator platform
#endif // @header-generator platform
class Village;
// clang-format on

class RaidBossComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Village>>             mVillage;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mOwnerID;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>    mName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mProgress;
    ::ll::TypedStorage<4, 4, int>                                     mPlayersRegistered;
    ::ll::TypedStorage<1, 1, bool>                                    mWaveStarted;
    ::ll::TypedStorage<1, 1, bool>                                    mRaidInProgress;
    ::ll::TypedStorage<1, 1, bool>                                    mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float>                                   mHealthPercent;
    ::ll::TypedStorage<4, 24, ::AABB>                                 mBossBarVisibleBounds;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPlayerUpdate;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RaidBossComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _broadcastBossEvent(::BossEventUpdateType, ::Actor&);
#else // @header-generator platform
    MCAPI RaidBossComponent(::RaidBossComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _handleRegisterPlayers(::Actor&);
#else // @header-generator platform
    MCAPI void _broadcastBossEvent(::BossEventUpdateType type, ::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendBossEvent(::BossEventUpdateType, ::Player&);
#else // @header-generator platform
    MCAPI void _handleRegisterPlayers(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BossBarColor getColor();
#else // @header-generator platform
    MCAPI void _sendBossEvent(::BossEventUpdateType type, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getHealthPercent();
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString getName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString getName();
#else // @header-generator platform
    MCAPI bool isWithinRange(::Mob const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getOwnerUniqueID();
#else // @header-generator platform
    MCAPI void registerPlayer(::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getRaidInProgress();
#else // @header-generator platform
    MCAPI void resendRaidBossEventData(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Village> getVillage();
#else // @header-generator platform
    MCAPI void sendRegistryMessages(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getWaveStarted();
#else // @header-generator platform
    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::ActorUniqueID);
#else // @header-generator platform
    MCAPI void unRegisterPlayer(::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerPlayer(::Player*);
#else // @header-generator platform
    MCAPI void updateHealthBarVisible(bool visible, ::Actor& owner);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RaidBossComponent const&);
#endif // @header-generator platform
    // NOLINTEND
};

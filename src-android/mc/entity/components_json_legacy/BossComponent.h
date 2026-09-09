#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Player;
// clang-format on

struct BossComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<1, 1, bool> mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float> mHealthPercent;
    ::ll::TypedStorage<1, 1, bool> mShouldDarkenSky;
    ::ll::TypedStorage<1, 1, bool> mCreateWorldFog;
    ::ll::TypedStorage<1, 1, ::BossBarColor> mColor;
    ::ll::TypedStorage<1, 1, ::BossBarOverlay> mOverlay;
    ::ll::TypedStorage<4, 4, int> mPlayersRegistered;
    ::ll::TypedStorage<4, 4, int> mLastHealth;
    ::ll::TypedStorage<4, 4, int> mHudRangeSquared;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayerUpdate;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, int>> mPlayerParty;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BossComponent();

    MCNAPI void _sendBossEvent(::Actor&, ::BossEventUpdateType, ::Player*);

    MCNAPI void addPlayerToParty(::mce::UUID, int);

    MCNAPI void broadcastBossEvent(::Actor&, ::BossEventUpdateType);

    MCNAPI void handleRegisterPlayers(::Actor&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void registerPlayer(::Actor&, ::Player*);

    MCNAPI void resendBossEventData(::Actor&, ::Player*);

    MCNAPI void sendDeathTelemetry(::Actor&);

    MCNAPI void setColor(::Actor&, ::BossBarColor);

    MCNAPI void setHealthBarVisible(::Actor&, bool);

    MCNAPI void setHealthPercent(::Actor&, float);

    MCNAPI void setName(::Actor&, ::Bedrock::Safety::RedactableString const&);

    MCNAPI bool tryRemoveBoss(::Actor&, ::Player&);

    MCNAPI void unRegisterPlayer(::Actor&, ::Player*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

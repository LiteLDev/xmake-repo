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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>    mName;
    ::ll::TypedStorage<1, 1, bool>                                    mHealthBarVisible;
    ::ll::TypedStorage<4, 4, float>                                   mHealthPercent;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldDarkenSky;
    ::ll::TypedStorage<1, 1, bool>                                    mCreateWorldFog;
    ::ll::TypedStorage<1, 1, ::BossBarColor>                          mColor;
    ::ll::TypedStorage<1, 1, ::BossBarOverlay>                        mOverlay;
    ::ll::TypedStorage<4, 4, int>                                     mPlayersRegistered;
    ::ll::TypedStorage<4, 4, int>                                     mLastHealth;
    ::ll::TypedStorage<4, 4, int>                                     mHudRangeSquared;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPlayerUpdate;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, int>> mPlayerParty;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BossComponent();
#else // @header-generator platform
    MCAPI BossComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendBossEvent(::Actor&, ::BossEventUpdateType, ::Player*);
#else // @header-generator platform
    MCAPI void _sendBossEvent(::Actor& owner, ::BossEventUpdateType type, ::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPlayerToParty(::mce::UUID, int);
#else // @header-generator platform
    MCAPI void broadcastBossEvent(::Actor& owner, ::BossEventUpdateType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastBossEvent(::Actor&, ::BossEventUpdateType);
#else // @header-generator platform
    MCAPI void handleRegisterPlayers(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handleRegisterPlayers(::Actor&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void registerPlayer(::Actor& owner, ::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerPlayer(::Actor&, ::Player*);
#else // @header-generator platform
    MCAPI void resendBossEventData(::Actor& owner, ::Player* player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resendBossEventData(::Actor&, ::Player*);
#else // @header-generator platform
    MCAPI void sendDeathTelemetry(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendDeathTelemetry(::Actor&);
#else // @header-generator platform
    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setColor(::Actor&, ::BossBarColor);

    MCNAPI void setHealthBarVisible(::Actor&, bool);

    MCNAPI void setHealthPercent(::Actor&, float);

    MCNAPI void setName(::Actor&, ::Bedrock::Safety::RedactableString const&);

    MCNAPI bool tryRemoveBoss(::Actor&, ::Player&);

    MCNAPI void unRegisterPlayer(::Actor&, ::Player*);
#else // @header-generator platform
    MCAPI void unRegisterPlayer(::Actor& owner, ::Player* player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

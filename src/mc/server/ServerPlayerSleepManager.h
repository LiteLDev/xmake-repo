#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/IServerPlayerSleepManagerConnector.h"
#include "mc/world/level/PlayerSleepManager.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
class IPlayerDimensionTransferConnector;
class IPlayerSleepPercentageGetter;
class LevelEventManager;
class Player;
class PlayerDeathManager;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerSleepStatus;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager, public ::IServerPlayerSleepManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerSleepPercentageGetter>> const> mPlayerSleepPercentageGetter;
    ::ll::UntypedStorage<8, 24> mLevelEventManager;
    ::ll::UntypedStorage<8, 88> mOnPlayerWakeUpPublisher;
    ::ll::UntypedStorage<8, 88> mOnWakeUpAllPlayersPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerSleepPercentageGetter>> const>
                                                                                        mPlayerSleepPercentageGetter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const> mLevelEventManager;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPlayerWakeUpPublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnWakeUpAllPlayersPublisher;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyPlayerChangeDimensionPrepareRegionCompleteSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>
                                   mOnAnyPlayerChangeDimensionPrepareRegionCompleteSubscription;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mEnoughPlayersAreSleeping;
    ::ll::TypedStorage<1, 1, bool> mShouldSendSleepMessage;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerSleepManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerPlayerSleepManager();
#else // @header-generator platform
    virtual ~ServerPlayerSleepManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateSleepingPlayerList();
#else // @header-generator platform
    virtual void updateSleepingPlayerList() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(Player&)>& getPlayerWakeUpConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getPlayerWakeUpConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onPlayerDeath();
#else // @header-generator platform
    MCAPI ServerPlayerSleepManager(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
    );

    MCFOLD void _onPlayerDeath();

    MCAPI bool enoughPlayersDeepSleeping() const;

    MCAPI void initializeWithPlayerDeathManager(::PlayerDeathManager& playerDeathManager);

    MCAPI void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);

    MCAPI void tickCheckToWakeUpPlayers();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerSleepPercentageGetter>    playerSleepPercentageGetter,
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager>   levelEventManager
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateSleepingPlayerList();
#else // @header-generator platform
    MCAPI void $updateSleepingPlayerList();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(Player&)>& $getPlayerWakeUpConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::Player&)>& $getPlayerWakeUpConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::Player&)>& $getPlayerWakeUpConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

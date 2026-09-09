#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
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
struct PlayerSleepStatus;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerPlayerSleepManager : public ::PlayerSleepManager, public ::IServerPlayerSleepManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerSleepPercentageGetter>> const> mPlayerSleepPercentageGetter;
    ::ll::UntypedStorage<8, 24> mLevelEventManager;
    ::ll::UntypedStorage<8, 88> mOnPlayerWakeUpPublisher;
    ::ll::UntypedStorage<8, 88> mOnWakeUpAllPlayersPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyPlayerChangeDimensionPrepareRegionCompleteSubscription;
    ::ll::TypedStorage<1, 1, bool> mEnoughPlayersAreSleeping;
    ::ll::TypedStorage<1, 1, bool> mShouldSendSleepMessage;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerSleepManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPlayerSleepManager();

    virtual void updateSleepingPlayerList();

    virtual ::Bedrock::PubSub::Connector<void(Player&)>& getPlayerWakeUpConnector();

    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onPlayerDeath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateSleepingPlayerList();

    MCNAPI ::Bedrock::PubSub::Connector<void(Player&)>& $getPlayerWakeUpConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnWakeUpAllPlayersConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

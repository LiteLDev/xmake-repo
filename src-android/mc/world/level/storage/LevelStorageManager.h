#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/ILevelStorageManagerConnector.h"
#include "mc/world/level/storage/SavedDataStorage.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class GameDataSaveTimer;
class IDimensionManagerConnector;
class IMinecraftEventing;
class IPlayerDeathManagerConnector;
class LevelStorage;
class Player;
class UserStorageChecker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelStorageManager : public ::ILevelStorageManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                    mLevelStorage;
    ::ll::TypedStorage<8, 56, ::SavedDataStorage>                                  mSavedDataStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<GameDataSaveTimer>>>  mGameDataSaveTimer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<UserStorageChecker>>> mUserStorageChecker;
    ::ll::UntypedStorage<8, 88>                                                    mSavePublisher;
    ::ll::UntypedStorage<8, 88>                                                    mSaveGameDataPublisher;
    ::ll::UntypedStorage<8, 88>                                                    mSaveLevelDataPublisher;
    ::ll::UntypedStorage<8, 88>                                                    mCanStartSaveTimerCheckPublisher;
    ::ll::UntypedStorage<8, 88>                                                    mOnStartLeaveGamePublisher;
    ::ll::UntypedStorage<8, 88>                                                    mOnAppSuspendPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnDimensionCreatedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsLevelTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                mEventing;
    ::ll::TypedStorage<4, 4, uint>                                                 mPollSaveGameStatisticsCount;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&);
    LevelStorageManager(LevelStorageManager const&);
    LevelStorageManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageManager();

    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveConnector();

    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveGameDataConnector();

    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveLevelDataConnector();

    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector();

    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnStartLeaveGameConnector();

    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<LevelStorage>,
        std::unique_ptr<GameDataSaveTimer>,
        std::unique_ptr<UserStorageChecker>,
        ::IMinecraftEventing&
    );

    MCNAPI void _onNewDimensionCreated(::Dimension&);

    MCNAPI void _savePlayer(::Player&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>> getLevelStorage();

    MCNAPI ::SavedDataStorage& getSavedDataStorage();

    MCNAPI void initializeWithDimensionManager(::IDimensionManagerConnector&);

    MCNAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector&);

    MCNAPI void onAppSuspend();

    MCNAPI void onLevelTearingDown();

    MCNAPI void onStartLeaveGame();

    MCNAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCNAPI void save(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void saveGameData(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void saveLevelData();

    MCNAPI void trySaveGameData(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void tryStartGameDataSaveTimerIfNotSet(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<LevelStorage>,
        std::unique_ptr<GameDataSaveTimer>,
        std::unique_ptr<UserStorageChecker>,
        ::IMinecraftEventing&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveGameDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveLevelDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnStartLeaveGameConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

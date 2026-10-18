#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::LevelStorage>> const> mLevelStorage;
    ::ll::TypedStorage<8, 80, ::SavedDataStorage>                                                   mSavedDataStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::GameDataSaveTimer>>>               mGameDataSaveTimer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::UserStorageChecker>>>              mUserStorageChecker;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSavePublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSaveGameDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mSaveLevelDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(bool&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mCanStartSaveTimerCheckPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelStorage&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnStartLeaveGamePublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnAppSuspendPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnPlayerDeathSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnDimensionCreatedSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsLevelTearingDown;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>            mEventing;
    ::ll::TypedStorage<4, 4, uint>                             mPollSaveGameStatisticsCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&);
    LevelStorageManager(LevelStorageManager const&);
    LevelStorageManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelStorageManager();
#else // @header-generator platform
    virtual ~LevelStorageManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveGameDataConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnSaveLevelDataConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(LevelStorage&)>& getOnStartLeaveGameConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<LevelStorage>,
        std::unique_ptr<GameDataSaveTimer>,
        std::unique_ptr<UserStorageChecker>,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onNewDimensionCreated(::Dimension&);
#else // @header-generator platform
    MCAPI void _onNewDimensionCreated(::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _savePlayer(::Player&);
#else // @header-generator platform
    MCAPI void _savePlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<LevelStorage>> getLevelStorage();
#else // @header-generator platform
    MCAPI void initializeWithDimensionManager(::IDimensionManagerConnector& dimensionManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SavedDataStorage& getSavedDataStorage();
#else // @header-generator platform
    MCAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector& playerDeathManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithDimensionManager(::IDimensionManagerConnector&);
#else // @header-generator platform
    MCAPI void onStartLeaveGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector&);
#else // @header-generator platform
    MCAPI void save(::std::chrono::steady_clock::time_point currentTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onAppSuspend();
#else // @header-generator platform
    MCAPI void saveGameData(::std::chrono::steady_clock::time_point currentTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onLevelTearingDown();
#else // @header-generator platform
    MCAPI void saveLevelData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void trySaveGameData(::std::chrono::steady_clock::time_point currentTime);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<LevelStorage>,
        std::unique_ptr<GameDataSaveTimer>,
        std::unique_ptr<UserStorageChecker>,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveConnector();
#else // LL_PLAT_C
    MCAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveGameDataConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveGameDataConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnSaveLevelDataConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveLevelDataConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelStorage&)>& $getOnStartLeaveGameConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnStartLeaveGameConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();
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

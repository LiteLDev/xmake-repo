#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/GameplayUserSuspension.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/IGameplayUserManagerConnector.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class GameplayUserManagerProxy;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class GameplayUserSuspension;
#endif // @header-generator platform
class ILevelStorageManagerConnector;
class IServerMapDataManagerConnector;
class LevelStorage;
class MapItemSavedData;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
class WeakEntityRef;
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GameplayUserManager : public ::IGameplayUserManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>>          mActiveGameplayUsers;
    ::ll::TypedStorage<8, 24, std::vector<WeakEntityRef>>          mSuspendedGameplayUsers;
    ::ll::UntypedStorage<8, 24>                                    mGameplayUserEntities;
    ::ll::TypedStorage<8, 24, std::vector<GameplayUserSuspension>> mSuspendResumeList;
    ::ll::UntypedStorage<8, 88>                                    mOnGameplayUserAdded;
    ::ll::UntypedStorage<8, 88>                                    mOnGameplayUserResumedPublisher;
    ::ll::UntypedStorage<8, 88>                                    mOnGameplayUserSuspendedPublisher;
    ::ll::UntypedStorage<8, 88>                                    mOnPlayerRenamedPublisher;
    ::ll::UntypedStorage<8, 88>                                    mOnGameplayUserRemovedPublisher;
    ::ll::UntypedStorage<8, 88>                                    mOnAnyGameplayUsersRemovedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnSaveGameDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnCanStartGameSaveTimerCheckSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnCreateMapSavedDataSubscription;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<GameplayUserManagerProxy>>> mGameplayUserManagerProxy;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>             mActiveGameplayUsers;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>             mSuspendedGameplayUsers;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>> mGameplayUserEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameplayUserSuspension>>    mSuspendResumeList;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserResumedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserSuspendedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPlayerRenamedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::EntityContext&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGameplayUserRemovedPublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnAnyGameplayUsersRemovedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveGameDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCanStartGameSaveTimerCheckSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnCreateMapSavedDataSubscription;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::GameplayUserManagerProxy>>> mGameplayUserManagerProxy;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    GameplayUserManager();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GameplayUserManager();

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GameplayUserManager();
#else // @header-generator platform
    virtual ~GameplayUserManager() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserAddedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserResumedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserSuspendedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>&
    getGameplayUserSuspendedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const Player&)>& getPlayerRenamedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserRemovedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addTrackedMapPlayers(::MapItemSavedData&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit GameplayUserManager(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveAllPlayers(::LevelStorage&);
#else // @header-generator platform
    MCAPI void _addTrackedMapPlayers(::MapItemSavedData& mapItemSavedData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void cleanupRemovedGameplayUsers();
#else // @header-generator platform
    MCAPI void _forEachActivePlayer(::std::function<bool(::Player&)> callback, bool includeRemovedPlayers) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachActiveGameplayUser(std::function<bool(EntityContext&)>) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _resumePlayer(::WeakEntityRef weakEntityUser);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachActivePlayer(std::function<bool(Player&)>) const;
#else // @header-generator platform
    MCAPI void _saveAllPlayers(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachActivePlayerIncludeRemoved(std::function<bool(Player&)>) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _suspendPlayer(::WeakEntityRef weakEntityUser);

    MCAPI void addGameplayUser(::OwnerPtr<::EntityContext> userEntity);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<WeakEntityRef> const& getActiveGameplayUsers() const;
#else // @header-generator platform
    MCAPI void cleanupRemovedGameplayUsers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<OwnerPtr<EntityContext>> const& getGameplayUserEntities() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void clearAllGameplayUserEntities();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isGameplayUserSuspended(::WeakEntityRef) const;
#else // @header-generator platform
    MCAPI void forEachActiveGameplayUser(::std::function<bool(::EntityContext&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector&);
#else // @header-generator platform
    MCAPI bool isGameplayUserSuspended(::WeakEntityRef weakEntityUser) const;

#ifdef LL_PLAT_S
    MCAPI void queueResumePlayer(::EntityContext const& playerEntity);

    MCAPI void queueSuspendPlayer(::EntityContext const& playerEntity);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif

    MCAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector& serverMapDataManagerConnector);

#ifdef LL_PLAT_S
    MCAPI void startLeaveGame();

    MCAPI void tickSuspensions();
#endif
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
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::std::unique_ptr<::GameplayUserManagerProxy> gameplayUserManagerProxy);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(EntityContext&)>& $getGameplayUserAddedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserAddedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(const EntityContext&)>& $getGameplayUserResumedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserResumedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(const EntityContext&)>& $getGameplayUserSuspendedConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& $getGameplayUserSuspendedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(const Player&)>& $getPlayerRenamedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::Player const&)>& $getPlayerRenamedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(EntityContext&)>& $getGameplayUserRemovedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::EntityContext&)>& $getGameplayUserRemovedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();
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

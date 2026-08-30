#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/GameplayUserSuspension.h"
#include "mc/world/level/IGameplayUserManagerConnector.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManagerProxy;
class ILevelStorageManagerConnector;
class IServerMapDataManagerConnector;
class LevelStorage;
class MapItemSavedData;
class Player;
class Random;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GameplayUserManager : public ::IGameplayUserManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    GameplayUserManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameplayUserManager();

    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserAddedConnector();

    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserResumedConnector();

    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserSuspendedConnector();

    virtual ::Bedrock::PubSub::Connector<void(const Player&)>& getPlayerRenamedConnector();

    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserRemovedConnector();

    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addTrackedMapPlayers(::MapItemSavedData&);

    MCNAPI void _saveAllPlayers(::LevelStorage&);

    MCNAPI void cleanupRemovedGameplayUsers();

    MCNAPI void forEachActiveGameplayUser(std::function<bool(EntityContext&)>) const;

    MCNAPI void forEachActivePlayer(std::function<bool(Player&)>) const;

    MCNAPI void forEachActivePlayerIncludeRemoved(std::function<bool(Player&)>) const;

    MCNAPI std::vector<WeakEntityRef> const& getActiveGameplayUsers() const;

    MCNAPI std::vector<OwnerPtr<EntityContext>> const& getGameplayUserEntities() const;

    MCNAPI bool isGameplayUserSuspended(::WeakEntityRef) const;

    MCNAPI void registerMapDataManagerListener(::IServerMapDataManagerConnector&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(EntityContext&)>& $getGameplayUserAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const EntityContext&)>& $getGameplayUserResumedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const EntityContext&)>& $getGameplayUserSuspendedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const Player&)>& $getPlayerRenamedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(EntityContext&)>& $getGameplayUserRemovedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getAnyGameplayUsersRemovedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerAbilitiesManager;
class PlayerListEntry;
class PlayerListManager;
// clang-format on

class PlayerPermissionsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mPlayerAbilitiesManager;
    ::ll::UntypedStorage<8, 32>                                             mPlayerListManager;
    ::ll::UntypedStorage<8, 48>                                             mGetPrimaryLocalPlayer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                               mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, std::optional<PlayerPermissionLevel>>          mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<AbilitiesIndex, bool>>> mCurrentPlayerPermissionsList;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<AbilitiesIndex, bool>>> mLocalPlayerPermissionsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mPlayerAbilitiesSubscription;
    ::ll::UntypedStorage<8, 40>                                             mPlayerPermissionsChangedPublisher;
    ::ll::UntypedStorage<8, 40> mCachedPlayerPermissionLevelChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPermissionsManager();

    virtual bool hasPlayerPermissions(::ActorUniqueID) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissionsManager(
        ::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>,
        ::Bedrock::NonOwnerPointer<PlayerListManager>,
        std::function<Player*()>
    );

    MCNAPI void _loadLocalPermissionsList();

    MCNAPI void _updatePermissionLevel();

    MCNAPI void _updatePermissionsList();

    MCNAPI bool
        arePermissionsSynced(std::optional<PlayerPermissionLevel>, std::vector<std::pair<AbilitiesIndex, bool>>) const;

    MCNAPI bool evaluateCanEditPermissions(::ActorUniqueID, bool, bool) const;

    MCNAPI bool evaluateCanKickPlayer(::ActorUniqueID, ::ActorUniqueID);

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const ActorUniqueID&, std::optional<PlayerPermissionLevel>),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getCachedPlayerPermissionLevelChangedPublisher();

    MCNAPI ::ActorUniqueID getCurrentPlayerId() const;

    MCNAPI std::optional<PlayerPermissionLevel> getCurrentPlayerPermissionLevel(::ActorUniqueID) const;

    MCNAPI std::optional<std::vector<std::pair<AbilitiesIndex, bool>>>
           getCurrentPlayerPermissionsList(::ActorUniqueID) const;

    MCNAPI ::PlayerListEntry* getPlayerFromAUID(::ActorUniqueID) const;

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const ActorUniqueID&, bool),
        Bedrock::PubSub::ThreadModel::SingleThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getPlayerPermissionsChangedPublisher();

    MCNAPI bool isPlayerInList(::ActorUniqueID) const;

    MCNAPI bool isPlayerValid(::ActorUniqueID) const;

    MCNAPI bool loadPlayerPermissions(::ActorUniqueID);

    MCNAPI bool savePlayerPermissions(::ActorUniqueID);

    MCNAPI bool setPlayerPermission(::ActorUniqueID, ::AbilitiesIndex, bool);

    MCNAPI bool setPlayerPermissionLevel(::ActorUniqueID, ::PlayerPermissionLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>,
        ::Bedrock::NonOwnerPointer<PlayerListManager>,
        std::function<Player*()>
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
    MCNAPI bool $hasPlayerPermissions(::ActorUniqueID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerAbilitiesManager;
#if defined(LL_PLAT_A) // @header-generator platform
class PlayerListEntry;
#else // @header-generator platform
#endif // @header-generator platform
class PlayerListManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
#endif // @header-generator platform
// clang-format on

class PlayerPermissionsManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>> mPlayerAbilitiesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerListManager>>      mPlayerListManager;
    ::ll::TypedStorage<8, 64, ::std::function<::Player*()>>                         mGetPrimaryLocalPlayer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                       mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>>              mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::AbilitiesIndex, bool>>>   mCurrentPlayerPermissionsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::AbilitiesIndex, bool>>>   mLocalPlayerPermissionsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mPlayerAbilitiesSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::
            Publisher<void(::ActorUniqueID const&, bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mPlayerPermissionsChangedPublisher;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::ActorUniqueID const&, ::std::optional<::PlayerPermissionLevel>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mCachedPlayerPermissionLevelChangedPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayerPermissionsManager();
#else // @header-generator platform
    virtual ~PlayerPermissionsManager() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasPlayerPermissions(::ActorUniqueID) const;
#else // @header-generator platform
    virtual bool hasPlayerPermissions(::ActorUniqueID playerId) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerPermissionsManager(
        ::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>,
        ::Bedrock::NonOwnerPointer<PlayerListManager>,
        std::function<Player*()>
#else // @header-generator platform
    MCAPI PlayerPermissionsManager(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager,
        ::Bedrock::NonOwnerPointer<::PlayerListManager>      playerListManager,
        ::std::function<::Player*()>                         getPrimaryLocalPlayer
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadLocalPermissionsList();
#else // @header-generator platform
    MCAPI void _loadLocalPermissionsList();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _updatePermissionLevel();

    MCAPI void _updatePermissionsList();

    MCAPI bool arePermissionsSynced(
        ::std::optional<::PlayerPermissionLevel>           playerPermissionLevel,
        ::std::vector<::std::pair<::AbilitiesIndex, bool>> playerPermissions
    ) const;

    MCAPI bool evaluateCanEditPermissions(
        ::ActorUniqueID localPlayerId,
        bool            isPrimaryClient,
        bool            isHostingLocalDedicatedServer
    ) const;

    MCAPI bool evaluateCanKickPlayer(::ActorUniqueID playerId, ::ActorUniqueID localPlayerId);

    MCAPI ::std::optional<::std::vector<::std::pair<::AbilitiesIndex, bool>>>
    getCurrentPlayerPermissionsList(::ActorUniqueID playerId) const;

    MCAPI bool loadPlayerPermissions(::ActorUniqueID playerId);

    MCAPI bool savePlayerPermissions(::ActorUniqueID playerId);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>,
        ::Bedrock::NonOwnerPointer<PlayerListManager>,
        std::function<Player*()>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager> playerAbilitiesManager,
        ::Bedrock::NonOwnerPointer<::PlayerListManager>      playerListManager,
        ::std::function<::Player*()>                         getPrimaryLocalPlayer
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
    MCNAPI bool $hasPlayerPermissions(::ActorUniqueID) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $hasPlayerPermissions(::ActorUniqueID playerId) const;
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

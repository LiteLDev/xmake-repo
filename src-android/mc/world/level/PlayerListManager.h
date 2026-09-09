#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/PlayerListEntry.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class PacketSender;
class PlayerListPacket;
class PlayerLocationReceiver;
class PlayerLocationSender;
struct ActorUniqueID;
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, PlayerListEntry>> mPlayerList;
    ::ll::UntypedStorage<8, 24>                                               mPacketSender;
    ::ll::UntypedStorage<8, 24>                                               mPlayerLocationReceiver;
    ::ll::UntypedStorage<8, 24>                                               mPlayerLocationSender;
    ::ll::UntypedStorage<8, 88>                                               mOnPlayerListEntryAdded;
    ::ll::UntypedStorage<8, 88>                                               mOnPlayerListEntryRemoved;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerListPacket>>               mPendingPlayerListRemovePacket;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerListManager();

    MCNAPI void _onAnyGameplayUsersRemoved();

    MCNAPI void _onGameplayUserAdded(::EntityContext&);

    MCNAPI void _onGameplayUserRemoved(::EntityContext&);

    MCNAPI void addPlayerEntry(::mce::UUID const&, ::PlayerListEntry&&);

    MCNAPI void clearPlayerList();

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const PlayerListEntry&, const std::unordered_map<mce::UUID, PlayerListEntry>&)>&
    getOnPlayerListEntryAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const PlayerListEntry&, const std::unordered_map<mce::UUID, PlayerListEntry>&)>&
    getOnPlayerListEntryRemovedConnector();

    MCNAPI std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const;

    MCNAPI std::string const& getPlayerXUID(::mce::UUID const&) const;

    MCNAPI void initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector&);

    MCNAPI void removeByUUID(::mce::UUID const&);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void setPlayerLocationReceiver(::Bedrock::NonOwnerPointer<PlayerLocationReceiver>);

    MCNAPI void setPlayerLocationSender(::Bedrock::NonOwnerPointer<PlayerLocationSender>);

    MCNAPI ::PlayerListEntry* tryGetPlayerEntry(::mce::UUID const&);

    MCNAPI ~PlayerListManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

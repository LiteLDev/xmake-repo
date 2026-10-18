#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/PlayerListEntry.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PlayerListEntry;
#endif // @header-generator platform
class PlayerListPacket;
class PlayerLocationReceiver;
class PlayerLocationSender;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#endif // @header-generator platform
// clang-format on

class PlayerListManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::PlayerListEntry>> mPlayerList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>           mPacketSender;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationReceiver>> mPlayerLocationReceiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerLocationSender>>   mPlayerLocationSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnPlayerListEntryAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::PlayerListEntry const&, ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                                    mOnPlayerListEntryRemoved;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnAnyGameplayUsersRemovedSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerListPacket>> mPendingPlayerListRemovePacket;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerListManager();
#else // @header-generator platform
    MCAPI void _onAnyGameplayUsersRemoved();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onAnyGameplayUsersRemoved();
#else // @header-generator platform
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserAdded(::EntityContext&);
#else // @header-generator platform
    MCAPI void _onGameplayUserRemoved(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addPlayerEntry(::mce::UUID const& uuid, ::PlayerListEntry&& playerListEntry);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPlayerEntry(::mce::UUID const&, ::PlayerListEntry&&);
#else // @header-generator platform
    MCAPI void initializeWithGameplayUserManagerOnServer(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearPlayerList();
#else // @header-generator platform
    MCAPI void removeByUUID(::mce::UUID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<
        void(const PlayerListEntry&, const std::unordered_map<mce::UUID, PlayerListEntry>&)>&
    getOnPlayerListEntryAddedConnector();
#else // @header-generator platform
    MCAPI void setPlayerLocationReceiver(::Bedrock::NonOwnerPointer<::PlayerLocationReceiver> playerLocationReceiver);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<
        void(const PlayerListEntry&, const std::unordered_map<mce::UUID, PlayerListEntry>&)>&
    getOnPlayerListEntryRemovedConnector();
#else // @header-generator platform
    MCAPI void setPlayerLocationSender(::Bedrock::NonOwnerPointer<::PlayerLocationSender> playerLocationSender);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getPlayerPlatformOnlineId(::mce::UUID const&) const;
#else // @header-generator platform
    MCAPI ::PlayerListEntry* tryGetPlayerEntry(::mce::UUID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~PlayerListManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/WorldPlayersListListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
class PlayerListManager;
struct LocalPlayerChangedConnector;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/WorldPlayersListListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PlayerListEntry;
class PlayerListManager;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldPlayerListTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                mGetCurrentLocalPlayer;
    ::ll::UntypedStorage<8, 24>                                mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mLocalPlayerLoaded;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>>          mPlayerList;
    ::ll::TypedStorage<8, 8, double>                           mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double>                           mTimestampMs;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirtyOperation;
    ::ll::UntypedStorage<8, 48>                                mListSubscribers;
    ::ll::UntypedStorage<8, 64>                                mWorldPlayersListListener;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayerListTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayerListTracker();

    virtual std::vector<mce::UUID> const& getPlayerList();

    virtual ::PlayerListEntry const* getPlayerEntry(::mce::UUID const&);

    virtual std::vector<mce::UUID> _getCurrentLobby() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldPlayerListTracker(std::function<LocalPlayer*()>, ::LocalPlayerChangedConnector);

    MCNAPI void _init();

    MCNAPI std::vector<const PlayerListEntry*> getLobbyPlayerList();

    MCNAPI void refresh();

    MCNAPI ::Bedrock::PubSub::Subscription registerListener(std::function<void()>);

    MCNAPI void update(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<LocalPlayer*()>, ::LocalPlayerChangedConnector);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<mce::UUID> const& $getPlayerList();

    MCNAPI ::PlayerListEntry const* $getPlayerEntry(::mce::UUID const&);

    MCNAPI std::vector<mce::UUID> $_getCurrentLobby() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldPlayerListTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>               mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerListManager>> mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mLocalPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mLocalPlayerLoaded;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                      mPlayerList;
    ::ll::TypedStorage<8, 8, double>                                           mLastUpdateMs;
    ::ll::TypedStorage<8, 8, double>                                           mTimestampMs;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirtyOperation;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                                 mListSubscribers;
    ::ll::TypedStorage<8, 72, ::World::WorldPlayersListListener> mWorldPlayersListListener;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPlayerListTracker() = default;

    virtual ::std::vector<::mce::UUID> const& getPlayerList();

    virtual ::PlayerListEntry const* getPlayerEntry(::mce::UUID const& uuid);

    virtual ::std::vector<::mce::UUID> _getCurrentLobby() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _init();

    MCAPI bool _updatePlayerList();

    MCAPI ::std::vector<::PlayerListEntry const*> getLobbyPlayerList();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::mce::UUID> const& $getPlayerList();

    MCAPI ::PlayerListEntry const* $getPlayerEntry(::mce::UUID const& uuid);

    MCAPI ::std::vector<::mce::UUID> $_getCurrentLobby() const;
    // NOLINTEND
};
#else // @header-generator platform
class WorldPlayerListTracker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World

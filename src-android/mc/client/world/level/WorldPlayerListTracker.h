#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace World {

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

} // namespace World

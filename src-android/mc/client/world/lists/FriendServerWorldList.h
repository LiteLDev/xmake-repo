#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/ServerID.h"
#include "mc/client/world/NetworkWorldInfo.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Realms { struct RealmId; }
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace World {

class FriendServerWorldList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                        mGetMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 48>                                                        mIsRealmJoinable;
    ::ll::UntypedStorage<8, 48>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 40, std::unordered_map<Network::ServerID, NetworkWorldInfo>> mServerList;
    ::ll::TypedStorage<8, 8, double>                                                   mLastUpdateMs;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsInTrialmode;
    ::ll::UntypedStorage<1, 15>                                                        mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendServerWorldList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendServerWorldList(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<bool(Realms::RealmId)>,
        std::function<bool()>
    );

    MCNAPI void _refreshWorlds();

    MCNAPI std::optional<Realms::RealmId> getRealmIdByUserId(std::string const&) const;

    MCNAPI std::optional<Network::ServerID> getServerIdByUserId(std::string const&) const;

    MCNAPI ::NetworkWorldInfo const* getWorld(::Network::ServerID const&) const;

    MCNAPI std::unordered_map<Network::ServerID, NetworkWorldInfo> const& getWorlds() const;

    MCNAPI void onTrialModeChanged(bool);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI void update();

    MCNAPI void userControlledUpdateGameList();

    MCNAPI ~FriendServerWorldList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<bool(Realms::RealmId)>,
        std::function<bool()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
